/*
 * Copyright(C) 2020 ANSYS, Inc. ALL RIGHTS RESERVED.
 * Copyright(C) 2015 ESTEREL TECHNOLOGIES SAS. ALL RIGHTS RESERVED.
 * This source file may be used and distributed without restriction provided
 * that this copyright statement is not removed from the file and that any
 * derivative work contains this copyright notice.
 *
 * Warranty
 * ANSYS, Inc  makes no warranty of any kind with regard to the
 * use of this Software, either expressed or implied, including, but not
 * limited to the fitness for a particular purpose.
 */

#ifndef _SMU_VTABLE_H_
#define _SMU_VTABLE_H_

#include "SmuTypes.h"

#ifdef __cplusplus
extern "C" {
#endif

/* Conversion version */
typedef enum SimConvVersion_t {
    Scv43,
    Scv612,
    Scv65,
    ScvR17,
    ScvR18,
    _ScvLast /* bounds checking */
} SimConvVersion;

/***************************************************************************************************/
/* VTable for operations (conversion/comparison) on imported types (Type Utils)                    */
/***************************************************************************************************/

/* Conversion types */
typedef enum SimConvType_t {
    SptNone,
    SptString,
    SptChar,
    SptShort,
    SptLong,
    SptFloat,
    SptDouble,
    SptBool,
    _SptLast	/* bounds checking */
} SimConvType;

typedef enum SimBool_t {
    SbFalse,
    SbTrue
} SimBool;

typedef int         (*PFN_VTABLE_GET_CONV_INFO)(SimConvType nTo, SimConvType nFrom);
typedef const void* (*PFN_VTABLE_TO_TYPE)(SimConvType, const void* pT);
typedef int         (*PFN_VTABLE_FROM_TYPE)(SimConvType, const void* pType, void* pT);
typedef int         (*PFN_VTABLE_COMPARE)(int* result, const void* pValue1, const void* pValue2);
typedef int         (*PFN_VTABLE_COMPARE_WITH_TOL)(int* result, const void* pValue1, const void* pValue2, const void* pTol);
typedef int         (*PFN_VTABLE_INIT)(void* pValue);
typedef int         (*PFN_VTABLE_RELEASE)(void* pValue);

struct SimTypeVTable {
    /*
    * version of the table
    */
    SimConvVersion m_version; 
    /*
    * non zero if both nTo and nFrom are provided
    * (SptNone is considered as beeing always provided)
    */
    PFN_VTABLE_GET_CONV_INFO m_pfnGetConvInfo;
    /*
    * serializes a value
    * returns the address of the value (non NULL if successful)
    */
    PFN_VTABLE_TO_TYPE m_pfnToType;
    /*
    * compiles a value (non zero if successful)
    */
    PFN_VTABLE_FROM_TYPE m_pfnFromType;
    /*
    * compares two values (non zero if successful)
    */
    PFN_VTABLE_COMPARE m_pfnCompare;
    /*
    * compares two values with tolerance (non zero if successful)
    */
    PFN_VTABLE_COMPARE_WITH_TOL m_pfnCompareWithTol;
    /*
    * release a value (non zero if successful)
    */
    PFN_VTABLE_RELEASE m_pfnRelease;
};

extern int string_to_VTable(const char *str, const struct SimTypeVTable *pVTable, void *pValue, char **endptr);
extern int is_VTable_double_conversion_allowed(const struct SimTypeVTable *pVTable);
extern int VTable_to_double(const void *pValue, const struct SimTypeVTable *pVTable, double *nRetValue);
extern int is_VTable_long_conversion_allowed(const struct SimTypeVTable *pVTable);
extern int VTable_to_long(const void *pValue, const struct SimTypeVTable *pVTable, long *nRetValue);



/***************************************************************************************************/
/* VTable for load/save imported operator context to text format (Test Services API)               */
/***************************************************************************************************/

typedef int (*PFN_IOCVTABLE_TO_STRING)(const void* pOutCtx, PFN_STR_APPEND pfnStrAppend, void* pStrObj);
typedef int (*PFN_IOCVTABLE_FROM_STRING)(const char* szString, void* pOutCtx, char** endptr);

struct SimImportedOpCtxVTable {
    /*
    * version of the table
    */
    SimConvVersion m_version;

    /*
    * serializes the output context of an imported operator to a string
    * returns non zero if successful
    */
    PFN_IOCVTABLE_TO_STRING m_pfnToString;

    /*
    * compiles the output context of an imported operator from a string
    * returns non zero if successful
    */
    PFN_IOCVTABLE_FROM_STRING m_pfnFromString;
};



/***************************************************************************************************/
/* VTable for root output context custom initialization (Reset model coverage probes)              */
/***************************************************************************************************/

typedef int(*PFN_CIVTABLE_CUSTOM_INIT)(void* pOutCtx);

struct SimCustomInitVTable {
    /*
    * version of the table
    */
    SimConvVersion m_version;

    /*
    * Perform custom initialization on root context structure
    * returns non zero if successful
    */
    PFN_CIVTABLE_CUSTOM_INIT m_pfnCustomInit;
};


#ifdef __cplusplus
} /* "C" */
#endif

#endif /* _SMU_VTABLE_H_ */

