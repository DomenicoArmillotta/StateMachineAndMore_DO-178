/* $********** SCADE Suite KCG 32-bit 6.6.4 (build i3) **********
** Command: kcg664.exe -config C:/Users/mbda/Documents/GitHub/SCADE_project/prova_1/Prova_1/Simulation/config.txt
** Generation date: 2025-06-24T15:56:04
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "SM_itera_State_machine_iterator.h"

/* State_machine_iterator::SM_itera/ */
void SM_itera_State_machine_iterator(
  inC_SM_itera_State_machine_iterator *inC,
  outC_SM_itera_State_machine_iterator *outC)
{
  /* out/ */
  kcg_int8 out_partial;
  /* Output2/ */
  kcg_bool Output2_partial;
  /* SM1: */
  SSM_ST_SM1 SM1_state_nxt_partial;
  /* SM1: */
  kcg_bool SM1_reset_nxt_partial;
  /* SM1: */
  SSM_TR_SM1 SM1_fired_partial;
  /* SM1:init:<1> */
  kcg_bool tr_1_guard_init_SM1;
  /* out/ */
  kcg_int8 x1_out_partial;
  /* Output2/ */
  kcg_bool x2_Output2_partial;
  /* SM1: */
  SSM_ST_SM1 x3_SM1_state_nxt_partial;
  /* SM1: */
  kcg_bool x4_SM1_reset_nxt_partial;
  /* SM1: */
  SSM_TR_SM1 x5_SM1_fired_partial;
  /* SM1:State2:<1> */
  kcg_bool tr_1_guard_State2_SM1;
  /* SM1:State2:SM3: */
  kcg_bool SM3_reset_prv_State2_SM1;
  /* SM1:State2:SM3: */
  kcg_bool SM3_reset_sel_State2_SM1;
  /* SM1:State2:SM2: */
  kcg_bool SM2_reset_prv_State2_SM1;
  /* SM1:State2:SM2: */
  kcg_bool SM2_reset_sel_State2_SM1;
  /* SM1:State2:SM2:StateContninuous:<1> */
  kcg_bool tr_1_guard_StateContninuous_SM2_State2_SM1;
  /* SM1:State2:SM3: */
  SSM_TR_SM3_State2_SM1 SM3_fired_partial_State2_SM1;
  /* SM1:State2:SM3: */
  kcg_bool SM3_reset_nxt_partial_State2_SM1;
  /* SM1:State2:SM3: */
  SSM_ST_SM3_State2_SM1 SM3_state_nxt_partial_State2_SM1;
  kcg_bool noname;
  /* SM1:State2:SM3:State4:<1> */
  kcg_bool tr_1_guard_State4_SM3_State2_SM1;
  /* SM1:State2:SM3: */
  SSM_TR_SM3_State2_SM1 x6_SM3_fired_partial_State2_SM1;
  /* SM1:State2:SM3: */
  kcg_bool x7_SM3_reset_nxt_partial_State2_SM1;
  /* SM1:State2:SM3: */
  SSM_ST_SM3_State2_SM1 x8_SM3_state_nxt_partial_State2_SM1;
  /* out/ */
  kcg_int8 x9_out_partial;
  /* Output2/ */
  kcg_bool x10_Output2_partial;
  /* SM1: */
  SSM_ST_SM1 x11_SM1_state_nxt_partial;
  /* SM1: */
  kcg_bool x12_SM1_reset_nxt_partial;
  /* SM1: */
  SSM_TR_SM1 x13_SM1_fired_partial;
  /* Output2/ */
  kcg_bool last_Output2;
  /* out/ */
  kcg_int8 last_out;
  /* SM1: */
  kcg_bool SM1_reset_sel;
  /* SM1: */
  kcg_bool SM1_reset_prv;

  last_out = outC->out;
  outC->SM1_state_sel = outC->SM1_state_nxt;
  outC->SM1_state_act = outC->SM1_state_sel;
  /* SM1: */
  switch (outC->SM1_state_act) {
    case SSM_st_Error_SM1 :
      x9_out_partial = kcg_lit_int8(0);
      outC->out = x9_out_partial;
      break;
    case SSM_st_State2_SM1 :
      outC->L2_StateContninuous_SM2_State2_SM1 = inC->in;
      x1_out_partial = outC->L2_StateContninuous_SM2_State2_SM1;
      outC->out = x1_out_partial;
      break;
    case SSM_st_init_SM1 :
      out_partial = kcg_lit_int8(0);
      outC->out = out_partial;
      break;
    default :
      /* this default branch is unreachable */
      break;
  }
  last_Output2 = outC->Output2;
  /* SM1: */
  switch (outC->SM1_state_act) {
    case SSM_st_Error_SM1 :
      x10_Output2_partial = kcg_false;
      outC->Output2 = x10_Output2_partial;
      break;
    case SSM_st_State2_SM1 :
      outC->L3_StateContninuous_SM2_State2_SM1 = kcg_true;
      outC->FAS_StateContninuous_SM2_State2_SM1 =
        outC->L3_StateContninuous_SM2_State2_SM1;
      outC->L5_StateContninuous_SM2_State2_SM1 =
        outC->FAS_StateContninuous_SM2_State2_SM1;
      outC->L4_StateContninuous_SM2_State2_SM1 = kcg_true;
      outC->L6_StateContninuous_SM2_State2_SM1 =
        outC->L4_StateContninuous_SM2_State2_SM1 &
        outC->L5_StateContninuous_SM2_State2_SM1;
      x2_Output2_partial = outC->L6_StateContninuous_SM2_State2_SM1;
      outC->Output2 = x2_Output2_partial;
      break;
    case SSM_st_init_SM1 :
      Output2_partial = kcg_false;
      outC->Output2 = Output2_partial;
      break;
    default :
      /* this default branch is unreachable */
      break;
  }
  outC->SM1_fired_strong = SSM_TR_no_trans_SM1;
  switch (outC->SM1_state_act) {
    case SSM_st_Error_SM1 :
      x13_SM1_fired_partial = outC->SM1_fired_strong;
      x12_SM1_reset_nxt_partial = kcg_false;
      x11_SM1_state_nxt_partial = SSM_st_Error_SM1;
      break;
    case SSM_st_State2_SM1 :
      tr_1_guard_State2_SM1 = inC->in == kcg_lit_int8(10);
      if (tr_1_guard_State2_SM1) {
        x5_SM1_fired_partial = SSM_TR_State2_Error_1_State2_SM1;
      }
      else {
        x5_SM1_fired_partial = SSM_TR_no_trans_SM1;
      }
      x4_SM1_reset_nxt_partial = tr_1_guard_State2_SM1;
      if (tr_1_guard_State2_SM1) {
        x3_SM1_state_nxt_partial = SSM_st_Error_SM1;
      }
      else {
        x3_SM1_state_nxt_partial = SSM_st_State2_SM1;
      }
      break;
    default :
      /* this branch is empty */
      break;
  }
  SM1_reset_sel = outC->SM1_reset_nxt;
  switch (outC->SM1_state_sel) {
    case SSM_st_State2_SM1 :
      if (SM1_reset_sel) {
        outC->init = kcg_true;
      }
      break;
    default :
      /* this branch is empty */
      break;
  }
  /* SM1: */
  switch (outC->SM1_state_act) {
    case SSM_st_Error_SM1 :
      outC->SM1_state_nxt = x11_SM1_state_nxt_partial;
      outC->SM1_reset_nxt = x12_SM1_reset_nxt_partial;
      outC->SM1_fired = x13_SM1_fired_partial;
      break;
    case SSM_st_State2_SM1 :
      /* SM1:State2:SM3: */
      if (outC->init) {
        outC->SM3_state_sel_State2_SM1 = SSM_st_State4_SM3_State2_SM1;
      }
      else {
        outC->SM3_state_sel_State2_SM1 = outC->SM3_state_nxt_State2_SM1;
      }
      outC->SM3_state_act_State2_SM1 = outC->SM3_state_sel_State2_SM1;
      outC->SM3_clock_State2_SM1 = outC->SM3_state_act_State2_SM1;
      outC->SM3_fired_strong_State2_SM1 = SSM_TR_no_trans_SM3_State2_SM1;
      /* SM1:State2:SM3: */
      switch (outC->SM3_clock_State2_SM1) {
        case SSM_st_State5_SM3_State2_SM1 :
          SM3_fired_partial_State2_SM1 = outC->SM3_fired_strong_State2_SM1;
          SM3_reset_nxt_partial_State2_SM1 = kcg_false;
          SM3_state_nxt_partial_State2_SM1 = SSM_st_State5_SM3_State2_SM1;
          outC->SM3_state_nxt_State2_SM1 = SM3_state_nxt_partial_State2_SM1;
          break;
        case SSM_st_State4_SM3_State2_SM1 :
          tr_1_guard_State4_SM3_State2_SM1 = inC->isOn == kcg_true;
          if (tr_1_guard_State4_SM3_State2_SM1) {
            x6_SM3_fired_partial_State2_SM1 = SSM_TR_State4_State5_1_State4_SM3_State2_SM1;
          }
          else {
            x6_SM3_fired_partial_State2_SM1 = SSM_TR_no_trans_SM3_State2_SM1;
          }
          x7_SM3_reset_nxt_partial_State2_SM1 = tr_1_guard_State4_SM3_State2_SM1;
          if (tr_1_guard_State4_SM3_State2_SM1) {
            x8_SM3_state_nxt_partial_State2_SM1 = SSM_st_State5_SM3_State2_SM1;
          }
          else {
            x8_SM3_state_nxt_partial_State2_SM1 = SSM_st_State4_SM3_State2_SM1;
          }
          outC->L1_State4_SM3_State2_SM1 = inC->isOn;
          noname = outC->L1_State4_SM3_State2_SM1;
          outC->SM3_state_nxt_State2_SM1 = x8_SM3_state_nxt_partial_State2_SM1;
          break;
        default :
          /* this default branch is unreachable */
          break;
      }
      /* SM1:State2:SM3: */
      if (outC->init) {
        SM3_reset_sel_State2_SM1 = kcg_false;
      }
      else {
        SM3_reset_sel_State2_SM1 = outC->SM3_reset_nxt_State2_SM1;
      }
      /* SM1:State2:SM3: */
      switch (outC->SM3_clock_State2_SM1) {
        case SSM_st_State5_SM3_State2_SM1 :
          outC->SM3_reset_nxt_State2_SM1 = SM3_reset_nxt_partial_State2_SM1;
          outC->SM3_fired_State2_SM1 = SM3_fired_partial_State2_SM1;
          break;
        case SSM_st_State4_SM3_State2_SM1 :
          outC->SM3_reset_nxt_State2_SM1 = x7_SM3_reset_nxt_partial_State2_SM1;
          outC->SM3_fired_State2_SM1 = x6_SM3_fired_partial_State2_SM1;
          break;
        default :
          /* this default branch is unreachable */
          break;
      }
      /* SM1:State2:SM3: */
      if (outC->init) {
        SM3_reset_prv_State2_SM1 = kcg_false;
      }
      else {
        SM3_reset_prv_State2_SM1 = outC->SM3_reset_act_State2_SM1;
      }
      outC->SM3_reset_act_State2_SM1 = kcg_false;
      /* SM1:State2:SM2: */
      if (outC->init) {
        outC->SM2_state_sel_State2_SM1 = SSM_st_StateContninuous_SM2_State2_SM1;
      }
      else {
        outC->SM2_state_sel_State2_SM1 = outC->SM2_state_nxt_State2_SM1;
      }
      outC->SM2_state_nxt_State2_SM1 = SSM_st_StateContninuous_SM2_State2_SM1;
      /* SM1:State2:SM2: */
      if (outC->init) {
        SM2_reset_sel_State2_SM1 = kcg_false;
      }
      else {
        SM2_reset_sel_State2_SM1 = outC->SM2_reset_nxt_State2_SM1;
      }
      tr_1_guard_StateContninuous_SM2_State2_SM1 = kcg_true;
      outC->SM2_reset_nxt_State2_SM1 = tr_1_guard_StateContninuous_SM2_State2_SM1;
      if (tr_1_guard_StateContninuous_SM2_State2_SM1) {
        outC->SM2_fired_State2_SM1 =
          SSM_TR_StateContninuous_StateContninuous_1_StateContninuous_SM2_State2_SM1;
      }
      else {
        outC->SM2_fired_State2_SM1 = SSM_TR_no_trans_SM2_State2_SM1;
      }
      outC->SM2_state_act_State2_SM1 = outC->SM2_state_sel_State2_SM1;
      outC->SM2_clock_State2_SM1 = outC->SM2_state_act_State2_SM1;
      outC->SM2_fired_strong_State2_SM1 = SSM_TR_no_trans_SM2_State2_SM1;
      /* SM1:State2:SM2: */
      if (outC->init) {
        SM2_reset_prv_State2_SM1 = kcg_false;
      }
      else {
        SM2_reset_prv_State2_SM1 = outC->SM2_reset_act_State2_SM1;
      }
      outC->SM2_reset_act_State2_SM1 = kcg_false;
      outC->SM1_state_nxt = x3_SM1_state_nxt_partial;
      outC->SM1_reset_nxt = x4_SM1_reset_nxt_partial;
      outC->SM1_fired = x5_SM1_fired_partial;
      break;
    case SSM_st_init_SM1 :
      tr_1_guard_init_SM1 = kcg_true;
      if (tr_1_guard_init_SM1) {
        SM1_fired_partial = SSM_TR_init_State2_1_init_SM1;
      }
      else {
        SM1_fired_partial = SSM_TR_no_trans_SM1;
      }
      SM1_reset_nxt_partial = tr_1_guard_init_SM1;
      if (tr_1_guard_init_SM1) {
        SM1_state_nxt_partial = SSM_st_State2_SM1;
      }
      else {
        SM1_state_nxt_partial = SSM_st_init_SM1;
      }
      outC->SM1_state_nxt = SM1_state_nxt_partial;
      outC->SM1_reset_nxt = SM1_reset_nxt_partial;
      outC->SM1_fired = SM1_fired_partial;
      break;
    default :
      /* this default branch is unreachable */
      break;
  }
  SM1_reset_prv = outC->SM1_reset_act;
  outC->SM1_reset_act = kcg_false;
  switch (outC->SM1_state_act) {
    case SSM_st_State2_SM1 :
      outC->init = kcg_false;
      break;
    default :
      /* this branch is empty */
      break;
  }
}

#ifndef KCG_USER_DEFINED_INIT
void SM_itera_init_State_machine_iterator(
  outC_SM_itera_State_machine_iterator *outC)
{
  outC->SM1_fired = SSM_TR_no_trans_SM1;
  outC->SM1_fired_strong = SSM_TR_no_trans_SM1;
  outC->SM1_state_act = SSM_st_init_SM1;
  outC->SM1_state_sel = SSM_st_init_SM1;
  outC->L1_State4_SM3_State2_SM1 = kcg_true;
  outC->FAS_StateContninuous_SM2_State2_SM1 = kcg_true;
  outC->L2_StateContninuous_SM2_State2_SM1 = kcg_lit_int8(0);
  outC->L4_StateContninuous_SM2_State2_SM1 = kcg_true;
  outC->L5_StateContninuous_SM2_State2_SM1 = kcg_true;
  outC->L6_StateContninuous_SM2_State2_SM1 = kcg_true;
  outC->L3_StateContninuous_SM2_State2_SM1 = kcg_true;
  outC->SM3_clock_State2_SM1 = SSM_st_State4_SM3_State2_SM1;
  outC->SM2_clock_State2_SM1 = SSM_st_StateContninuous_SM2_State2_SM1;
  outC->SM2_state_sel_State2_SM1 = SSM_st_StateContninuous_SM2_State2_SM1;
  outC->SM2_state_act_State2_SM1 = SSM_st_StateContninuous_SM2_State2_SM1;
  outC->SM2_fired_strong_State2_SM1 = SSM_TR_no_trans_SM2_State2_SM1;
  outC->SM2_fired_State2_SM1 = SSM_TR_no_trans_SM2_State2_SM1;
  outC->SM3_state_sel_State2_SM1 = SSM_st_State4_SM3_State2_SM1;
  outC->SM3_state_act_State2_SM1 = SSM_st_State4_SM3_State2_SM1;
  outC->SM3_fired_strong_State2_SM1 = SSM_TR_no_trans_SM3_State2_SM1;
  outC->SM3_fired_State2_SM1 = SSM_TR_no_trans_SM3_State2_SM1;
  outC->SM2_state_nxt_State2_SM1 = SSM_st_StateContninuous_SM2_State2_SM1;
  outC->SM2_reset_act_State2_SM1 = kcg_true;
  outC->SM2_reset_nxt_State2_SM1 = kcg_true;
  outC->SM3_state_nxt_State2_SM1 = SSM_st_State4_SM3_State2_SM1;
  outC->SM3_reset_act_State2_SM1 = kcg_true;
  outC->SM3_reset_nxt_State2_SM1 = kcg_true;
  outC->init = kcg_true;
  outC->SM1_reset_act = kcg_false;
  outC->SM1_reset_nxt = kcg_false;
  outC->Output2 = kcg_false;
  outC->SM1_state_nxt = SSM_st_init_SM1;
  outC->out = kcg_lit_int8(0);
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void SM_itera_reset_State_machine_iterator(
  outC_SM_itera_State_machine_iterator *outC)
{
  outC->init = kcg_true;
  outC->SM1_reset_act = kcg_false;
  outC->SM1_reset_nxt = kcg_false;
  outC->Output2 = kcg_false;
  outC->SM1_state_nxt = SSM_st_init_SM1;
  outC->out = kcg_lit_int8(0);
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */



/* $********** SCADE Suite KCG 32-bit 6.6.4 (build i3) **********
** SM_itera_State_machine_iterator.c
** Generation date: 2025-06-24T15:56:04
*************************************************************$ */

