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

#ifndef _SMU_MAPPING_H_
#define _SMU_MAPPING_H_

#ifdef __cplusplus
extern "C" {
#endif

#include "SmuTypes.h"

/* Ensure simualation DLL compatibility with SCADE binaries */
#if defined(_MSC_VER) || defined(__GNUC__)
#pragma pack(push, 8) 
#endif

typedef int (*PFN_IS_ACTIVE)(void* pHandle);

typedef enum EntryKind_t {
    MAP_SENSOR,

    MAP_ROOT,
    MAP_INSTANCE,
    MAP_EXPANDED,

    MAP_INPUT,
    MAP_OUTPUT,
    MAP_LOCAL,
    MAP_PROBE,
    MAP_ASSUME,
    MAP_GUARANTEE,
    MAP_SIGNAL,

    MAP_WHEN,
    MAP_MATCH,
    MAP_ACTION,
    MAP_IF,

    MAP_AUTOMATON,
    MAP_STATE,
    MAP_FORK,
    MAP_STRONG_TRANSITION,
    MAP_WEAK_TRANSITION,

    MAP_FIELD,
    MAP_ARRAY,

    MAP_ANY
} EntryKind;

typedef struct MappingIterator_t {
    const char* kind;
    size_t scadeSize;
    size_t targetSize;
    const struct MappingIterator_t* parent;
} MappingIterator;

struct MappingScope_t;

struct MappingEntry_t {
    EntryKind nKind;
    const char* name;
    const struct MappingIterator_t* iterator;
    size_t size;
    size_t offset;
    const SimTypeUtils* pTypeUtils;
    const struct MappingEntry_t* pClockEntry;
    PFN_IS_ACTIVE pfnIsActive;
    const struct MappingScope_t* pScope;
    int bVisible;
    size_t nIndex;
};
typedef struct MappingEntry_t MappingEntry;

typedef struct MappingScope_t {
    const char* name;
    const MappingEntry* entries;
    size_t nbOfEntries;
} MappingScope;

int GetObservableFromPath(const char* pPath, const MappingScope* pTop,
    void** pRetHandle, const MappingEntry** pRetMappingEntry,
    void** pRetClockHandle, PFN_IS_ACTIVE *pRetIsActiveFct, const MappingEntry** pRetClockMappingEntry,
    void** pRetParentHandle, const MappingEntry** pRetParentMappingEntry, int bAcceptSize0Entry, int bDisplay);

int GetObservableFromHandle(void* pHandle, size_t nSize, const MappingScope* pTop,
    const MappingEntry** pRetMappingEntry,
    void** pRetClockHandle, PFN_IS_ACTIVE *pRetIsActiveFct, const MappingEntry** pRetClockMappingEntry,
    PFN_STR_APPEND pfnStrAppend, void *pData,
    void** pRetParentHandle, const MappingEntry** pRetParentMappingEntry);

const MappingEntry* FindEntry(const MappingScope* pScope,
                               const char* pPath, size_t nTokenLen);

extern const MappingScope* pTop;

extern int CompareEntriesByIndex(const void* arg1, const void* arg2);

/* Back to whatever the previous packing mode was */
#if defined(_MSC_VER) || defined(__GNUC__)
#pragma pack(pop)
#endif

#ifdef __cplusplus
} /* "C" */
#endif

#endif /* _SMU_MAPPING_H_ */
