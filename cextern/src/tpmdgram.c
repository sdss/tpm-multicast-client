#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>

#include <Python.h>

#include "tpm.h"
#include "tpm_table.h"

static void build_tpm_dict( PyObject *dd, struct TPM_MULTI *tpm )
{
  struct TPM_TABLE *tt;
  PyObject *dobj;
  void *data;
  char name[80];
  char *nm;
  int len, ix;

  tt = get_tpm_table();
  while( tt->name ) {
    data = (void *)((char *)tpm + (uint64_t)tt->offset);

    for( ix=0; ix<tt->alen; ix++ ) {
      if( tt->type != CHARA && tt->alen > 1 ) {
        sprintf(name, "%s_%d", tt->name, ix );
        nm = name;
      } else {
        nm = tt->name;
      }
      switch(tt->type) {
        case UINT32:
          if( (dobj = PyLong_FromUnsignedLong((unsigned long)((uint32_t *)data)[ix])))
            PyDict_SetItemString( dd, nm, dobj );
          break;
        case INT32:
          if( (dobj = PyLong_FromLong((long)((int32_t *)data)[ix])))
            PyDict_SetItemString( dd, nm, dobj );
          break;
        case UINT16:
          if( (dobj = PyLong_FromLong((long)((unsigned short *)data)[ix])))
            PyDict_SetItemString( dd, nm, dobj );
          break;
        case INT16:
          if( (dobj = PyLong_FromLong((long)((short *)data)[ix])))
            PyDict_SetItemString( dd, nm, dobj );
          break;
        case UINT8:
          if( (dobj = PyLong_FromLong((long)((char *)data)[ix])))
            PyDict_SetItemString( dd, nm, dobj );
          break;
        case FLOAT64:
          if( (dobj = PyFloat_FromDouble(((double *)data)[ix])))
            PyDict_SetItemString( dd, nm, dobj );
          break;
        case FLOAT32:
          if( (dobj = PyFloat_FromDouble((double)((float *)data)[ix])))
            PyDict_SetItemString( dd, nm, dobj );
          break;
        case CHARSTAR:
          break;
        case CHARA:
          len = strlen((char *)data);
          if( len > tt->alen )
            len = tt->alen;
          if( (dobj = PyUnicode_FromStringAndSize(
               (char *)data, len)))
            PyDict_SetItemString( dd, nm, dobj );
          break;
        case UINT64:
          if( (dobj = PyLong_FromUnsignedLongLong(
             ((unsigned long long *)data)[ix])))
            PyDict_SetItemString( dd, nm, dobj );
          break;
        default:
          break;
      }
    }
    tt++;
  }
}

static PyObject *data2dict(PyObject *self, PyObject *args)
{
  PyObject *dd;
  Py_buffer buffer;

  /* Parse arguments */

  if(!PyArg_ParseTuple(args, "y*", &buffer )) {
    return NULL;
  }

  dd = PyDict_New();

  build_tpm_dict( dd, buffer.buf );

  PyBuffer_Release(&buffer);

  return dd;
}


static PyMethodDef tpmdgram_methods[] = {
    {"data2dict", data2dict, METH_VARARGS, "return dict "},
    {NULL, NULL, 0, NULL}
};


static struct PyModuleDef tpmdgram_module = {
    PyModuleDef_HEAD_INIT,
    "tpmdgram",
    "Python interface for tpmdgram",
    -1,
    tpmdgram_methods
};

PyMODINIT_FUNC PyInit_tpmdgram(void) {
    return PyModule_Create(&tpmdgram_module);
}
