
/* Do not edit, machine generated file */

#include <stdio.h>
#include <stdint.h>

#include "tpm.h"
#include "tpm_table.h"

#define OFF(x) ((void *)&((struct TPM_MULTI *)0)->x)

static struct TPM_TABLE tpm_table[] = {

  { "magic", OFF(magic), 24, 1, CHARA },
  { "mcp_vers", OFF(mcp_vers), 24, 1, CHARA },
  { "plc_vers", OFF(plc_vers), 24, 1, CHARA },
  { "semaphore", OFF(semaphore), 40, 1, CHARA },
  { "fid_vers", OFF(fid_vers), 24, 1, CHARA },
  { "ctime", OFF(ctime), 1, 8, FLOAT64 },
  { "az_pos", OFF(az_pos), 1, 4, INT32 },
  { "az_actual_pos", OFF(az_actual_pos), 1, 4, INT32 },
  { "az_actual_pos2", OFF(az_actual_pos2), 1, 4, INT32 },
  { "az_volts", OFF(az_volts), 1, 4, INT32 },
  { "az_volts2", OFF(az_volts2), 1, 4, INT32 },
  { "az_velocity", OFF(az_velocity), 1, 4, INT32 },
  { "az_amps", OFF(az_amps), 1, 4, INT32 },
  { "az_amps2", OFF(az_amps2), 1, 4, INT32 },
  { "alt_pos", OFF(alt_pos), 1, 4, INT32 },
  { "alt_actual_pos", OFF(alt_actual_pos), 1, 4, INT32 },
  { "alt_actual_pos2", OFF(alt_actual_pos2), 1, 4, INT32 },
  { "alt_volts", OFF(alt_volts), 1, 4, INT32 },
  { "alt_volts2", OFF(alt_volts2), 1, 4, INT32 },
  { "alt_amps", OFF(alt_amps), 1, 4, INT32 },
  { "alt_amps2", OFF(alt_amps2), 1, 4, INT32 },
  { "alt_velocity", OFF(alt_velocity), 1, 4, INT32 },
  { "rot_pos", OFF(rot_pos), 1, 4, INT32 },
  { "rot_actual_pos", OFF(rot_actual_pos), 1, 4, INT32 },
  { "rot_volts", OFF(rot_volts), 1, 4, INT32 },
  { "rot_amps", OFF(rot_amps), 1, 4, INT32 },
  { "rot_velocity", OFF(rot_velocity), 1, 4, INT32 },
  { "az_spt", OFF(az_spt), 1, 8, FLOAT64 },
  { "alt_spt", OFF(alt_spt), 1, 8, FLOAT64 },
  { "rot_spt", OFF(rot_spt), 1, 8, FLOAT64 },
  { "az_err", OFF(az_err), 1, 4, INT32 },
  { "alt_err", OFF(alt_err), 1, 4, INT32 },
  { "rot_err", OFF(rot_err), 1, 4, INT32 },
  { "az_plc_volts", OFF(az_plc_volts), 1, 4, FLOAT32 },
  { "az2_plc_volts", OFF(az2_plc_volts), 1, 4, FLOAT32 },
  { "alt_plc_volts", OFF(alt_plc_volts), 1, 4, FLOAT32 },
  { "alt2_plc_volts", OFF(alt2_plc_volts), 1, 4, FLOAT32 },
  { "rot_plc_volts", OFF(rot_plc_volts), 1, 4, FLOAT32 },
  { "inclinometer", OFF(inclinometer), 1, 4, FLOAT32 },
  { "axis_stat", OFF(axis_stat), 3, 4, UINT32 },
  { "az_fid", OFF(az_fid), 1, 4, INT32 },
  { "alt_fid", OFF(alt_fid), 1, 4, INT32 },
  { "rot_fid", OFF(rot_fid), 1, 4, INT32 },
  { "az_fid_pos", OFF(az_fid_pos), 1, 4, INT32 },
  { "alt_fid_pos", OFF(alt_fid_pos), 1, 4, INT32 },
  { "rot_fid_pos", OFF(rot_fid_pos), 1, 4, INT32 },
  { "sp1_door", OFF(sp1_door), 1, 4, INT32 },
  { "sp2_door", OFF(sp2_door), 1, 4, INT32 },
  { "inst_id", OFF(inst_id), 3, 4, INT32 },
  { "alt_servo", OFF(alt_servo), 1, 4, FLOAT32 },
  { "alt_primary", OFF(alt_primary), 1, 4, FLOAT32 },
  { "az_servo", OFF(az_servo), 1, 4, FLOAT32 },
  { "az_primary", OFF(az_primary), 1, 4, FLOAT32 },
  { "az_ff_drive", OFF(az_ff_drive), 1, 4, FLOAT32 },
  { "lift_force", OFF(lift_force), 1, 4, FLOAT32 },
  { "lift_pos", OFF(lift_pos), 1, 4, FLOAT32 },
  { "plc_cw", OFF(plc_cw), 4, 4, FLOAT32 },
  { "plc_words", OFF(plc_words), 192, 2, UINT16 },
  { "tpm_vers", OFF(tpm_vers), 24, 1, CHARA },
  { "az1_stat", OFF(az1_stat), 1, 4, INT32 },
  { "az2_stat", OFF(az2_stat), 1, 4, INT32 },
  { "alt1_stat", OFF(alt1_stat), 1, 4, INT32 },
  { "alt2_stat", OFF(alt2_stat), 1, 4, INT32 },
  { "rot_stat", OFF(rot_stat), 1, 4, INT32 },
  { "slip_stat", OFF(slip_stat), 8, 4, INT32 },
  { "m1_axial_a", OFF(m1_axial_a), 1, 4, FLOAT32 },
  { "m1_axial_b", OFF(m1_axial_b), 1, 4, FLOAT32 },
  { "m1_axial_c", OFF(m1_axial_c), 1, 4, FLOAT32 },
  { "m1_transverse", OFF(m1_transverse), 1, 4, FLOAT32 },
  { "m1_lateral_e", OFF(m1_lateral_e), 1, 4, FLOAT32 },
  { "m1_lateral_f", OFF(m1_lateral_f), 1, 4, FLOAT32 },
  { "m1_mig_sevr", OFF(m1_mig_sevr), 1, 4, INT32 },
  { "m2_axial_a", OFF(m2_axial_a), 1, 4, FLOAT32 },
  { "m2_axial_b", OFF(m2_axial_b), 1, 4, FLOAT32 },
  { "m2_axial_c", OFF(m2_axial_c), 1, 4, FLOAT32 },
  { "m2_y", OFF(m2_y), 1, 4, FLOAT32 },
  { "m2_mig_sevr", OFF(m2_mig_sevr), 1, 4, INT32 },
  { "dewar_sp1_lb", OFF(dewar_sp1_lb), 1, 4, FLOAT32 },
  { "dewar_sp2_lb", OFF(dewar_sp2_lb), 1, 4, FLOAT32 },
  { "dewar_sp1_psi", OFF(dewar_sp1_psi), 1, 4, FLOAT32 },
  { "dewar_sp2_psi", OFF(dewar_sp2_psi), 1, 4, FLOAT32 },
  { "sevr_sp1", OFF(sevr_sp1), 1, 4, INT32 },
  { "sevr_sp2", OFF(sevr_sp2), 1, 4, INT32 },
  { "pmss_pos", OFF(pmss_pos), 4, 4, FLOAT32 },
  { "pmss_pos_error", OFF(pmss_pos_error), 4, 4, FLOAT32 },
  { "pmss_press", OFF(pmss_press), 4, 4, FLOAT32 },
  { "pmss_press_error", OFF(pmss_press_error), 4, 4, FLOAT32 },
  { "DpTempA", OFF(DpTempA), 1, 4, FLOAT32 },
  { "DpTempB", OFF(DpTempB), 1, 4, FLOAT32 },
  { "DpDepMean", OFF(DpDepMean), 1, 4, FLOAT32 },
  { "sevr_humid", OFF(sevr_humid), 1, 4, INT32 },
  { "wind_speed", OFF(wind_speed), 1, 4, FLOAT32 },
  { "wind_dir", OFF(wind_dir), 1, 4, FLOAT32 },
  { "galil_m1_a", OFF(galil_m1_a), 6, 4, INT32 },
  { "galil_m1_c", OFF(galil_m1_c), 6, 4, INT32 },
  { "galil_m1_h", OFF(galil_m1_h), 6, 4, INT32 },
  { "galil_m1_sevr", OFF(galil_m1_sevr), 1, 4, INT32 },
  { "galil_m2_a", OFF(galil_m2_a), 5, 4, INT32 },
  { "galil_m2_c", OFF(galil_m2_c), 5, 4, INT32 },
  { "galil_m2_h", OFF(galil_m2_h), 5, 4, INT32 },
  { "galil_m2_sevr", OFF(galil_m2_sevr), 1, 4, INT32 },
  { "galil_m2_piezo_a", OFF(galil_m2_piezo_a), 1, 4, INT32 },
  { "galil_m2_piezo_b", OFF(galil_m2_piezo_b), 1, 4, INT32 },
  { "galil_m2_piezo_c", OFF(galil_m2_piezo_c), 1, 4, INT32 },
  { "galil_m2_piezo_stat", OFF(galil_m2_piezo_stat), 1, 4, INT32 },
  { "therm0", OFF(therm0), 64, 4, FLOAT32 },
  { "therm1", OFF(therm1), 64, 4, FLOAT32 },
  { "therm2", OFF(therm2), 64, 4, FLOAT32 },
  { "tmicro_sevr", OFF(tmicro_sevr), 1, 4, INT32 },
  { "cw_limits", OFF(cw_limits), 1, 4, INT32 },
  { NULL, NULL, 0, 0 }
};

struct TPM_TABLE *get_tpm_table()
{
  return tpm_table;
}
