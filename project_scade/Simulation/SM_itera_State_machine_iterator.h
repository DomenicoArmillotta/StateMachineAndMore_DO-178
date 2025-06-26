/* $********** SCADE Suite KCG 32-bit 6.6.4 (build i3) **********
** Command: kcg664.exe -config C:/Users/mbda/Documents/GitHub/SCADE_project/prova_1/Prova_1/Simulation/config.txt
** Generation date: 2025-06-24T15:56:04
*************************************************************$ */
#ifndef KCG_SM_itera_State_machine_iterator_H_
#define KCG_SM_itera_State_machine_iterator_H_

#include "kcg_types.h"

/* ========================  input structure  ====================== */
typedef struct {
  kcg_bool /* isOn/ */ isOn;
  kcg_int8 /* in/ */ in;
} inC_SM_itera_State_machine_iterator;

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  kcg_int8 /* out/ */ out;
  kcg_bool /* Output2/ */ Output2;
  /* -----------------------  no local probes  ----------------------- */
  /* ----------------------- local memories  ------------------------- */
  kcg_bool init;
  kcg_bool /* SM1:State2:SM3: */ SM3_reset_nxt_State2_SM1;
  kcg_bool /* SM1:State2:SM3: */ SM3_reset_act_State2_SM1;
  SSM_ST_SM3_State2_SM1 /* SM1:State2:SM3: */ SM3_state_nxt_State2_SM1;
  kcg_bool /* SM1:State2:SM2: */ SM2_reset_nxt_State2_SM1;
  kcg_bool /* SM1:State2:SM2: */ SM2_reset_act_State2_SM1;
  SSM_ST_SM2_State2_SM1 /* SM1:State2:SM2: */ SM2_state_nxt_State2_SM1;
  SSM_ST_SM1 /* SM1: */ SM1_state_nxt;
  kcg_bool /* SM1: */ SM1_reset_act;
  kcg_bool /* SM1: */ SM1_reset_nxt;
  /* -------------------- no sub nodes' contexts  -------------------- */
  /* ------------------ clocks of observable data -------------------- */
  SSM_ST_SM2_State2_SM1 /* SM1:State2:SM2: */ SM2_clock_State2_SM1;
  SSM_ST_SM3_State2_SM1 /* SM1:State2:SM3: */ SM3_clock_State2_SM1;
  SSM_ST_SM1 /* SM1: */ SM1_state_act;
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  SSM_TR_SM3_State2_SM1 /* SM1:State2:SM3: */ SM3_fired_State2_SM1;
  SSM_TR_SM3_State2_SM1 /* SM1:State2:SM3: */ SM3_fired_strong_State2_SM1;
  SSM_ST_SM3_State2_SM1 /* SM1:State2:SM3: */ SM3_state_act_State2_SM1;
  SSM_ST_SM3_State2_SM1 /* SM1:State2:SM3: */ SM3_state_sel_State2_SM1;
  SSM_TR_SM2_State2_SM1 /* SM1:State2:SM2: */ SM2_fired_State2_SM1;
  SSM_TR_SM2_State2_SM1 /* SM1:State2:SM2: */ SM2_fired_strong_State2_SM1;
  SSM_ST_SM2_State2_SM1 /* SM1:State2:SM2: */ SM2_state_act_State2_SM1;
  SSM_ST_SM2_State2_SM1 /* SM1:State2:SM2: */ SM2_state_sel_State2_SM1;
  kcg_bool /* SM1:State2:SM2:StateContninuous:_L3/ */ L3_StateContninuous_SM2_State2_SM1;
  kcg_bool /* SM1:State2:SM2:StateContninuous:_L6/ */ L6_StateContninuous_SM2_State2_SM1;
  kcg_bool /* SM1:State2:SM2:StateContninuous:_L5/ */ L5_StateContninuous_SM2_State2_SM1;
  kcg_bool /* SM1:State2:SM2:StateContninuous:_L4/ */ L4_StateContninuous_SM2_State2_SM1;
  kcg_int8 /* SM1:State2:SM2:StateContninuous:_L2/ */ L2_StateContninuous_SM2_State2_SM1;
  kcg_bool /* SM1:State2:SM2:StateContninuous:FAS/ */ FAS_StateContninuous_SM2_State2_SM1;
  kcg_bool /* SM1:State2:SM3:State4:_L1/ */ L1_State4_SM3_State2_SM1;
  SSM_ST_SM1 /* SM1: */ SM1_state_sel;
  SSM_TR_SM1 /* SM1: */ SM1_fired_strong;
  SSM_TR_SM1 /* SM1: */ SM1_fired;
} outC_SM_itera_State_machine_iterator;

/* ===========  node initialization and cycle functions  =========== */
/* State_machine_iterator::SM_itera/ */
extern void SM_itera_State_machine_iterator(
  inC_SM_itera_State_machine_iterator *inC,
  outC_SM_itera_State_machine_iterator *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void SM_itera_reset_State_machine_iterator(
  outC_SM_itera_State_machine_iterator *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void SM_itera_init_State_machine_iterator(
  outC_SM_itera_State_machine_iterator *outC);
#endif /* KCG_USER_DEFINED_INIT */



#endif /* KCG_SM_itera_State_machine_iterator_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6.4 (build i3) **********
** SM_itera_State_machine_iterator.h
** Generation date: 2025-06-24T15:56:04
*************************************************************$ */

