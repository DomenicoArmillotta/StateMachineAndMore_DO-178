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

#ifndef _SMU_CONFIG_H_
#define _SMU_CONFIG_H_

#include "SmuUserConfig.h"
#include "te_config.h"

#ifdef SSM_NO_C99
#   ifdef SSM_C99
#       undef SSM_C99
#   endif
#else
#   ifndef SSM_C99
#       if defined(_MSC_VER)
#           if _MSC_VER >= 1800
#               define SSM_C99
#           endif
#       elif (defined(__STDC_VERSION__) && __STDC_VERSION__ >= 199901L) || __cplusplus >= 201103L
#           define SSM_C99
#       endif
#   endif
#endif

#if !defined(SSM_INT64) && defined(SSM_C99)
#   define SSM_INT64
#endif

/* stddef.h: size_t, offsetof */
#include <stddef.h>

/* float.h: FLT_EPSILON, DBL_EPSILON, FLT_MIN, FLT_MAX, DBL_MIN, DBL_MAX */
#if !defined(SSM_FLT_EPSILON) ||\
    !defined(SSM_DBL_EPSILON) ||\
    !defined(SSM_FLT_MIN)     ||\
    !defined(SSM_FLT_MAX)     ||\
    !defined(SSM_DBL_MIN)     ||\
    !defined(SSM_DBL_MAX)
#   define SSM_FLOAT_H
#endif
#ifdef SSM_FLOAT_H
#   include <float.h>
#   ifndef SSM_FLT_EPSILON
#       define SSM_FLT_EPSILON FLT_EPSILON
#   endif
#   ifndef SSM_DBL_EPSILON
#       define SSM_DBL_EPSILON DBL_EPSILON
#   endif
#   ifndef SSM_FLT_MIN
#       define SSM_FLT_MIN FLT_MIN
#   endif
#   ifndef SSM_FLT_MAX
#       define SSM_FLT_MAX FLT_MAX
#   endif
#   ifndef SSM_DBL_MIN
#       define SSM_DBL_MIN DBL_MIN
#   endif
#   ifndef SSM_DBL_MAX
#       define SSM_DBL_MAX DBL_MAX
#   endif
#endif /* SSM_FLOAT_H */

/* stdlib.h: malloc, free, strtol, strtoul, strtoll, strtoull, strtod */
#if !defined(ssm_malloc) ||\
    !defined(ssm_free)   ||\
    !defined(ssm_strtol) ||\
    !defined(ssm_strtoul) ||\
    !defined(ssm_strtoll) ||\
    !defined(ssm_strtoull) ||\
    !defined(ssm_strtod)
#   define SSM_STDLIB_H
#endif
#ifdef SSM_STDLIB_H
#   include <stdlib.h>
#   ifndef ssm_malloc
#       define ssm_malloc malloc
#   endif
#   ifndef ssm_free
#       define ssm_free free
#   endif
#   ifndef ssm_strtol
#       define ssm_strtol strtol
#   endif
#   ifndef ssm_strtoul
#       define ssm_strtoul strtoul
#   endif
#   ifndef ssm_strtoll
#       ifdef SSM_C99
#           define ssm_strtoll strtoll
#       else
#           define ssm_strtoll _strtoi64
#       endif
#   endif
#   ifndef ssm_strtoull
#       ifdef SSM_C99
#           define ssm_strtoull strtoull
#       else
#           define ssm_strtoull _strtoui64
#       endif
#   endif
#   ifndef ssm_strtod
#       define ssm_strtod strtod
#   endif
#endif /* SSM_STDLIB_H */

/* string.h: strncmp, memcpy, strcat */
#if !defined(ssm_strncmp) ||\
    !defined(ssm_memcpy)  ||\
    !defined(ssm_strcat)
#   define SSM_STRING_H
#endif
#ifdef SSM_STRING_H
#   include <string.h>
#   ifndef ssm_strncmp
#       define ssm_strncmp strncmp
#   endif
#   ifndef ssm_memcpy
#       define ssm_memcpy memcpy
#   endif
#   ifndef ssm_strcat
#       define ssm_strcat strcat
#   endif
#endif /* SSM_STRING_H */

/* stdio.h: sprintf */
#if !defined(ssm_sprintf)
#   define SSM_STDIO_H
#endif
#ifdef SSM_STDIO_H
#   include <stdio.h>
#   ifndef ssm_sprintf
#       define ssm_sprintf sprintf
#   endif
#endif /* SSM_STDIO_H */

/* limits.h: SCHAR_MIN, SCHAR_MAX, SHRT_MIN, SHRT_MAX, INT_MIN, INT_MAX, LONG_MIN, LONG_MAX, ULONG_MAX, LLONG_MIN, LLONG_MAX, UCHAR_MAX, USHRT_MAX, UINT_MAX, ULLONG_MAX */
#if !defined(SSM_SCHAR_MIN) ||\
    !defined(SSM_SCHAR_MAX) ||\
    !defined(SSM_SHRT_MIN)  ||\
    !defined(SSM_SHRT_MAX)  ||\
    !defined(SSM_INT_MIN)   ||\
    !defined(SSM_INT_MAX)   ||\
    !defined(SSM_LONG_MIN)  ||\
    !defined(SSM_LONG_MAX)  ||\
    !defined(SSM_ULONG_MAX) ||\
    !defined(SSM_LLONG_MIN) ||\
    !defined(SSM_LLONG_MAX) ||\
    !defined(SSM_UCHAR_MAX) ||\
    !defined(SSM_USHRT_MAX) ||\
    !defined(SSM_UINT_MAX)  ||\
    !defined(SSM_ULLONG_MAX)
#   define SSM_LIMITS_H
#endif
#ifdef SSM_LIMITS_H
#   include <limits.h>
#   ifndef SSM_SCHAR_MIN
#       define SSM_SCHAR_MIN SCHAR_MIN
#   endif
#   ifndef SSM_SCHAR_MAX
#       define SSM_SCHAR_MAX SCHAR_MAX
#   endif
#   ifndef SSM_SHRT_MIN
#       define SSM_SHRT_MIN SHRT_MIN
#   endif
#   ifndef SSM_SHRT_MAX
#       define SSM_SHRT_MAX SHRT_MAX
#   endif
#   ifndef SSM_INT_MIN
#       define SSM_INT_MIN INT_MIN
#   endif
#   ifndef SSM_INT_MAX
#       define SSM_INT_MAX INT_MAX
#   endif
#   ifndef SSM_LONG_MIN
#       define SSM_LONG_MIN LONG_MIN
#   endif
#   ifndef SSM_LONG_MAX
#       define SSM_LONG_MAX LONG_MAX
#   endif
#   ifndef SSM_ULONG_MAX
#       define SSM_ULONG_MAX ULONG_MAX
#   endif
#   ifndef SSM_LLONG_MIN
#       ifndef LLONG_MIN
#           define LLONG_MIN (-9223372036854775807i64 - 1)
#       endif
#       define SSM_LLONG_MIN LLONG_MIN
#   endif
#   ifndef SSM_LLONG_MAX
#       ifndef LLONG_MAX
#           define LLONG_MAX 9223372036854775807
#       endif
#       define SSM_LLONG_MAX LLONG_MAX
#   endif
#   ifndef SSM_UCHAR_MAX
#       define SSM_UCHAR_MAX UCHAR_MAX
#   endif
#   ifndef SSM_USHRT_MAX
#       define SSM_USHRT_MAX USHRT_MAX
#   endif
#   ifndef SSM_UINT_MAX
#       define SSM_UINT_MAX UINT_MAX
#   endif
#   ifndef SSM_ULLONG_MAX
#       ifndef ULLONG_MAX
#           define ULLONG_MAX 0xffffffffffffffff
#       endif
#       define SSM_ULLONG_MAX ULLONG_MAX
#   endif
#endif /* SSM_LIMITS_H */

/* errno.h: errno, ERANGE */
#if !defined(ssm_errno) ||\
    !defined(SSM_ERANGE)
#   define SSM_ERRNO_H
#endif
#ifdef SSM_ERRNO_H
#   include <errno.h>
#   ifndef ssm_errno
#       define ssm_errno errno
#   endif
#   ifndef SSM_ERANGE
#       define SSM_ERANGE ERANGE
#   endif
#endif /* SSM_ERRNO_H */

/* inttypes.h: PRId64, PRIu64 */
#ifdef SSM_C99
#   if !defined(SSM_PRId64) ||\
       !defined(SSM_PRIu64)
#       define SSM_INTTYPES_H
#   endif
#   ifdef SSM_INTTYPES_H
#       define __STDC_FORMAT_MACROS
#       include <inttypes.h>
#       ifndef SSM_PRId64
#           define SSM_PRId64 PRId64
#       endif
#       ifndef SSM_PRIu64
#           define SSM_PRIu64 PRIu64
#       endif
#   endif /* SSM_INTTYPES_H */
#endif /* SSM_C99 */

/*****************************************************************************/
#ifdef __cplusplus
extern "C" {
#endif

/* from/to string conversion*/
int ssm_string_to_bool(const char *str, int *value, char **endptr);

int ssm_char_to_string(char value, char *str);
int ssm_string_to_char(const char *str, char *value, char **endptr);

int ssm_int_to_string(void *value, int size, int sign, char *str);
int ssm_int_to_base_string(void *value, int size, int sign, int base, char *str);
int ssm_string_to_int(const char *str, void *value, int size, int sign, char **endptr);

int ssm_float_to_string(float value, const char *format, char *buffer, int advanced_te_check);
int ssm_double_to_string(double value, const char *format, char *buffer, int advanced_te_check);
#define ssm_real_to_string(value, size, format, buffer, advanced_te_check) \
    (size == 4 ? \
        ssm_float_to_string(*(float*)value, format, buffer, advanced_te_check) : \
        ssm_double_to_string(*(double*)value, format, buffer, advanced_te_check))

int ssm_string_to_float(const char *str, float *value, char **endptr, int advanced_te_check);
int ssm_string_to_double(const char *str, double *value, char **endptr, int advanced_te_check);
#define ssm_string_to_real(str, value, size, endptr, advanced_te_check) \
    (size == 4 ? \
        ssm_string_to_float(str, (float*)value, endptr, advanced_te_check) : \
        ssm_string_to_double(str, (double*)value, endptr, advanced_te_check))

/* Compatibility with old VC compilers */

#define ssm_qnan_32 te_qnan_32
#define ssm_snan_32 te_snan_32
#define ssm_qnan_64 te_qnan_64
#define ssm_snan_64 te_snan_64

#define ssm_nan() te_nan_64
#define ssm_inf() te_inf_64

#define ssm_is_inf_dbl(x) te_is_inf_64(x)
#define ssm_is_qnan_dbl(x) te_is_qnan_64(x)
#define ssm_is_snan_dbl(x) te_is_snan_64(x)
#define ssm_is_nan_dbl(x) te_is_nan_64(x)
#define ssm_sign_bit_dbl(x) te_signbit_64(x)

#define ssm_is_inf_flt(x) te_is_inf_32(x)
#define ssm_is_qnan_flt(x) te_is_qnan_32(x)
#define ssm_is_snan_flt(x) te_is_snan_32(x)
#define ssm_is_nan_flt(x) te_is_nan_32(x)
#define ssm_sign_bit_flt(x) te_signbit_32(x)

#define ssm_is_inf(v) (sizeof(v) == 4 ? ssm_is_inf_flt((float)(v)) : ssm_is_inf_dbl((double)(v)))
#define ssm_is_qnan(v) (sizeof(v) == 4 ? ssm_is_qnan_flt((float)(v)) : ssm_is_qnan_dbl((double)(v)))
#define ssm_is_snan(v) (sizeof(v) == 4 ? ssm_is_snan_flt((float)(v)) : ssm_is_snan_dbl((double)(v)))
#define ssm_is_nan(v) (sizeof(v) == 4 ? ssm_is_nan_flt((float)(v)) : ssm_is_nan_dbl((double)(v)))
#define ssm_sign_bit(v) (sizeof(v) == 4 ? ssm_sign_bit_flt((float)(v)) : ssm_sign_bit_dbl((double)(v)))

/* Special NaN value for storing "NaN" expected value (SSM::check) => test PASSED weither actual is sNaN or qNaN */
static TE_ALIASED_FLT(32) const ssm_aliased_nan_xnan_32 = { 0x7FFFFFFE };
static TE_ALIASED_FLT(64) const ssm_aliased_nan_xnan_64 = { 0x7FFFFFFFFFFFFFFE };

#define ssm_nan_xnan_32 ssm_aliased_nan_xnan_32.flt
#define ssm_nan_xnan_64 ssm_aliased_nan_xnan_64.flt

te_inline int ssm_is_nan_xnan_32(te_float32 f32) {
    TE_ALIASED_FLT(32) ai32; ai32.flt = f32;
    return (ai32.bin & ssm_aliased_nan_xnan_32.bin) == ssm_aliased_nan_xnan_32.bin;
}
te_inline int ssm_is_nan_xnan_64(te_float64 f64) {
    TE_ALIASED_FLT(64) ai64; ai64.flt = f64;
    return (ai64.bin & ssm_aliased_nan_xnan_64.bin) == ssm_aliased_nan_xnan_64.bin;
}

#define ssm_is_nan_xnan(v) (sizeof(v) == 4 ? ssm_is_nan_xnan_32((float)(v)) : ssm_is_nan_xnan_64((double)(v)))

/* Special NaN value for storing plus zero expected value SSM::check */
static TE_ALIASED_FLT(32) const ssm_aliased_nan_pzero_32    = { 0x7FFFFFFF };
static TE_ALIASED_FLT(64) const ssm_aliased_nan_pzero_64    = { 0x7FFFFFFFFFFFFFFF };

#define ssm_nan_pzero_32 ssm_aliased_nan_pzero_32.flt
#define ssm_nan_pzero_64 ssm_aliased_nan_pzero_64.flt

te_inline int ssm_is_nan_pzero_32(te_float32 f32) {
    TE_ALIASED_FLT(32) ai32; ai32.flt = f32;
    return (ai32.bin & ssm_aliased_nan_pzero_32.bin) == ssm_aliased_nan_pzero_32.bin;
}
te_inline int ssm_is_nan_pzero_64(te_float64 f64) {
    TE_ALIASED_FLT(64) ai64; ai64.flt = f64;
    return (ai64.bin & ssm_aliased_nan_pzero_64.bin) == ssm_aliased_nan_pzero_64.bin;
}

#define ssm_is_pzero_flt(x) te_is_pzero_32(x)
#define ssm_is_nzero_flt(x) te_is_nzero_32(x)
#define ssm_is_pzero_dbl(x) te_is_pzero_64(x)
#define ssm_is_nzero_dbl(x) te_is_nzero_64(x)

#define ssm_is_nan_pzero(v) (sizeof(v) == 4 ? ssm_is_nan_pzero_32((float)(v)) : ssm_is_nan_pzero_64((double)(v)))
#define ssm_is_pzero(v) (sizeof(v) == 4 ? ssm_is_pzero_flt((float)(v)) : ssm_is_pzero_dbl((double)(v)))
#define ssm_is_nzero(v) (sizeof(v) == 4 ? ssm_is_nzero_flt((float)(v)) : ssm_is_nzero_dbl((double)(v)))

#ifdef __cplusplus
} /* extern "C" */
#endif
/*****************************************************************************/

#endif /* _SMU_CONFIG_H_ */
