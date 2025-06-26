/* Prova_1_mapping.c */

#include "Prova_1_type.h"
#include "Prova_1_interface.h"
#include "Prova_1_mapping.h"

#include "SmuTypes.h"
#include "SmuMapping.h"

#include "kcg_sensors.h"

/* mapping declaration */

#define DECL_ITER(name) extern const MappingIterator iter_##name


#define DECL_SCOPE(name, count) extern const MappingEntry name##_entries[count]; extern const MappingScope name

DECL_SCOPE(scope_12, 1);
DECL_SCOPE(scope_11, 2);
DECL_SCOPE(scope_10, 9);
DECL_SCOPE(scope_9, 1);
DECL_SCOPE(scope_8, 7);
DECL_SCOPE(scope_7, 8);
DECL_SCOPE(scope_6, 1);
DECL_SCOPE(scope_5, 3);
DECL_SCOPE(scope_4, 1);
DECL_SCOPE(scope_3, 1);
DECL_SCOPE(scope_2, 10);
DECL_SCOPE(scope_1, 7);
DECL_SCOPE(scope_0, 1);

/* clock definition */

static int isActive_SSM_ST_SM1_SSM_st_Error_SM1(void* pHandle) { return *(SSM_ST_SM1*)pHandle == SSM_st_Error_SM1; }
static int isActive_SSM_ST_SM1_SSM_st_State2_SM1(void* pHandle) { return *(SSM_ST_SM1*)pHandle == SSM_st_State2_SM1; }
static int isActive_SSM_ST_SM1_SSM_st_init_SM1(void* pHandle) { return *(SSM_ST_SM1*)pHandle == SSM_st_init_SM1; }
static int isActive_SSM_ST_SM2_State2_SM1_SSM_st_StateContninuous_SM2_State2_SM1(void* pHandle) { return *(SSM_ST_SM2_State2_SM1*)pHandle == SSM_st_StateContninuous_SM2_State2_SM1; }
static int isActive_SSM_ST_SM3_State2_SM1_SSM_st_State4_SM3_State2_SM1(void* pHandle) { return *(SSM_ST_SM3_State2_SM1*)pHandle == SSM_st_State4_SM3_State2_SM1; }
static int isActive_SSM_ST_SM3_State2_SM1_SSM_st_State5_SM3_State2_SM1(void* pHandle) { return *(SSM_ST_SM3_State2_SM1*)pHandle == SSM_st_State5_SM3_State2_SM1; }
static int isActive_SSM_TR_SM1_SSM_TR_State2_Error_1_State2_SM1(void* pHandle) { return *(SSM_TR_SM1*)pHandle == SSM_TR_State2_Error_1_State2_SM1; }
static int isActive_SSM_TR_SM1_SSM_TR_init_State2_1_init_SM1(void* pHandle) { return *(SSM_TR_SM1*)pHandle == SSM_TR_init_State2_1_init_SM1; }
static int isActive_SSM_TR_SM2_State2_SM1_SSM_TR_StateContninuous_StateContninuous_1_StateContninuous_SM2_State2_SM1(void* pHandle) { return *(SSM_TR_SM2_State2_SM1*)pHandle == SSM_TR_StateContninuous_StateContninuous_1_StateContninuous_SM2_State2_SM1; }
static int isActive_SSM_TR_SM3_State2_SM1_SSM_TR_State4_State5_1_State4_SM3_State2_SM1(void* pHandle) { return *(SSM_TR_SM3_State2_SM1*)pHandle == SSM_TR_State4_State5_1_State4_SM3_State2_SM1; }

/* mapping definition */


const MappingEntry scope_12_entries[1] = {
    /* 0 */ { MAP_WEAK_TRANSITION, ">:", NULL, 0, 0, NULL, &scope_10_entries[6], isActive_SSM_TR_SM3_State2_SM1_SSM_TR_State4_State5_1_State4_SM3_State2_SM1, NULL, 1, 0 }
};
const MappingScope scope_12 = {
    "State_machine_iterator::SM_itera/ SM_itera_State_machine_iteratorSM1:State2:SM3:State4:<1",
    scope_12_entries, 1
};

const MappingEntry scope_11_entries[2] = {
    /* 0 */ { MAP_FORK, "<1", NULL, 0, 0, NULL, &scope_10_entries[6], isActive_SSM_TR_SM3_State2_SM1_SSM_TR_State4_State5_1_State4_SM3_State2_SM1, &scope_12, 1, 0 },
    /* 1 */ { MAP_LOCAL, "_L1", NULL, sizeof(kcg_bool), (size_t)&outputs_ctx.L1_State4_SM3_State2_SM1, &_Type_kcg_bool_Utils, &scope_1_entries[5], isActive_SSM_ST_SM3_State2_SM1_SSM_st_State4_SM3_State2_SM1, NULL, 1, 1 }
};
const MappingScope scope_11 = {
    "State_machine_iterator::SM_itera/ SM_itera_State_machine_iteratorSM1:State2:SM3:State4:",
    scope_11_entries, 2
};

const MappingEntry scope_10_entries[9] = {
    /* 0 */ { MAP_LOCAL, "@active_state", NULL, sizeof(SSM_ST_SM3_State2_SM1), (size_t)&outputs_ctx.SM3_state_act_State2_SM1, &_Type_SSM_ST_SM3_State2_SM1_Utils, NULL, NULL, NULL, 0, 0 },
    /* 1 */ { MAP_LOCAL, "@reset_active_state", NULL, sizeof(kcg_bool), (size_t)&outputs_ctx.SM3_reset_act_State2_SM1, &_Type_kcg_bool_Utils, NULL, NULL, NULL, 0, 1 },
    /* 2 */ { MAP_LOCAL, "@next_state", NULL, sizeof(SSM_ST_SM3_State2_SM1), (size_t)&outputs_ctx.SM3_state_nxt_State2_SM1, &_Type_SSM_ST_SM3_State2_SM1_Utils, NULL, NULL, NULL, 0, 2 },
    /* 3 */ { MAP_LOCAL, "@reset_next_state", NULL, sizeof(kcg_bool), (size_t)&outputs_ctx.SM3_reset_nxt_State2_SM1, &_Type_kcg_bool_Utils, NULL, NULL, NULL, 0, 3 },
    /* 4 */ { MAP_LOCAL, "@selected_state", NULL, sizeof(SSM_ST_SM3_State2_SM1), (size_t)&outputs_ctx.SM3_state_sel_State2_SM1, &_Type_SSM_ST_SM3_State2_SM1_Utils, NULL, NULL, NULL, 0, 4 },
    /* 5 */ { MAP_LOCAL, "@active_strong_transition", NULL, sizeof(SSM_TR_SM3_State2_SM1), (size_t)&outputs_ctx.SM3_fired_strong_State2_SM1, &_Type_SSM_TR_SM3_State2_SM1_Utils, NULL, NULL, NULL, 0, 5 },
    /* 6 */ { MAP_LOCAL, "@active_weak_transition", NULL, sizeof(SSM_TR_SM3_State2_SM1), (size_t)&outputs_ctx.SM3_fired_State2_SM1, &_Type_SSM_TR_SM3_State2_SM1_Utils, NULL, NULL, NULL, 0, 6 },
    /* 7 */ { MAP_STATE, "State4:", NULL, 0, 0, NULL, &scope_10_entries[0], isActive_SSM_ST_SM3_State2_SM1_SSM_st_State4_SM3_State2_SM1, &scope_11, 1, 7 },
    /* 8 */ { MAP_STATE, "State5:", NULL, 0, 0, NULL, &scope_10_entries[0], isActive_SSM_ST_SM3_State2_SM1_SSM_st_State5_SM3_State2_SM1, NULL, 1, 8 }
};
const MappingScope scope_10 = {
    "State_machine_iterator::SM_itera/ SM_itera_State_machine_iteratorSM1:State2:SM3:",
    scope_10_entries, 9
};

const MappingEntry scope_9_entries[1] = {
    /* 0 */ { MAP_WEAK_TRANSITION, ">:", NULL, 0, 0, NULL, &scope_7_entries[6], isActive_SSM_TR_SM2_State2_SM1_SSM_TR_StateContninuous_StateContninuous_1_StateContninuous_SM2_State2_SM1, NULL, 1, 0 }
};
const MappingScope scope_9 = {
    "State_machine_iterator::SM_itera/ SM_itera_State_machine_iteratorSM1:State2:SM2:StateContninuous:<1",
    scope_9_entries, 1
};

const MappingEntry scope_8_entries[7] = {
    /* 0 */ { MAP_FORK, "<1", NULL, 0, 0, NULL, &scope_7_entries[6], isActive_SSM_TR_SM2_State2_SM1_SSM_TR_StateContninuous_StateContninuous_1_StateContninuous_SM2_State2_SM1, &scope_9, 1, 0 },
    /* 1 */ { MAP_LOCAL, "FAS", NULL, sizeof(kcg_bool), (size_t)&outputs_ctx.FAS_StateContninuous_SM2_State2_SM1, &_Type_kcg_bool_Utils, &scope_2_entries[0], isActive_SSM_ST_SM1_SSM_st_State2_SM1, NULL, 1, 1 },
    /* 2 */ { MAP_LOCAL, "_L2", NULL, sizeof(kcg_int8), (size_t)&outputs_ctx.L2_StateContninuous_SM2_State2_SM1, &_Type_kcg_int8_Utils, &scope_2_entries[0], isActive_SSM_ST_SM1_SSM_st_State2_SM1, NULL, 1, 2 },
    /* 3 */ { MAP_LOCAL, "_L4", NULL, sizeof(kcg_bool), (size_t)&outputs_ctx.L4_StateContninuous_SM2_State2_SM1, &_Type_kcg_bool_Utils, &scope_2_entries[0], isActive_SSM_ST_SM1_SSM_st_State2_SM1, NULL, 1, 3 },
    /* 4 */ { MAP_LOCAL, "_L5", NULL, sizeof(kcg_bool), (size_t)&outputs_ctx.L5_StateContninuous_SM2_State2_SM1, &_Type_kcg_bool_Utils, &scope_2_entries[0], isActive_SSM_ST_SM1_SSM_st_State2_SM1, NULL, 1, 4 },
    /* 5 */ { MAP_LOCAL, "_L6", NULL, sizeof(kcg_bool), (size_t)&outputs_ctx.L6_StateContninuous_SM2_State2_SM1, &_Type_kcg_bool_Utils, &scope_2_entries[0], isActive_SSM_ST_SM1_SSM_st_State2_SM1, NULL, 1, 5 },
    /* 6 */ { MAP_LOCAL, "_L3", NULL, sizeof(kcg_bool), (size_t)&outputs_ctx.L3_StateContninuous_SM2_State2_SM1, &_Type_kcg_bool_Utils, &scope_2_entries[0], isActive_SSM_ST_SM1_SSM_st_State2_SM1, NULL, 1, 6 }
};
const MappingScope scope_8 = {
    "State_machine_iterator::SM_itera/ SM_itera_State_machine_iteratorSM1:State2:SM2:StateContninuous:",
    scope_8_entries, 7
};

const MappingEntry scope_7_entries[8] = {
    /* 0 */ { MAP_LOCAL, "@active_state", NULL, sizeof(SSM_ST_SM2_State2_SM1), (size_t)&outputs_ctx.SM2_state_act_State2_SM1, &_Type_SSM_ST_SM2_State2_SM1_Utils, NULL, NULL, NULL, 0, 0 },
    /* 1 */ { MAP_LOCAL, "@reset_active_state", NULL, sizeof(kcg_bool), (size_t)&outputs_ctx.SM2_reset_act_State2_SM1, &_Type_kcg_bool_Utils, NULL, NULL, NULL, 0, 1 },
    /* 2 */ { MAP_LOCAL, "@next_state", NULL, sizeof(SSM_ST_SM2_State2_SM1), (size_t)&outputs_ctx.SM2_state_nxt_State2_SM1, &_Type_SSM_ST_SM2_State2_SM1_Utils, NULL, NULL, NULL, 0, 2 },
    /* 3 */ { MAP_LOCAL, "@reset_next_state", NULL, sizeof(kcg_bool), (size_t)&outputs_ctx.SM2_reset_nxt_State2_SM1, &_Type_kcg_bool_Utils, NULL, NULL, NULL, 0, 3 },
    /* 4 */ { MAP_LOCAL, "@selected_state", NULL, sizeof(SSM_ST_SM2_State2_SM1), (size_t)&outputs_ctx.SM2_state_sel_State2_SM1, &_Type_SSM_ST_SM2_State2_SM1_Utils, NULL, NULL, NULL, 0, 4 },
    /* 5 */ { MAP_LOCAL, "@active_strong_transition", NULL, sizeof(SSM_TR_SM2_State2_SM1), (size_t)&outputs_ctx.SM2_fired_strong_State2_SM1, &_Type_SSM_TR_SM2_State2_SM1_Utils, NULL, NULL, NULL, 0, 5 },
    /* 6 */ { MAP_LOCAL, "@active_weak_transition", NULL, sizeof(SSM_TR_SM2_State2_SM1), (size_t)&outputs_ctx.SM2_fired_State2_SM1, &_Type_SSM_TR_SM2_State2_SM1_Utils, NULL, NULL, NULL, 0, 6 },
    /* 7 */ { MAP_STATE, "StateContninuous:", NULL, 0, 0, NULL, &scope_7_entries[0], isActive_SSM_ST_SM2_State2_SM1_SSM_st_StateContninuous_SM2_State2_SM1, &scope_8, 1, 7 }
};
const MappingScope scope_7 = {
    "State_machine_iterator::SM_itera/ SM_itera_State_machine_iteratorSM1:State2:SM2:",
    scope_7_entries, 8
};

const MappingEntry scope_6_entries[1] = {
    /* 0 */ { MAP_WEAK_TRANSITION, ">:", NULL, 0, 0, NULL, &scope_2_entries[6], isActive_SSM_TR_SM1_SSM_TR_State2_Error_1_State2_SM1, NULL, 1, 0 }
};
const MappingScope scope_6 = {
    "State_machine_iterator::SM_itera/ SM_itera_State_machine_iteratorSM1:State2:<1",
    scope_6_entries, 1
};

const MappingEntry scope_5_entries[3] = {
    /* 0 */ { MAP_FORK, "<1", NULL, 0, 0, NULL, &scope_2_entries[6], isActive_SSM_TR_SM1_SSM_TR_State2_Error_1_State2_SM1, &scope_6, 1, 0 },
    /* 1 */ { MAP_AUTOMATON, "SM2:", NULL, 0, 0, NULL, NULL, NULL, &scope_7, 1, 1 },
    /* 2 */ { MAP_AUTOMATON, "SM3:", NULL, 0, 0, NULL, NULL, NULL, &scope_10, 1, 2 }
};
const MappingScope scope_5 = {
    "State_machine_iterator::SM_itera/ SM_itera_State_machine_iteratorSM1:State2:",
    scope_5_entries, 3
};

const MappingEntry scope_4_entries[1] = {
    /* 0 */ { MAP_WEAK_TRANSITION, ">:", NULL, 0, 0, NULL, &scope_2_entries[6], isActive_SSM_TR_SM1_SSM_TR_init_State2_1_init_SM1, NULL, 1, 0 }
};
const MappingScope scope_4 = {
    "State_machine_iterator::SM_itera/ SM_itera_State_machine_iteratorSM1:init:<1",
    scope_4_entries, 1
};

const MappingEntry scope_3_entries[1] = {
    /* 0 */ { MAP_FORK, "<1", NULL, 0, 0, NULL, &scope_2_entries[6], isActive_SSM_TR_SM1_SSM_TR_init_State2_1_init_SM1, &scope_4, 1, 0 }
};
const MappingScope scope_3 = {
    "State_machine_iterator::SM_itera/ SM_itera_State_machine_iteratorSM1:init:",
    scope_3_entries, 1
};

const MappingEntry scope_2_entries[10] = {
    /* 0 */ { MAP_LOCAL, "@active_state", NULL, sizeof(SSM_ST_SM1), (size_t)&outputs_ctx.SM1_state_act, &_Type_SSM_ST_SM1_Utils, NULL, NULL, NULL, 0, 0 },
    /* 1 */ { MAP_LOCAL, "@reset_active_state", NULL, sizeof(kcg_bool), (size_t)&outputs_ctx.SM1_reset_act, &_Type_kcg_bool_Utils, NULL, NULL, NULL, 0, 1 },
    /* 2 */ { MAP_LOCAL, "@next_state", NULL, sizeof(SSM_ST_SM1), (size_t)&outputs_ctx.SM1_state_nxt, &_Type_SSM_ST_SM1_Utils, NULL, NULL, NULL, 0, 2 },
    /* 3 */ { MAP_LOCAL, "@reset_next_state", NULL, sizeof(kcg_bool), (size_t)&outputs_ctx.SM1_reset_nxt, &_Type_kcg_bool_Utils, NULL, NULL, NULL, 0, 3 },
    /* 4 */ { MAP_LOCAL, "@selected_state", NULL, sizeof(SSM_ST_SM1), (size_t)&outputs_ctx.SM1_state_sel, &_Type_SSM_ST_SM1_Utils, NULL, NULL, NULL, 0, 4 },
    /* 5 */ { MAP_LOCAL, "@active_strong_transition", NULL, sizeof(SSM_TR_SM1), (size_t)&outputs_ctx.SM1_fired_strong, &_Type_SSM_TR_SM1_Utils, NULL, NULL, NULL, 0, 5 },
    /* 6 */ { MAP_LOCAL, "@active_weak_transition", NULL, sizeof(SSM_TR_SM1), (size_t)&outputs_ctx.SM1_fired, &_Type_SSM_TR_SM1_Utils, NULL, NULL, NULL, 0, 6 },
    /* 7 */ { MAP_STATE, "init:", NULL, 0, 0, NULL, &scope_2_entries[0], isActive_SSM_ST_SM1_SSM_st_init_SM1, &scope_3, 1, 7 },
    /* 8 */ { MAP_STATE, "State2:", NULL, 0, 0, NULL, &scope_2_entries[0], isActive_SSM_ST_SM1_SSM_st_State2_SM1, &scope_5, 1, 8 },
    /* 9 */ { MAP_STATE, "Error:", NULL, 0, 0, NULL, &scope_2_entries[0], isActive_SSM_ST_SM1_SSM_st_Error_SM1, NULL, 1, 9 }
};
const MappingScope scope_2 = {
    "State_machine_iterator::SM_itera/ SM_itera_State_machine_iteratorSM1:",
    scope_2_entries, 10
};

const MappingEntry scope_1_entries[7] = {
    /* 0 */ { MAP_OUTPUT, "out", NULL, sizeof(kcg_int8), (size_t)&outputs_ctx.out, &_Type_kcg_int8_Utils, NULL, NULL, NULL, 1, 0 },
    /* 1 */ { MAP_OUTPUT, "Output2", NULL, sizeof(kcg_bool), (size_t)&outputs_ctx.Output2, &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 1 },
    /* 2 */ { MAP_INPUT, "isOn", NULL, sizeof(kcg_bool), (size_t)&inputs_ctx.isOn, &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 2 },
    /* 3 */ { MAP_INPUT, "in", NULL, sizeof(kcg_int8), (size_t)&inputs_ctx.in, &_Type_kcg_int8_Utils, NULL, NULL, NULL, 1, 3 },
    /* 4 */ { MAP_AUTOMATON, "SM1:", NULL, 0, 0, NULL, NULL, NULL, &scope_2, 1, 4 },
    /* 5 */ { MAP_LOCAL, "@kcg1", NULL, sizeof(SSM_ST_SM3_State2_SM1), (size_t)&outputs_ctx.SM3_clock_State2_SM1, &_Type_SSM_ST_SM3_State2_SM1_Utils, &scope_1_entries[6], isActive_SSM_ST_SM1_SSM_st_State2_SM1, NULL, 0, 5 },
    /* 6 */ { MAP_LOCAL, "@kcg2", NULL, sizeof(SSM_ST_SM1), (size_t)&outputs_ctx.SM1_state_act, &_Type_SSM_ST_SM1_Utils, NULL, NULL, NULL, 0, 6 }
};
const MappingScope scope_1 = {
    "State_machine_iterator::SM_itera/ SM_itera_State_machine_iterator",
    scope_1_entries, 7
};

const MappingEntry scope_0_entries[1] = {
    /* 0 */ { MAP_ROOT, "State_machine_iterator::SM_itera", NULL, 0, 0, NULL, NULL, NULL, &scope_1, 1, 0 }
};
const MappingScope scope_0 = {
    "",
    scope_0_entries, 1
};

/* entry point */
const MappingScope* pTop = &scope_0;
