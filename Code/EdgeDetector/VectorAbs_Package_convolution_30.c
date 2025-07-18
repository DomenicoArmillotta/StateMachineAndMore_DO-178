/* $********** SCADE Suite KCG 32-bit 6.6.4 (build i3) **********
** Command: kcg664.exe -config C:/Users/mbda/Documents/GitHub/SCADE_project/prova_1/Prova_1/KCG/config.txt
** Generation date: 2025-07-18T14:22:15
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "VectorAbs_Package_convolution_30.h"

/* Package_convolution::VectorAbs/ */
void VectorAbs_Package_convolution_30(
  /* _L2/, vect_in/ */
  array_int8_30 *vect_in_30,
  /* _L1/, vect_out/ */
  array_int8_30 *vect_out_30)
{
  kcg_size idx;

  /* _L1= */
  for (idx = 0; idx < 30; idx++) {
    /* @1/_L2= */
    if (kcg_lit_int8(0) <= (*vect_in_30)[idx]) {
      (*vect_out_30)[idx] = (*vect_in_30)[idx];
    }
    else {
      (*vect_out_30)[idx] = - (*vect_in_30)[idx];
    }
  }
}

/*
  Expanded instances for: Package_convolution::VectorAbs/
  @1: (math::Abs#1)
*/

/* $********** SCADE Suite KCG 32-bit 6.6.4 (build i3) **********
** VectorAbs_Package_convolution_30.c
** Generation date: 2025-07-18T14:22:15
*************************************************************$ */

