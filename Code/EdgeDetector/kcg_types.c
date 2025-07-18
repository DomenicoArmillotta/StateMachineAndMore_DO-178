/* $********** SCADE Suite KCG 32-bit 6.6.4 (build i3) **********
** Command: kcg664.exe -config C:/Users/mbda/Documents/GitHub/SCADE_project/prova_1/Prova_1/KCG/config.txt
** Generation date: 2025-07-18T14:22:15
*************************************************************$ */

#include "kcg_types.h"

#ifdef kcg_use_array_int8_3_3
kcg_bool kcg_comp_array_int8_3_3(array_int8_3_3 *kcg_c1, array_int8_3_3 *kcg_c2)
{
  kcg_bool kcg_equ;
  kcg_size kcg_ci;

  kcg_equ = kcg_true;
  for (kcg_ci = 0; kcg_ci < 3; kcg_ci++) {
    kcg_equ = kcg_equ & kcg_comp_array_int8_3(
        &(*kcg_c1)[kcg_ci],
        &(*kcg_c2)[kcg_ci]);
  }
  return kcg_equ;
}
#endif /* kcg_use_array_int8_3_3 */

#ifdef kcg_use_array_int8_30_30
kcg_bool kcg_comp_array_int8_30_30(
  array_int8_30_30 *kcg_c1,
  array_int8_30_30 *kcg_c2)
{
  kcg_bool kcg_equ;
  kcg_size kcg_ci;

  kcg_equ = kcg_true;
  for (kcg_ci = 0; kcg_ci < 30; kcg_ci++) {
    kcg_equ = kcg_equ & kcg_comp_array_int8_30(
        &(*kcg_c1)[kcg_ci],
        &(*kcg_c2)[kcg_ci]);
  }
  return kcg_equ;
}
#endif /* kcg_use_array_int8_30_30 */

#ifdef kcg_use_array_int8_32_32
kcg_bool kcg_comp_array_int8_32_32(
  array_int8_32_32 *kcg_c1,
  array_int8_32_32 *kcg_c2)
{
  kcg_bool kcg_equ;
  kcg_size kcg_ci;

  kcg_equ = kcg_true;
  for (kcg_ci = 0; kcg_ci < 32; kcg_ci++) {
    kcg_equ = kcg_equ & kcg_comp_array_int8_32(
        &(*kcg_c1)[kcg_ci],
        &(*kcg_c2)[kcg_ci]);
  }
  return kcg_equ;
}
#endif /* kcg_use_array_int8_32_32 */

#ifdef kcg_use_array_int8_30
kcg_bool kcg_comp_array_int8_30(array_int8_30 *kcg_c1, array_int8_30 *kcg_c2)
{
  kcg_bool kcg_equ;
  kcg_size kcg_ci;

  kcg_equ = kcg_true;
  for (kcg_ci = 0; kcg_ci < 30; kcg_ci++) {
    kcg_equ = kcg_equ & ((*kcg_c1)[kcg_ci] == (*kcg_c2)[kcg_ci]);
  }
  return kcg_equ;
}
#endif /* kcg_use_array_int8_30 */

#ifdef kcg_use_array_int8_3
kcg_bool kcg_comp_array_int8_3(array_int8_3 *kcg_c1, array_int8_3 *kcg_c2)
{
  kcg_bool kcg_equ;
  kcg_size kcg_ci;

  kcg_equ = kcg_true;
  for (kcg_ci = 0; kcg_ci < 3; kcg_ci++) {
    kcg_equ = kcg_equ & ((*kcg_c1)[kcg_ci] == (*kcg_c2)[kcg_ci]);
  }
  return kcg_equ;
}
#endif /* kcg_use_array_int8_3 */

#ifdef kcg_use_array_int8_32
kcg_bool kcg_comp_array_int8_32(array_int8_32 *kcg_c1, array_int8_32 *kcg_c2)
{
  kcg_bool kcg_equ;
  kcg_size kcg_ci;

  kcg_equ = kcg_true;
  for (kcg_ci = 0; kcg_ci < 32; kcg_ci++) {
    kcg_equ = kcg_equ & ((*kcg_c1)[kcg_ci] == (*kcg_c2)[kcg_ci]);
  }
  return kcg_equ;
}
#endif /* kcg_use_array_int8_32 */

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
** Generation date: 2025-07-18T14:22:15
*************************************************************$ */

