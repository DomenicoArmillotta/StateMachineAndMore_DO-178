/* $********** SCADE Suite KCG 32-bit 6.6.4 (build i3) **********
** Command: kcg664.exe -config C:/Users/mbda/Documents/GitHub/SCADE_project/prova_1/Prova_1/KCG/config.txt
** Generation date: 2025-07-18T14:22:15
*************************************************************$ */
#ifndef KCG_TYPES_H_
#define KCG_TYPES_H_

#ifndef KCG_NO_STDDEF_H
#include "stddef.h"
#endif /* KCG_NO_STDDEF_H */

#define KCG_MAPW_CPY

#include "./user_macros.h"

#ifndef kcg_char
#define kcg_char kcg_char
typedef char kcg_char;
#endif /* kcg_char */

#ifndef kcg_bool
#define kcg_bool kcg_bool
typedef unsigned char kcg_bool;
#endif /* kcg_bool */

#ifndef kcg_float32
#define kcg_float32 kcg_float32
typedef float kcg_float32;
#endif /* kcg_float32 */

#ifndef kcg_float64
#define kcg_float64 kcg_float64
typedef double kcg_float64;
#endif /* kcg_float64 */

#ifndef kcg_size
#define kcg_size kcg_size
typedef ptrdiff_t kcg_size;
#endif /* kcg_size */

#ifndef kcg_uint64
#define kcg_uint64 kcg_uint64
typedef unsigned long long kcg_uint64;
#endif /* kcg_uint64 */

#ifndef kcg_uint32
#define kcg_uint32 kcg_uint32
typedef unsigned long kcg_uint32;
#endif /* kcg_uint32 */

#ifndef kcg_uint16
#define kcg_uint16 kcg_uint16
typedef unsigned short kcg_uint16;
#endif /* kcg_uint16 */

#ifndef kcg_uint8
#define kcg_uint8 kcg_uint8
typedef unsigned char kcg_uint8;
#endif /* kcg_uint8 */

#ifndef kcg_int64
#define kcg_int64 kcg_int64
typedef signed long long kcg_int64;
#endif /* kcg_int64 */

#ifndef kcg_int32
#define kcg_int32 kcg_int32
typedef signed long kcg_int32;
#endif /* kcg_int32 */

#ifndef kcg_int16
#define kcg_int16 kcg_int16
typedef signed short kcg_int16;
#endif /* kcg_int16 */

#ifndef kcg_int8
#define kcg_int8 kcg_int8
typedef signed char kcg_int8;
#endif /* kcg_int8 */

#ifndef kcg_lit_float32
#define kcg_lit_float32(kcg_C1) ((kcg_float32) (kcg_C1))
#endif /* kcg_lit_float32 */

#ifndef kcg_lit_float64
#define kcg_lit_float64(kcg_C1) ((kcg_float64) (kcg_C1))
#endif /* kcg_lit_float64 */

#ifndef kcg_lit_size
#define kcg_lit_size(kcg_C1) ((kcg_size) (kcg_C1))
#endif /* kcg_lit_size */

#ifndef kcg_lit_uint64
#define kcg_lit_uint64(kcg_C1) ((kcg_uint64) (kcg_C1))
#endif /* kcg_lit_uint64 */

#ifndef kcg_lit_uint32
#define kcg_lit_uint32(kcg_C1) ((kcg_uint32) (kcg_C1))
#endif /* kcg_lit_uint32 */

#ifndef kcg_lit_uint16
#define kcg_lit_uint16(kcg_C1) ((kcg_uint16) (kcg_C1))
#endif /* kcg_lit_uint16 */

#ifndef kcg_lit_uint8
#define kcg_lit_uint8(kcg_C1) ((kcg_uint8) (kcg_C1))
#endif /* kcg_lit_uint8 */

#ifndef kcg_lit_int64
#define kcg_lit_int64(kcg_C1) ((kcg_int64) (kcg_C1))
#endif /* kcg_lit_int64 */

#ifndef kcg_lit_int32
#define kcg_lit_int32(kcg_C1) ((kcg_int32) (kcg_C1))
#endif /* kcg_lit_int32 */

#ifndef kcg_lit_int16
#define kcg_lit_int16(kcg_C1) ((kcg_int16) (kcg_C1))
#endif /* kcg_lit_int16 */

#ifndef kcg_lit_int8
#define kcg_lit_int8(kcg_C1) ((kcg_int8) (kcg_C1))
#endif /* kcg_lit_int8 */

#ifndef kcg_false
#define kcg_false ((kcg_bool) 0)
#endif /* kcg_false */

#ifndef kcg_true
#define kcg_true ((kcg_bool) 1)
#endif /* kcg_true */

#ifndef kcg_lsl_uint64
#define kcg_lsl_uint64(kcg_C1, kcg_C2)                                        \
  ((kcg_uint64) ((kcg_C1) << (kcg_C2)) & 0xffffffffffffffff)
#endif /* kcg_lsl_uint64 */

#ifndef kcg_lsl_uint32
#define kcg_lsl_uint32(kcg_C1, kcg_C2)                                        \
  ((kcg_uint32) ((kcg_C1) << (kcg_C2)) & 0xffffffff)
#endif /* kcg_lsl_uint32 */

#ifndef kcg_lsl_uint16
#define kcg_lsl_uint16(kcg_C1, kcg_C2)                                        \
  ((kcg_uint16) ((kcg_C1) << (kcg_C2)) & 0xffff)
#endif /* kcg_lsl_uint16 */

#ifndef kcg_lsl_uint8
#define kcg_lsl_uint8(kcg_C1, kcg_C2)                                         \
  ((kcg_uint8) ((kcg_C1) << (kcg_C2)) & 0xff)
#endif /* kcg_lsl_uint8 */

#ifndef kcg_lnot_uint64
#define kcg_lnot_uint64(kcg_C1) ((kcg_C1) ^ 0xffffffffffffffff)
#endif /* kcg_lnot_uint64 */

#ifndef kcg_lnot_uint32
#define kcg_lnot_uint32(kcg_C1) ((kcg_C1) ^ 0xffffffff)
#endif /* kcg_lnot_uint32 */

#ifndef kcg_lnot_uint16
#define kcg_lnot_uint16(kcg_C1) ((kcg_C1) ^ 0xffff)
#endif /* kcg_lnot_uint16 */

#ifndef kcg_lnot_uint8
#define kcg_lnot_uint8(kcg_C1) ((kcg_C1) ^ 0xff)
#endif /* kcg_lnot_uint8 */

#ifndef kcg_assign
#include "kcg_assign.h"
#endif /* kcg_assign */

#ifndef kcg_assign_struct
#define kcg_assign_struct kcg_assign
#endif /* kcg_assign_struct */

#ifndef kcg_assign_array
#define kcg_assign_array kcg_assign
#endif /* kcg_assign_array */

typedef kcg_int8 array_int8_32[32];

typedef array_int8_32 array_int8_32_32[32];

typedef kcg_int8 array_int8_3[3];

typedef array_int8_3 array_int8_3_3[3];

typedef kcg_int8 array_int8_30[30];

typedef array_int8_30 array_int8_30_30[30];

/* State_Machine_TI::Type1/ */
typedef struct kcg_tag_Type1_State_Machine_TI {
  kcg_bool struct_bool;
  kcg_int8 struct_int;
} Type1_State_Machine_TI;

#ifndef kcg_copy_Type1_State_Machine_TI
#define kcg_copy_Type1_State_Machine_TI(kcg_C1, kcg_C2)                       \
  (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (Type1_State_Machine_TI)))
#endif /* kcg_copy_Type1_State_Machine_TI */

#ifndef kcg_copy_array_int8_3_3
#define kcg_copy_array_int8_3_3(kcg_C1, kcg_C2)                               \
  (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int8_3_3)))
#endif /* kcg_copy_array_int8_3_3 */

#ifndef kcg_copy_array_int8_30_30
#define kcg_copy_array_int8_30_30(kcg_C1, kcg_C2)                             \
  (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int8_30_30)))
#endif /* kcg_copy_array_int8_30_30 */

#ifndef kcg_copy_array_int8_32_32
#define kcg_copy_array_int8_32_32(kcg_C1, kcg_C2)                             \
  (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int8_32_32)))
#endif /* kcg_copy_array_int8_32_32 */

#ifndef kcg_copy_array_int8_30
#define kcg_copy_array_int8_30(kcg_C1, kcg_C2)                                \
  (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int8_30)))
#endif /* kcg_copy_array_int8_30 */

#ifndef kcg_copy_array_int8_3
#define kcg_copy_array_int8_3(kcg_C1, kcg_C2)                                 \
  (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int8_3)))
#endif /* kcg_copy_array_int8_3 */

#ifndef kcg_copy_array_int8_32
#define kcg_copy_array_int8_32(kcg_C1, kcg_C2)                                \
  (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int8_32)))
#endif /* kcg_copy_array_int8_32 */

#ifdef kcg_use_Type1_State_Machine_TI
#ifndef kcg_comp_Type1_State_Machine_TI
extern kcg_bool kcg_comp_Type1_State_Machine_TI(
  Type1_State_Machine_TI *kcg_c1,
  Type1_State_Machine_TI *kcg_c2);
#endif /* kcg_comp_Type1_State_Machine_TI */
#endif /* kcg_use_Type1_State_Machine_TI */

#ifdef kcg_use_array_int8_3_3
#ifndef kcg_comp_array_int8_3_3
extern kcg_bool kcg_comp_array_int8_3_3(
  array_int8_3_3 *kcg_c1,
  array_int8_3_3 *kcg_c2);
#endif /* kcg_comp_array_int8_3_3 */
#endif /* kcg_use_array_int8_3_3 */

#ifdef kcg_use_array_int8_30_30
#ifndef kcg_comp_array_int8_30_30
extern kcg_bool kcg_comp_array_int8_30_30(
  array_int8_30_30 *kcg_c1,
  array_int8_30_30 *kcg_c2);
#endif /* kcg_comp_array_int8_30_30 */
#endif /* kcg_use_array_int8_30_30 */

#ifdef kcg_use_array_int8_32_32
#ifndef kcg_comp_array_int8_32_32
extern kcg_bool kcg_comp_array_int8_32_32(
  array_int8_32_32 *kcg_c1,
  array_int8_32_32 *kcg_c2);
#endif /* kcg_comp_array_int8_32_32 */
#endif /* kcg_use_array_int8_32_32 */

#ifdef kcg_use_array_int8_30
#ifndef kcg_comp_array_int8_30
extern kcg_bool kcg_comp_array_int8_30(
  array_int8_30 *kcg_c1,
  array_int8_30 *kcg_c2);
#endif /* kcg_comp_array_int8_30 */
#endif /* kcg_use_array_int8_30 */

#ifdef kcg_use_array_int8_3
#ifndef kcg_comp_array_int8_3
extern kcg_bool kcg_comp_array_int8_3(
  array_int8_3 *kcg_c1,
  array_int8_3 *kcg_c2);
#endif /* kcg_comp_array_int8_3 */
#endif /* kcg_use_array_int8_3 */

#ifdef kcg_use_array_int8_32
#ifndef kcg_comp_array_int8_32
extern kcg_bool kcg_comp_array_int8_32(
  array_int8_32 *kcg_c1,
  array_int8_32 *kcg_c2);
#endif /* kcg_comp_array_int8_32 */
#endif /* kcg_use_array_int8_32 */

#endif /* KCG_TYPES_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6.4 (build i3) **********
** kcg_types.h
** Generation date: 2025-07-18T14:22:15
*************************************************************$ */

