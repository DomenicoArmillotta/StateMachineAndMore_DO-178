/* $********** SCADE Suite KCG 32-bit 6.6.4 (build i3) **********
** Command: kcg664.exe -config C:/Users/mbda/Documents/GitHub/SCADE_project/prova_1/Prova_1/KCG/config.txt
** Generation date: 2025-07-18T14:22:15
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "VectAdd_vect_int8_30.h"

/* vect::VectAdd/ */
void VectAdd_vect_int8_30(
  /* U/, _L2/ */
  array_int8_30 *U_int8_30,
  /* V/, _L3/ */
  array_int8_30 *V_int8_30,
  /* W/, _L1/ */
  array_int8_30 *W_int8_30)
{
  kcg_size idx;

  /* _L1= */
  for (idx = 0; idx < 30; idx++) {
    (*W_int8_30)[idx] = (*U_int8_30)[idx] + (*V_int8_30)[idx];
  }
}



/* $********** SCADE Suite KCG 32-bit 6.6.4 (build i3) **********
** VectAdd_vect_int8_30.c
** Generation date: 2025-07-18T14:22:15
*************************************************************$ */

