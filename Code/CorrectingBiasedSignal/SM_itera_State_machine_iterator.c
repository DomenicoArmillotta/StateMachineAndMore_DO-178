/* $********** SCADE Suite KCG 32-bit 6.6.4 (build i3) **********
** Command: kcg664.exe -config C:/Users/mbda/Documents/GitHub/SCADE_project/prova_1/Prova_1/KCG/config.txt
** Generation date: 2025-06-24T16:04:58
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "SM_itera_State_machine_iterator.h"

/* State_machine_iterator::SM_itera/ */
void SM_itera_State_machine_iterator(
  inC_SM_itera_State_machine_iterator *inC,
  outC_SM_itera_State_machine_iterator *outC)
{
  /* SM1: */
  SSM_ST_SM1 SM1_state_act;

  SM1_state_act = outC->SM1_state_nxt;
  /* SM1: */
  switch (SM1_state_act) {
    case SSM_st_Error_SM1 :
      outC->Output2 = kcg_false;
      outC->out = kcg_lit_int8(0);
      outC->SM1_state_nxt = SSM_st_Error_SM1;
      break;
    case SSM_st_State2_SM1 :
      outC->Output2 = kcg_true;
      outC->out = inC->in;
      if (inC->in == kcg_lit_int8(10)) {
        outC->SM1_state_nxt = SSM_st_Error_SM1;
      }
      else {
        outC->SM1_state_nxt = SSM_st_State2_SM1;
      }
      break;
    case SSM_st_init_SM1 :
      outC->Output2 = kcg_false;
      outC->out = kcg_lit_int8(0);
      outC->SM1_state_nxt = SSM_st_State2_SM1;
      break;
    default :
      /* this default branch is unreachable */
      break;
  }
}

#ifndef KCG_USER_DEFINED_INIT
void SM_itera_init_State_machine_iterator(
  outC_SM_itera_State_machine_iterator *outC)
{
  outC->Output2 = kcg_true;
  outC->out = kcg_lit_int8(0);
  outC->SM1_state_nxt = SSM_st_init_SM1;
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void SM_itera_reset_State_machine_iterator(
  outC_SM_itera_State_machine_iterator *outC)
{
  outC->SM1_state_nxt = SSM_st_init_SM1;
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */



/* $********** SCADE Suite KCG 32-bit 6.6.4 (build i3) **********
** SM_itera_State_machine_iterator.c
** Generation date: 2025-06-24T16:04:58
*************************************************************$ */

