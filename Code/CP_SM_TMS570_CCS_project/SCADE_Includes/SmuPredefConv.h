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

#ifndef _SMU_PREDEF_CONV_H_
#define _SMU_PREDEF_CONV_H_

#ifdef __cplusplus
extern "C" {
#endif

#include "SmuTypes.h"

#include "kcg_types.h"

/* Utils */
void updateCompareResult(int unitResult, int *pGlobalResult);


/* Predefined <type> comparison functions */
int predef_compare_kcg_bool(int *pResult, kcg_bool value1, kcg_bool value2);
int predef_compare_kcg_char(int *pResult, kcg_char value1, kcg_char value2);
int predef_compare_enum(int *pResult, int nValue1, int nValue2);

/* Predefined string to <type> conversion functions */
int predef_string_to_kcg_bool(const char* str, kcg_bool *pValue, char **endptr);
int predef_string_to_kcg_char(const char* str, kcg_char *pValue, char **endptr);

/* Predefined <type> to string conversion functions */
int predef_kcg_bool_to_string(kcg_bool bValue, PFN_STR_APPEND pfnStrAppend, void *pStrObj);
int predef_kcg_char_to_string(kcg_char cValue, PFN_STR_APPEND pfnStrAppend, void *pStrObj);

#ifdef kcg_size
int predef_compare_kcg_size(int *pResult, kcg_size value1, kcg_size value2);
int predef_string_to_kcg_size(const char* str, kcg_size *pValue, char **endptr);
int predef_kcg_size_to_string(kcg_size nValue, PFN_STR_APPEND pfnStrAppend, void *pStrObj);
#endif

#ifdef kcg_int8
int predef_compare_kcg_int8(int *pResult, kcg_int8 value1, kcg_int8 value2);
int predef_string_to_kcg_int8(const char* str, kcg_int8 *pValue, char **endptr);
int predef_kcg_int8_to_string(kcg_int8 nValue, PFN_STR_APPEND pfnStrAppend, void *pStrObj);
#endif

#ifdef kcg_int16
int predef_compare_kcg_int16(int *pResult, kcg_int16 value1, kcg_int16 value2);
int predef_string_to_kcg_int16(const char* str, kcg_int16 *pValue, char **endptr);
int predef_kcg_int16_to_string(kcg_int16 nValue, PFN_STR_APPEND pfnStrAppend, void *pStrObj);
#endif

#ifdef kcg_int32
int predef_compare_kcg_int32(int *pResult, kcg_int32 value1, kcg_int32 value2);
int predef_string_to_kcg_int32(const char* str, kcg_int32 *pValue, char **endptr);
int predef_kcg_int32_to_string(kcg_int32 nValue, PFN_STR_APPEND pfnStrAppend, void *pStrObj);
#endif

#ifdef kcg_int64
int predef_compare_kcg_int64(int *pResult, kcg_int64 value1, kcg_int64 value2);
int predef_string_to_kcg_int64(const char* str, kcg_int64 *pValue, char **endptr);
int predef_kcg_int64_to_string(kcg_int64 nValue, PFN_STR_APPEND pfnStrAppend, void *pStrObj);
#endif

#ifdef kcg_uint8
int predef_compare_kcg_uint8(int *pResult, kcg_uint8 value1, kcg_uint8 value2);
int predef_string_to_kcg_uint8(const char* str, kcg_uint8 *pValue, char **endptr);
int predef_kcg_uint8_to_string(kcg_uint8 nValue, PFN_STR_APPEND pfnStrAppend, void *pStrObj);
#endif

#ifdef kcg_uint16
int predef_compare_kcg_uint16(int *pResult, kcg_uint16 value1, kcg_uint16 value2);
int predef_string_to_kcg_uint16(const char* str, kcg_uint16 *pValue, char **endptr);
int predef_kcg_uint16_to_string(kcg_uint16 nValue, PFN_STR_APPEND pfnStrAppend, void *pStrObj);
#endif

#ifdef kcg_uint32
int predef_compare_kcg_uint32(int *pResult, kcg_uint32 value1, kcg_uint32 value2);
int predef_string_to_kcg_uint32(const char* str, kcg_uint32 *pValue, char **endptr);
int predef_kcg_uint32_to_string(kcg_uint32 nValue, PFN_STR_APPEND pfnStrAppend, void *pStrObj);
#endif

#ifdef kcg_uint64
int predef_compare_kcg_uint64(int *pResult, kcg_uint64 value1, kcg_uint64 value2);
int predef_string_to_kcg_uint64(const char* str, kcg_uint64 *pValue, char **endptr);
int predef_kcg_uint64_to_string(kcg_uint64 nValue, PFN_STR_APPEND pfnStrAppend, void *pStrObj);
#endif

#ifdef kcg_float32
int predef_compare_kcg_float32(int *pResult, kcg_float32 value1, kcg_float32 value2, SimTolerance *pTol);
int predef_string_to_kcg_float32(const char* str, kcg_float32 *pValue, char **endptr);
int predef_kcg_float32_to_string(kcg_float32 fValue, const char *realFormat, PFN_STR_APPEND pfnStrAppend, void *pStrObj);
#endif

#ifdef kcg_float64
int predef_compare_kcg_float64(int *pResult, kcg_float64 value1, kcg_float64 value2, SimTolerance *pTol);
int predef_string_to_kcg_float64(const char* str, kcg_float64 *pValue, char **endptr);
int predef_kcg_float64_to_string(kcg_float64 fValue, const char *realFormat, PFN_STR_APPEND pfnStrAppend, void *pStrObj);
#endif

#ifdef __cplusplus
} /* "C" */
#endif

#endif /* _SMU_PREDEF_CONV_ */
