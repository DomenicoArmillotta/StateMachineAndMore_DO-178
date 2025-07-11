/* $********** SCADE Suite KCG 32-bit 6.6.4 (build i3) **********
** Command: kcg664.exe -config C:/Users/mbda/Documents/GitHub/SCADE_project/prova_1/Prova_1/KCG/config.txt
** Generation date: 2025-07-10T17:27:30
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "StateMachine_State_Machine_TI.h"

/* State_Machine_TI::StateMachine/ */
void StateMachine_State_Machine_TI(
  inC_StateMachine_State_Machine_TI *inC,
  outC_StateMachine_State_Machine_TI *outC)
{
  /* Output1/, SM1:State1:_L3/ */
  kcg_int8 L3_State1_SM1;
  /* Output2/, SM1:State2:_L12/ */
  Type1_State_Machine_TI L12_State2_SM1;
  /* SM1: */
  SSM_ST_SM1 SM1_state_sel;

  SM1_state_sel = outC->SM1_state_nxt;
  /* SM1: */
  switch (SM1_state_sel) {
    case SSM_st_State3_SM1 :
      outC->Output1 = kcg_lit_int8(0);
      kcg_copy_Type1_State_Machine_TI(&outC->Output2, &inC->Input3);
      outC->SM1_state_nxt = SSM_st_State1_SM1;
      break;
    case SSM_st_State2_SM1 :
      L12_State2_SM1.struct_bool = inC->Input3.struct_bool &
        (inC->Input3.struct_int == kcg_lit_int8(1));
      L12_State2_SM1.struct_int = kcg_lit_int8(5);
      outC->Output1 = kcg_lit_int8(0);
      kcg_copy_Type1_State_Machine_TI(&outC->Output2, &L12_State2_SM1);
      if (L12_State2_SM1.struct_int == kcg_lit_int8(5)) {
        outC->SM1_state_nxt = SSM_st_State3_SM1;
      }
      else {
        outC->SM1_state_nxt = SSM_st_State2_SM1;
      }
      break;
    case SSM_st_State1_SM1 :
      L3_State1_SM1 = inC->Input1 + inC->Input2;
      outC->Output1 = L3_State1_SM1;
      kcg_copy_Type1_State_Machine_TI(&outC->Output2, &inC->Input3);
      if (L3_State1_SM1 == kcg_lit_int8(5)) {
        outC->SM1_state_nxt = SSM_st_State2_SM1;
      }
      else {
        outC->SM1_state_nxt = SSM_st_State1_SM1;
      }
      break;
    default :
      /* this default branch is unreachable */
      break;
  }
}

#ifndef KCG_USER_DEFINED_INIT
void StateMachine_init_State_Machine_TI(
  outC_StateMachine_State_Machine_TI *outC)
{
  outC->Output2.struct_bool = kcg_true;
  outC->Output2.struct_int = kcg_lit_int8(0);
  outC->Output1 = kcg_lit_int8(0);
  outC->SM1_state_nxt = SSM_st_State1_SM1;
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void StateMachine_reset_State_Machine_TI(
  outC_StateMachine_State_Machine_TI *outC)
{
  outC->SM1_state_nxt = SSM_st_State1_SM1;
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */



/* $********** SCADE Suite KCG 32-bit 6.6.4 (build i3) **********
** StateMachine_State_Machine_TI.c
** Generation date: 2025-07-10T17:27:30
*************************************************************$ */

