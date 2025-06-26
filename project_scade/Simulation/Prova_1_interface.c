#include "Prova_1_interface.h"
#include "Prova_1_type.h"
#include "Prova_1_mapping.h"
#include "SmuVTable.h"
#include <string.h>

#define UNUSED(x) (void)(x)
/* context */

inC_SM_itera_State_machine_iterator inputs_ctx;
static inC_SM_itera_State_machine_iterator inputs_ctx_execute;
outC_SM_itera_State_machine_iterator outputs_ctx;

static void _SCSIM_RestoreInterface(void) {
    init_kcg_bool(&inputs_ctx.isOn);
    init_kcg_bool(&inputs_ctx_execute.isOn);
    init_kcg_int8(&inputs_ctx.in);
    init_kcg_int8(&inputs_ctx_execute.in);
    memset((void*)&outputs_ctx, 0, sizeof(outputs_ctx));
}

static void _SCSIM_ExecuteInterface(void) {
    pSimulator->m_pfnAcquireValueMutex(pSimulator);
    inputs_ctx_execute.isOn = inputs_ctx.isOn;
    inputs_ctx_execute.in = inputs_ctx.in;
    pSimulator->m_pfnReleaseValueMutex(pSimulator);
}

#ifdef __cplusplus
extern "C" {
#endif

const int  rt_version = Srtv62;

const char* _SCSIM_CheckSum = "a83945a550a34fe62a98b64ae05ae310";
const char* _SCSIM_SmuTypesCheckSum = "e199405d867d4446e9a5ba6df64b408e";

/* simulation */

int SimInit(void) {
    int nRet = 0;
    _SCSIM_RestoreInterface();
#ifdef EXTENDED_SIM
    BeforeSimInit();
#endif
#ifndef KCG_USER_DEFINED_INIT
    SM_itera_init_State_machine_iterator(&outputs_ctx);
    nRet = 1;
#else
    nRet = 0;
#endif
#ifdef EXTENDED_SIM
    AfterSimInit();
#endif
    return nRet;
}

int SimReset(void) {
    int nRet = 0;
    _SCSIM_RestoreInterface();
#ifdef EXTENDED_SIM
    BeforeSimInit();
#endif
#ifndef KCG_NO_EXTERN_CALL_TO_RESET
    SM_itera_reset_State_machine_iterator(&outputs_ctx);
    nRet = 1;
#else
    nRet = 0;
#endif
#ifdef EXTENDED_SIM
    AfterSimInit();
#endif
    return nRet;
}

#ifdef __cplusplus
    #ifdef pSimoutC_SM_itera_State_machine_iteratorCIVTable_defined
        extern struct SimCustomInitVTable *pSimoutC_SM_itera_State_machine_iteratorCIVTable;
    #else 
        struct SimCustomInitVTable *pSimoutC_SM_itera_State_machine_iteratorCIVTable = NULL;
    #endif
#else
    struct SimCustomInitVTable *pSimoutC_SM_itera_State_machine_iteratorCIVTable;
#endif

int SimCustomInit(void) {
    int nRet = 0;
    if (pSimoutC_SM_itera_State_machine_iteratorCIVTable != NULL && 
        pSimoutC_SM_itera_State_machine_iteratorCIVTable->m_pfnCustomInit != NULL) {
        /* VTable function provided => call it */
        nRet = pSimoutC_SM_itera_State_machine_iteratorCIVTable->m_pfnCustomInit ((void*)&outputs_ctx);
    }
    else {
        /* VTable misssing => error */
        nRet = 0;
    }
    return nRet;
}

#ifdef EXTENDED_SIM
    int GraphicalInputsConnected = 1;
#endif

int SimStep(void) {
#ifdef EXTENDED_SIM
    if (GraphicalInputsConnected)
        BeforeSimStep();
#endif
    _SCSIM_ExecuteInterface();
    SM_itera_State_machine_iterator(&inputs_ctx_execute, &outputs_ctx);
#ifdef EXTENDED_SIM
    AfterSimStep();
#endif
    return 1;
}

int SimStop(void) {
#ifdef EXTENDED_SIM
    ExtendedSimStop();
#endif
    return 1;
}

void SsmUpdateValues(void) {
#ifdef EXTENDED_SIM
    UpdateValues();
#endif
}

void SsmConnectExternalInputs(int bConnect) {
#ifdef EXTENDED_SIM
    GraphicalInputsConnected = bConnect;
#else
    UNUSED(bConnect);
#endif
}

/* dump */

int SsmGetDumpSize(void) {
    int nSize = 0;
    nSize += sizeof(inC_SM_itera_State_machine_iterator);
    nSize += sizeof(outC_SM_itera_State_machine_iterator);
#ifdef EXTENDED_SIM
    nSize += ExtendedGetDumpSize();
#endif
    return nSize;
}

void SsmGatherDumpData(char * pData) {
    char* pCurrent = pData;
    memcpy(pCurrent, &inputs_ctx, sizeof(inC_SM_itera_State_machine_iterator));
    pCurrent += sizeof(inC_SM_itera_State_machine_iterator);
    memcpy(pCurrent, &outputs_ctx, sizeof(outC_SM_itera_State_machine_iterator));
    pCurrent += sizeof(outC_SM_itera_State_machine_iterator);
#ifdef EXTENDED_SIM
    ExtendedGatherDumpData(pCurrent);
#endif
}

void SsmRestoreDumpData(const char * pData) {
    const char* pCurrent = pData;
    memcpy(&inputs_ctx, pCurrent, sizeof(inC_SM_itera_State_machine_iterator));
    pCurrent += sizeof(inC_SM_itera_State_machine_iterator);
    memcpy(&outputs_ctx, pCurrent, sizeof(outC_SM_itera_State_machine_iterator));
    pCurrent += sizeof(outC_SM_itera_State_machine_iterator);
#ifdef EXTENDED_SIM
    ExtendedRestoreDumpData(pCurrent);
#endif
}

/* snapshot */

int SsmSaveSnapshot(const char * szFilePath, size_t nCycle) {
    /* Test Services API not available */
    UNUSED(szFilePath);
    UNUSED(nCycle);
    return 0;
}

int SsmLoadSnapshot(const char * szFilePath, size_t *nCycle) {
    /* Test Services API not available */
    UNUSED(szFilePath);
    UNUSED(nCycle);
    return 0;
}

/* checksum */

const char * SsmGetCheckSum() {
    return _SCSIM_CheckSum;
}

const char * SsmGetSmuTypesCheckSum() {
    return _SCSIM_SmuTypesCheckSum;
}

#ifdef __cplusplus
} /* "C" */
#endif

