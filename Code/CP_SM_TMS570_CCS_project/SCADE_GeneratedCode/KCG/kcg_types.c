/* $********** SCADE Suite KCG 32-bit 6.6.4 (build i3) **********
** Command: kcg664.exe -config C:/Users/mbda/Documents/GitHub/SCADE_project/prova_1/Prova_1/KCG/config.txt
** Generation date: 2025-07-10T17:27:30
*************************************************************$ */

#include "kcg_types.h"

#ifdef kcg_use_Type1_State_Machine_TI
kcg_bool kcg_comp_Type1_State_Machine_TI(
  Type1_State_Machine_TI *kcg_c1,
  Type1_State_Machine_TI *kcg_c2)
{
  kcg_bool kcg_equ;

  kcg_equ = kcg_true;
  kcg_equ = kcg_equ & (kcg_c1->struct_int == kcg_c2->struct_int);
  kcg_equ = kcg_equ & (kcg_c1->struct_bool == kcg_c2->struct_bool);
  return kcg_equ;
}
#endif /* kcg_use_Type1_State_Machine_TI */

/* $********** SCADE Suite KCG 32-bit 6.6.4 (build i3) **********
** kcg_types.c
** Generation date: 2025-07-10T17:27:30
*************************************************************$ */

