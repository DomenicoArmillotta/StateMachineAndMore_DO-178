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

#ifndef _SMU_PROXY_H_
#define _SMU_PROXY_H_

#ifdef __cplusplus
extern "C" {
#endif

/* Ensure simualation DLL compatibility with SCADE binaries */
#if defined(_MSC_VER) || defined(__GNUC__)
#pragma pack(push, 8) 
#endif

/* Runtime version */
typedef enum SimRtVersion_t {
    Srtv43,
    Srtv50,
    Srtv51,
    Srtv6,
    Srtv601,
    Srtv61,
    Srtv612,
    Srtv62,
    _SrtvLast	/* bounds checking */
} SimRtVersion;

typedef struct SimSimulator_t {
  
    /* Control */
    void (*m_pfnRefresh)(struct SimSimulator_t*);
    void (*m_pfnAcquireValueMutex)(struct SimSimulator_t*);
    void (*m_pfnReleaseValueMutex)(struct SimSimulator_t*);
} SimSimulator;

/* To be provided by wrapping code (x_interface.c): */
extern int SimInit();
extern int SimReset();
extern int SimCustomInit();
extern int SimStep();
extern int SimStop();

extern const int rt_version;

/* Back to whatever the previous packing mode was */
#if defined(_MSC_VER) || defined(__GNUC__)
#pragma pack(pop)
#endif

#ifdef __cplusplus
} /* "C" */
#endif

#endif /* _SMU_PROXY_H_ */

