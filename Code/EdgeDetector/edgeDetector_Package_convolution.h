/* $********** SCADE Suite KCG 32-bit 6.6.4 (build i3) **********
** Command: kcg664.exe -config C:/Users/mbda/Documents/GitHub/SCADE_project/prova_1/Prova_1/KCG/config.txt
** Generation date: 2025-07-18T14:22:15
*************************************************************$ */
#ifndef KCG_edgeDetector_Package_convolution_H_
#define KCG_edgeDetector_Package_convolution_H_

#include "kcg_types.h"
#include "MatAdd_vect_int8_30_30.h"
#include "matrixAbs_Package_convolution_30.h"
#include "conv32_32_Package_convolution.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  array_int8_30_30 /* Output_orizzontale/, _L1/ */ Output_orizzontale;
  array_int8_30_30 /* Output_verticale/, _L7/ */ Output_verticale;
  array_int8_30_30 /* Output_abs_verticale/, _L10/ */ Output_abs_verticale;
  array_int8_30_30 /* Output_abs_orizzontale/, _L12/ */ Output_abs_orizzontale;
  array_int8_30_30 /* _L13/, edge_map/ */ edge_map;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* -------------------- no sub nodes' contexts  -------------------- */
  /* ----------------- no clocks of observable data ------------------ */
} outC_edgeDetector_Package_convolution;

/* ===========  node initialization and cycle functions  =========== */
/* Package_convolution::edgeDetector/ */
extern void edgeDetector_Package_convolution(
  outC_edgeDetector_Package_convolution *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void edgeDetector_reset_Package_convolution(
  outC_edgeDetector_Package_convolution *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void edgeDetector_init_Package_convolution(
  outC_edgeDetector_Package_convolution *outC);
#endif /* KCG_USER_DEFINED_INIT */



#endif /* KCG_edgeDetector_Package_convolution_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6.4 (build i3) **********
** edgeDetector_Package_convolution.h
** Generation date: 2025-07-18T14:22:15
*************************************************************$ */

