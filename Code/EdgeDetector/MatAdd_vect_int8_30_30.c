/* $********** SCADE Suite KCG 32-bit 6.6.4 (build i3) **********
** Command: kcg664.exe -config C:/Users/mbda/Documents/GitHub/SCADE_project/prova_1/Prova_1/KCG/config.txt
** Generation date: 2025-07-18T14:22:15
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "MatAdd_vect_int8_30_30.h"

/* vect::MatAdd/ */
void MatAdd_vect_int8_30_30(
  /* A/, _L3/ */
  array_int8_30_30 *A_int8_30_30,
  /* B/, _L4/ */
  array_int8_30_30 *B_int8_30_30,
  /* C/, _L2/ */
  array_int8_30_30 *C_int8_30_30)
{
  kcg_size idx;

  /* _L2= */
  for (idx = 0; idx < 30; idx++) {
    /* _L2=(vect::VectAdd#1)/ */
    VectAdd_vect_int8_30(
      &(*A_int8_30_30)[idx],
      &(*B_int8_30_30)[idx],
      &(*C_int8_30_30)[idx]);
  }
}



/* $********** SCADE Suite KCG 32-bit 6.6.4 (build i3) **********
** MatAdd_vect_int8_30_30.c
** Generation date: 2025-07-18T14:22:15
*************************************************************$ */

