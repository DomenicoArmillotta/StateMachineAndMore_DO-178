/*
 * Copyright (C) 2020  ANSYS, Inc. ALL RIGHTS RESERVED.
 * Copyright (C) 2019 ESTEREL TECHNOLOGIES SAS. ALL RIGHTS RESERVED.
 * This source file may be used and distributed without restriction provided
 * that this copyright statement is not removed from the file and that any
 * derivative work contains this copyright notice.
 *
 * Warranty
 * ANSYS, Inc  makes no warranty of any kind with regard to the
 * use of this Software, either expressed or implied, including, but not
 * limited to the fitness for a particular purpose.
 */

#ifndef TE_CONFIG_H_
#define TE_CONFIG_H_

#ifdef __cplusplus
extern "C" {
#endif


#define te_float32 float
#define te_uint32 unsigned long

#define te_float64 double
#define te_uint64 unsigned long long


#define TE_ALIASED_FLT(W) union { te_uint##W bin; te_float##W flt; }

static TE_ALIASED_FLT(32) const aliased_inf_32      = { 0x7F800000 };
static TE_ALIASED_FLT(32) const aliased_qnan_32     = { 0x7FC00000 };
static TE_ALIASED_FLT(32) const aliased_snan_32     = { 0x7FA00000 };

#define te_inf_32 aliased_inf_32.flt
#define te_qnan_32 aliased_qnan_32.flt
#define te_snan_32 aliased_snan_32.flt
#define te_nan_32 te_qnan_32

static TE_ALIASED_FLT(64) const aliased_inf_64      = { 0x7FF0000000000000 };
static TE_ALIASED_FLT(64) const aliased_qnan_64     = { 0x7FF8000000000000 };
static TE_ALIASED_FLT(64) const aliased_snan_64     = { 0x7FF4000000000000 };

#define te_inf_64 aliased_inf_64.flt
#define te_qnan_64 aliased_qnan_64.flt
#define te_snan_64 aliased_snan_64.flt
#define te_nan_64 te_qnan_64


#ifdef __STDC_VERSION__
#   if __STDC_VERSION__ >= 199901L
#       define te_inline static inline
#   else
#       define te_inline static
#   endif
#else
#   define te_inline static
#endif

te_inline int te_is_inf_32(te_float32 f32) {
    TE_ALIASED_FLT(32) ai32; ai32.flt = f32;
    return  (ai32.bin & 0x7F800000) == 0x7F800000 &&
            (ai32.bin & 0x007FFFFF) == 0;
}

te_inline int te_is_qnan_32(te_float32 f32) {
    TE_ALIASED_FLT(32) ai32; ai32.flt = f32;
    return  (ai32.bin & 0x7F800000) == 0x7F800000 &&
            (ai32.bin & 0x00400000) == 0x00400000;
}
te_inline int te_is_snan_32(te_float32 f32) {
    TE_ALIASED_FLT(32) ai32; ai32.flt = f32;
    return  (ai32.bin & 0x7F800000) == 0x7F800000 &&
            (ai32.bin & 0x00400000) == 0 &&
            (ai32.bin & 0x003FFFFF) != 0;
}
te_inline int te_is_nan_32(te_float32 f32) {
    TE_ALIASED_FLT(32) ai32; ai32.flt = f32;
    return  (ai32.bin & 0x7F800000) == 0x7F800000 &&
            (ai32.bin & 0x007FFFFF) != 0;
}

te_inline int te_signbit_32(te_float32 f32) {
    TE_ALIASED_FLT(32) ai32; ai32.flt = f32;
    return (ai32.bin & 0x80000000) != 0;
}

te_inline int te_is_pzero_32(te_float32 f32) {
    return f32 == (te_float32)0 && !te_signbit_32(f32);
}
te_inline int te_is_nzero_32(te_float32 f32) {
    return f32 == (te_float32)0 && te_signbit_32(f32);
}

#define TE_FLT_EPSILON      1.192092896e-07F        // smallest such that 1.0+FLT_EPSILON != 1.0
te_inline int te_nbw_32(te_float32 actual, te_float32 expected) {
    te_float32 delta;
    te_float32 threshold;
    /* delta = |actual-expected| */
    delta = actual - expected;
    if (delta < 0.0)
        delta = -delta;
    /* threshold = |epsilon*expected| */
    threshold = (te_float32)(2.0 * TE_FLT_EPSILON * expected);
    if (threshold < 0.0)
        threshold = -threshold;

    return delta < threshold;
}

te_inline int te_is_inf_64(te_float64 f64) {
    TE_ALIASED_FLT(64) ai64; ai64.flt = f64;
    return  (ai64.bin & 0x7FF0000000000000) == 0x7FF0000000000000 &&
            (ai64.bin & 0x000FFFFFFFFFFFFF) == 0;
}

te_inline int te_is_qnan_64(te_float64 f64) {
    TE_ALIASED_FLT(64) ai64; ai64.flt = f64;
    return  (ai64.bin & 0x7FF0000000000000) == 0x7FF0000000000000 &&
            (ai64.bin & 0x0008000000000000) == 0x0008000000000000;
}
te_inline int te_is_snan_64(te_float64 f64) {
    TE_ALIASED_FLT(64) ai64; ai64.flt = f64;
    return  (ai64.bin & 0x7FF0000000000000) == 0x7FF0000000000000 &&
            (ai64.bin & 0x0008000000000000) == 0 &&
            (ai64.bin & 0x0007FFFFFFFFFFFF) != 0;
}
te_inline int te_is_nan_64(te_float64 f64) {
    TE_ALIASED_FLT(64) ai64; ai64.flt = f64;
    return  (ai64.bin & 0x7FF0000000000000) == 0x7FF0000000000000 &&
            (ai64.bin & 0x000FFFFFFFFFFFFF) != 0;
}

te_inline int te_signbit_64(te_float64 f64) {
    TE_ALIASED_FLT(64) ai64; ai64.flt = f64;
    return (ai64.bin & 0x8000000000000000) != 0;
}

te_inline int te_is_pzero_64(te_float64 f64) {
    return f64 == (te_float64)0 && !te_signbit_64(f64);
}
te_inline int te_is_nzero_64(te_float64 f64) {
    return f64 == (te_float64)0 && te_signbit_64(f64);
}
#define TE_DBL_EPSILON      2.2204460492503131e-016 // smallest such that 1.0+DBL_EPSILON != 1.0
te_inline int te_nbw_64(te_float64 actual, te_float64 expected) {
    te_float64 delta;
    te_float64 threshold;
    /* delta = |actual-expected| */
    delta = actual - expected;
    if (delta < 0.0)
        delta = -delta;
    /* threshold = |epsilon*expected| */
    threshold = (te_float64)(2.0 * TE_DBL_EPSILON * expected);
    if (threshold < 0.0) 
        threshold = -threshold; 

    return delta < threshold;
}

#ifdef __cplusplus
}
#endif

#endif /* TE_CONFIG_H_ */
