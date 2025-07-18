/* $********** SCADE Suite KCG 32-bit 6.6.4 (build i3) **********
** Command: kcg664.exe -config C:/Users/mbda/Documents/GitHub/SCADE_project/prova_1/Prova_1/KCG/config.txt
** Generation date: 2025-07-18T14:22:15
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "matrixAbs_Package_convolution_30.h"

/* Package_convolution::matrixAbs/ */
void matrixAbs_Package_convolution_30(
  /* _L4/, matrix_inp/ */
  array_int8_30_30 *matrix_inp_30,
  /* _L3/, matrix_out/ */
  array_int8_30_30 *matrix_out_30)
{
  kcg_size idx;

  /* _L3= */
  for (idx = 0; idx < 30; idx++) {
    /* _L3=(Package_convolution::VectorAbs#1)/ */
    VectorAbs_Package_convolution_30(
      &(*matrix_inp_30)[idx],
      &(*matrix_out_30)[idx]);
  }
}



/* $********** SCADE Suite KCG 32-bit 6.6.4 (build i3) **********
** matrixAbs_Package_convolution_30.c
** Generation date: 2025-07-18T14:22:15
*************************************************************$ */

