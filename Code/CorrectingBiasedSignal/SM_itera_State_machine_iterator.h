/* $********** SCADE Suite KCG 32-bit 6.6.4 (build i3) **********
** Command: kcg664.exe -config C:/Users/mbda/Documents/GitHub/SCADE_project/prova_1/Prova_1/KCG/config.txt
** Generation date: 2025-06-24T16:04:58
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
  SSM_ST_SM1 /* SM1: */ SM1_state_nxt;
  /* -------------------- no sub nodes' contexts  -------------------- */
  /* ----------------- no clocks of observable data ------------------ */
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
** Generation date: 2025-06-24T16:04:58
*************************************************************$ */

