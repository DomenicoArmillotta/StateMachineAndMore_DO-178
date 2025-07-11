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

#ifndef SMUUTIL_H__
#define SMUUTIL_H__

#ifdef __cplusplus
extern "C" {
#endif

extern int FileExists(const char *strFile);

enum {
    EFN_RESOLVE_DATE_TIME = (1 << 0),
    EFN_RESOLVE_SCADE =     (1 << 1)
};
extern int ExpandFileName(char *strDstPth, unsigned nDstSize, const char *strSrcPth, unsigned nFlags);

#define ExpandScenarioFileName(strDstPth, nDstSize, strSrcPth) ExpandFileName((strDstPth), (nDstSize), (strSrcPth), EFN_RESOLVE_DATE_TIME)
#define GetScadeBinDir(strDstPth, nDstSize) ExpandFileName((strDstPth), (nDstSize), "$(SCADE)", EFN_RESOLVE_SCADE)

#ifdef __cplusplus
}
#endif

#endif /* SMUUTIL_H__ */
