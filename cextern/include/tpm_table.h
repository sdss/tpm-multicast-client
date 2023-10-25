
#define UINT32   1
#define INT32    2
#define UINT16   3
#define INT16    4
#define UINT8    6
#define FLOAT64  7
#define FLOAT32  8
#define CHARSTAR 9
#define CHARA    10
#define UINT64   11

struct TPM_TABLE {
  char *name;
  void *offset;
  int alen; /* array length */
  int sz;   /* sizeof(type), total len is alen*az  */
  int type;
};

extern struct TPM_TABLE *get_tpm_table(void);
