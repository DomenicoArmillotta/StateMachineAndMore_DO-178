/*
 * Copyright(C) 2020 ANSYS, Inc. ALL RIGHTS RESERVED.
 * Copyright(C) 2017 ESTEREL TECHNOLOGIES SAS. ALL RIGHTS RESERVED.
 * This source file may be used and distributed without restriction provided
 * that this copyright statement is not removed from the file and that any
 * derivative work contains this copyright notice.
 *
 * Warranty
 * ANSYS, Inc  makes no warranty of any kind with regard to the
 * use of this Software, either expressed or implied, including, but not
 * limited to the fitness for a particular purpose.
 */

#ifndef _SMU_USER_CONFIG_H_
#define _SMU_USER_CONFIG_H_

#include <stddef.h>

/*****************************************************************************/
/* desactivate usage of SmuLib (requires malloc & free)                      */
/*#define NO_SMU_LIB*/
/*****************************************************************************/

/*****************************************************************************/
/* stdlib.h: strtoll, strtoull                                               */
/* limits.h: LLONG_MIN, LLONG_MAX, ULLONG_MAX                                */
/* inttypes.h: PRId64, PRIu64                                                */
/*#define SSM_NO_C99*/
/*#define SSM_C99*/
/*****************************************************************************/

/* float.h *******************************************************************/
/*#define SSM_FLT_EPSILON 0.01F*/
/*#define SSM_DBL_EPSILON 0.01*/
/*#define SSM_FLT_MIN -1.0F*/
/*#define SSM_FLT_MAX +1.0F*/
/*#define SSM_DBL_MIN +1.0*/
/*#define SSM_DBL_MAX -1.0*/
/*****************************************************************************/

/* stdlib.h ******************************************************************/
/*extern void *custom_malloc(size_t size);*/
/*#define ssm_malloc custom_malloc*/
/*extern void custom_free(void *ptr);*/
/*#define ssm_free custom_free*/
/*extern long int custom_strtol(const char *str, char **endptr, int base);*/
/*#define ssm_strtol custom_strtol*/
/*extern unsigned long int custom_strtoul(const char *str, char **endptr, int base);*/
/*#define ssm_strtoul custom_strtoul*/
/*extern long long int custom_strtoll(const char *str, char **endptr, int base);*/
/*#define ssm_strtoll custom_strtoll*/
/*extern unsigned long long int custom_strtoull(const char *str, char **endptr, int base);*/
/*#define ssm_strtoull custom_strtoull*/
/*extern double custom_strtod(const char *str, char **endptr);*/
/*#define ssm_strtod custom_strtod*/
/*****************************************************************************/

/* string.h ******************************************************************/
/*extern int custom_strncmp(const char *str1, const char *str2, size_t num);*/
/*#define ssm_strncmp custom_strncmp*/
/*extern void *custom_memcpy(void *destination, const void *source, size_t num);*/
/*#define ssm_memcpy custom_memcpy*/
/*extern char *custom_strcat( char *destination, const char *source);*/
/*#define ssm_strcat custom_strcat*/
/*****************************************************************************/

/* stdio.h *******************************************************************/
/*extern int custom_sprintf(char *str, const char *format, ... );*/
/*#define ssm_sprintf custom_sprintf*/
/*****************************************************************************/

/* limits.h ******************************************************************/
/*#define SSM_SCHAR_MIN -1*/
/*#define SSM_SCHAR_MAX 1*/
/*#define SSM_UCHAR_MAX 1*/
/*#define SSM_SHRT_MIN -1*/
/*#define SSM_SHRT_MAX 1*/
/*#define SSM_USHRT_MAX 1*/
/*#define SSM_INT_MIN -1*/
/*#define SSM_INT_MAX 1*/
/*#define SSM_UINT_MAX 1*/
/*#define SSM_LONG_MIN -1L*/
/*#define SSM_LONG_MAX 1L*/
/*#define SSM_ULONG_MAX 1UL*/
/*#define SSM_LLONG_MIN -1LL*/
/*#define SSM_LLONG_MAX 1LL*/
/*#define SSM_ULLONG_MAX 1ULL*/
/*****************************************************************************/

/* errno.h *******************************************************************/
/*extern int custom_errno;*/
/*#define ssm_errno custom_errno*/
/*#define SSM_ERANGE 42*/
/*****************************************************************************/

/* inttypes.h ****************************************************************/
/*#define SSM_PRId64 "lld"*/
/*#define SSM_PRIu64 "llu"*/
/*****************************************************************************/

#endif /* _SMU_USER_CONFIG_H_ */
