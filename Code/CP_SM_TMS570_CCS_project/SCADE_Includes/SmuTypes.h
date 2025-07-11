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

#ifndef _SMU_TYPES_H_
#define _SMU_TYPES_H_

#include "SmuConfig.h"

#ifdef __cplusplus
extern "C" {
#endif

/* Ensure simualation DLL compatibility with SCADE binaries */
#if defined(_MSC_VER) || defined(__GNUC__)
#pragma pack(push, 8) 
#endif

/*Comparison result codes:*/
#define SIM_CMP_RES_EQ 1        /*a==b     or   |a-b| <= tol (if tol defined)*/
#define SIM_CMP_RES_NEQ 2       /*a!=b     or   |a-b| >  tol (if tol defined)*/
#define SIM_CMP_RES_BOUNDARY 4  /* | |a-b| - tol| < pow(2.0,-51)*|b|*/ 
#define SIM_CMP_RES_LT 8        /*a<b*/
#define SIM_CMP_RES_GT 16       /*a>b*/
#define SIM_CMP_RES_ERR 32      /*misc error*/
#define SIM_CMP_RES_BAD_SIM_CONV 64      /*SimTypeVTable (ex:pSimDoubleVTable) not in Scv65 version => unable to compare with tolerance */

#define MAX_REAL_FORMAT_LEN 10

typedef struct SimTolerance_t {
    double                      m_dTolerance;
    int                         m_bRelative;
} SimTolerance;

extern const SimTolerance defaultSimToleranceFloat;
extern const SimTolerance defaultSimToleranceDouble;

typedef int (*PFN_STR_APPEND) (const char *szStr, void *pStrObj);
typedef int (*PFN_STR_LIST_APPEND) (const char *szStr, void *pStrListObj);

typedef int  (*PFN_TYPE_TO_STRING)(const void *pValue, PFN_STR_APPEND pfnStrAppend, void *pStrObj);
typedef int  (*PFN_CHECK_STRING)(const char *szStr, char **endptr);
typedef int  (*PFN_STRING_TO_TYPE)(const char *szStr, void *pValue, char **endptr);
typedef int  (*PFN_ALLOW_DOUBLE_CONVERSION)();
typedef int  (*PFN_TYPE_TO_DOUBLE)(const void *pValue, double *dValue);
typedef int  (*PFN_ALLOW_LONG_CONVERSION)();
typedef int  (*PFN_TYPE_TO_LONG)(const void *pValue, long *lValue);
typedef void (*PFN_COMPARE_TYPE)(int *pResult, const void *pValue1, const void *pValue2, SimTolerance *pTol, const char *szPath, PFN_STR_LIST_APPEND pfnStrListAppend, void *pListErrPaths);
typedef int  (*PFN_GET_SIGNATURE)(PFN_STR_APPEND pfnStrAppend, void *pStrObj);
typedef int  (*PFN_INIT)(void *pValue);
typedef int  (*PFN_RELEASE)(void *pValue);
typedef int  (*PFN_COPY)(void *pToValue, const void *pFromValue);

typedef void(*PFN_GET_OBSERVABLE_FROM_PATH)(const char *szPath, void **pValue);

typedef struct SimTypeUtils_t {
    PFN_TYPE_TO_STRING          m_pfnTypeToString;
    PFN_CHECK_STRING            m_pfnCheckString;
    PFN_STRING_TO_TYPE          m_pfnStringToType;
    PFN_ALLOW_LONG_CONVERSION   m_pfnAllowDoubleConversion;
    PFN_TYPE_TO_DOUBLE          m_pfnTypeToDouble;
    PFN_ALLOW_LONG_CONVERSION   m_pfnAllowLongConversion;
    PFN_TYPE_TO_LONG            m_pfnTypeToLong;
    PFN_COMPARE_TYPE            m_pfnCompareType;
    PFN_GET_SIGNATURE           m_pfnGetSignature;
    PFN_INIT                    m_pfnInit;
    PFN_RELEASE                 m_pfnRelease;
    PFN_COPY                    m_pfnCopy;
    size_t                      m_nSize;
} SimTypeUtils;

typedef struct SimFieldUtils_t {
    const char*                 m_szScadeName;
    unsigned int                m_nOffset;
    SimTypeUtils*               m_pTypeUtils;
} SimFieldUtils;

typedef struct SimEnumValUtils_t {
    const char*                 m_szScadeName;
    int                         m_nVal;
} SimEnumValUtils;

typedef struct {
    const char*                 m_szScadeName;
    const void*                 m_pVal;
} SimConstValUtils;

/* Array */
typedef int (*PFN_ARRAY_TO_STRING)(const void *pValue, PFN_TYPE_TO_STRING pfnTypeToString, int nSize, int nCellSize, PFN_STR_APPEND pfnStrAppend, void *pStrObj);
typedef int (*PFN_STRING_TO_ARRAY)(const char *str, void *pValue, SimTypeUtils *pTypeUtils, int nSize, int nCellSize, char **endptr);
typedef void (*PFN_ARRAY_COMPARISON)(int *pResult, const void *pValue1, const void *pValue2, PFN_COMPARE_TYPE pfnCompareType, int nSize, int nCellSize, SimTolerance *pTol, const char *pszPath, PFN_STR_LIST_APPEND pfnStrListAppend, void *pListErrPaths);
typedef int (*PFN_GET_ARRAY_SIGNATURE)(PFN_GET_SIGNATURE pfnGetSignature, int nSize, PFN_STR_APPEND pfnStrAppend, void *pStrObj);

/* Char Array (String) */
typedef int (*PFN_CHAR_ARRAY_TO_STRING)(const void *pValue, PFN_TYPE_TO_STRING pfnTypeToString, int nSize, int nCellSize, PFN_STR_APPEND pfnStrAppend, void *pStrObj, int bStringsPadding, char cStringsPaddingChar);
typedef int (*PFN_STRING_TO_CHAR_ARRAY)(const char *str, void *pValue, SimTypeUtils *pTypeUtils, int nSize, int nCellSize, char **endptr, int bStringsPadding, char cStringsPaddingChar);

/* Structure */
typedef int (*PFN_STRUCTURE_TO_STRING)(const void *pValue, const SimFieldUtils *pFields, int nSize, PFN_STR_APPEND pfnStrAppend, void *pStrObj);
typedef int (*PFN_STRING_TO_STRUCTURE)(const char *str, void *pValue, const SimFieldUtils *pFields, int nSize, char **endptr);
typedef void (*PFN_STRUCTURE_COMPARISON)(int *pResult, const void *pValue1, const void *pValue2, const SimFieldUtils *pFields, int nSize, SimTolerance *pTol, const char *pszPath, PFN_STR_LIST_APPEND pfnStrListAppend, void *pListErrPaths);
typedef int (*PFN_GET_STRUCTURE_SIGNATURE)(const SimFieldUtils *pFields, int nSize, PFN_STR_APPEND pfnStrAppend, void *pStrObj);

/* Enum */
typedef int (*PFN_ENUM_TO_STRING)(int nValue, const SimEnumValUtils *pEnumVals, int nSize, PFN_STR_APPEND pfnStrAppend, void *pStrObj);
typedef int (*PFN_STRING_TO_ENUM)(const char* str, int* pValue, const SimEnumValUtils *pEnumVals, int nSize, int nAllowInt, char **endptr);
typedef int (*PFN_GET_ENUM_SIGNATURE)(const SimEnumValUtils *pEnumVals, int nSize, PFN_STR_APPEND pfnStrAppend, void *pStrObj);

/* Imported */
typedef int (*PFN_IMPORTED_TO_STRING)(const void *pValue, unsigned nSizeOf, PFN_STR_APPEND pfnStrAppend, void *pStrObj);
typedef int (*PFN_STRING_TO_IMPORTED)(const char *str, void *pValue, unsigned nSizeOf, char **endptr);

/* Constant */
typedef int (*PFN_STRING_TO_CONSTANT)(const char *strValue, void *pValue, const SimConstValUtils *pConstVals, unsigned nTableSize, unsigned nTypeSize, char **endptr);

/* Binary/Octal/Hexadecimal display */
/* (use int rather than enum for compatibility with Ada counterpart) */
#define IDB_DEFAULT 10
#define IDB_BINARY 2
#define IDB_OCTAL 8
#define IDB_HEXADECIMAL 16

typedef struct SimConverter_t {
    PFN_ARRAY_TO_STRING         m_pfnArrayToString;
    PFN_STRING_TO_ARRAY         m_pfnStringToArray;
    PFN_ARRAY_COMPARISON        m_pfnArrayComparison;
    PFN_GET_ARRAY_SIGNATURE     m_pfnGetArraySignature;
    PFN_CHAR_ARRAY_TO_STRING    m_pfnCharArrayToString;
    PFN_STRING_TO_CHAR_ARRAY    m_pfnStringToCharArray;
    PFN_STRUCTURE_TO_STRING     m_pfnStructureToString;
    PFN_STRING_TO_STRUCTURE     m_pfnStringToStructure;
    PFN_STRUCTURE_COMPARISON    m_pfnStructureComparison;
    PFN_GET_STRUCTURE_SIGNATURE m_pfnGetStructureSignature;
    PFN_ENUM_TO_STRING          m_pfnEnumToString;
    PFN_STRING_TO_ENUM          m_pfnStringToEnum;
    PFN_GET_ENUM_SIGNATURE      m_pfnGetEnumSignature;
    PFN_IMPORTED_TO_STRING      m_pfnImportedToString;
    PFN_STRING_TO_IMPORTED      m_pfnStringToImported;
    PFN_STRING_TO_CONSTANT      m_pfnStringToConstant;

    /* Parameters */
    int m_bDisplayStrings;
    int m_bStringsPadding;
    int m_bImportedAsHex;
    int m_bAdvancedTeCheck;
    int m_IntDisplayBase;
    char m_RealFormat[MAX_REAL_FORMAT_LEN];
    char m_cStringsPaddingChar;
} SimConverter;

extern SimConverter* pConverter;
extern char strDefaultRealFormat[];

/* Back to whatever the previous packing mode was */
#if defined(_MSC_VER) || defined(__GNUC__)
#pragma pack(pop)
#endif

#include "SmuVTable.h"

#ifdef __cplusplus
} /* "C" */
#endif

#endif /* _SMU_TYPES_H_ */
