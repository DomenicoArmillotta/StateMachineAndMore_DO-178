/* $********** SCADE Suite KCG 32-bit 6.6.4 (build i3) **********
** Command: kcg664.exe -config C:/Users/mbda/Documents/GitHub/SCADE_project/prova_1/Prova_1/KCG/config.txt
** Generation date: 2025-07-10T17:27:30
*************************************************************$ */
#ifndef KCG_StateMachine_State_Machine_TI_H_
#define KCG_StateMachine_State_Machine_TI_H_

#include "kcg_types.h"

/* ========================  input structure  ====================== */
typedef struct {
  kcg_int8 /* Input1/ */ Input1;
  kcg_int8 /* Input2/ */ Input2;
  Type1_State_Machine_TI /* Input3/ */ Input3;
} inC_StateMachine_State_Machine_TI;

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  kcg_int8 /* Output1/ */ Output1;
  Type1_State_Machine_TI /* Output2/ */ Output2;
  /* -----------------------  no local probes  ----------------------- */
  /* ----------------------- local memories  ------------------------- */
  SSM_ST_SM1 /* SM1: */ SM1_state_nxt;
  /* -------------------- no sub nodes' contexts  -------------------- */
  /* ----------------- no clocks of observable data ------------------ */
} outC_StateMachine_State_Machine_TI;

/* ===========  node initialization and cycle functions  =========== */
/* State_Machine_TI::StateMachine/ */
extern void StateMachine_State_Machine_TI(
  inC_StateMachine_State_Machine_TI *inC,
  outC_StateMachine_State_Machine_TI *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void StateMachine_reset_State_Machine_TI(
  outC_StateMachine_State_Machine_TI *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void StateMachine_init_State_Machine_TI(
  outC_StateMachine_State_Machine_TI *outC);
#endif /* KCG_USER_DEFINED_INIT */



#endif /* KCG_StateMachine_State_Machine_TI_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6.4 (build i3) **********
** StateMachine_State_Machine_TI.h
** Generation date: 2025-07-10T17:27:30
*************************************************************$ */

