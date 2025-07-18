/* $********** SCADE Suite KCG 32-bit 6.6.4 (build i3) **********
** Command: kcg664.exe -config C:/Users/mbda/Documents/GitHub/SCADE_project/prova_1/Prova_1/KCG/config.txt
** Generation date: 2025-07-18T14:22:15
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "edgeDetector_Package_convolution.h"

/* Package_convolution::edgeDetector/ */
void edgeDetector_Package_convolution(
  outC_edgeDetector_Package_convolution *outC)
{
  array_int8_3_3 tmp;
  array_int8_3_3 tmp1;
  /* _L5/ */
  array_int8_32_32 L5;

  L5[30][0] = kcg_lit_int8(0);
  L5[30][1] = kcg_lit_int8(0);
  L5[30][2] = kcg_lit_int8(0);
  L5[30][3] = kcg_lit_int8(0);
  L5[30][4] = kcg_lit_int8(0);
  L5[30][5] = kcg_lit_int8(0);
  L5[30][6] = kcg_lit_int8(0);
  L5[30][7] = kcg_lit_int8(0);
  L5[30][8] = kcg_lit_int8(0);
  L5[30][9] = kcg_lit_int8(0);
  L5[30][10] = kcg_lit_int8(0);
  L5[30][11] = kcg_lit_int8(0);
  L5[30][12] = kcg_lit_int8(0);
  L5[30][13] = kcg_lit_int8(0);
  L5[30][14] = kcg_lit_int8(0);
  L5[30][15] = kcg_lit_int8(0);
  L5[30][16] = kcg_lit_int8(0);
  L5[30][17] = kcg_lit_int8(0);
  L5[30][18] = kcg_lit_int8(0);
  L5[30][19] = kcg_lit_int8(0);
  L5[30][20] = kcg_lit_int8(0);
  L5[30][21] = kcg_lit_int8(0);
  L5[30][22] = kcg_lit_int8(0);
  L5[30][23] = kcg_lit_int8(0);
  L5[30][24] = kcg_lit_int8(0);
  L5[30][25] = kcg_lit_int8(0);
  L5[30][26] = kcg_lit_int8(0);
  L5[30][27] = kcg_lit_int8(0);
  L5[30][28] = kcg_lit_int8(0);
  L5[30][29] = kcg_lit_int8(0);
  L5[30][30] = kcg_lit_int8(0);
  L5[30][31] = kcg_lit_int8(0);
  tmp[0][0] = kcg_lit_int8(-1);
  tmp[0][1] = kcg_lit_int8(0);
  tmp[0][2] = kcg_lit_int8(1);
  tmp[1][0] = kcg_lit_int8(-2);
  tmp[1][1] = kcg_lit_int8(0);
  tmp[1][2] = kcg_lit_int8(2);
  tmp1[0][0] = kcg_lit_int8(1);
  tmp1[0][1] = kcg_lit_int8(2);
  tmp1[0][2] = kcg_lit_int8(1);
  tmp1[1][0] = kcg_lit_int8(0);
  tmp1[1][1] = kcg_lit_int8(0);
  tmp1[1][2] = kcg_lit_int8(0);
  tmp1[2][0] = kcg_lit_int8(-1);
  tmp1[2][1] = kcg_lit_int8(-2);
  tmp1[2][2] = kcg_lit_int8(-1);
  kcg_copy_array_int8_3(&tmp[2], &tmp[0]);
  kcg_copy_array_int8_32(&L5[31], &L5[30]);
  L5[27][0] = kcg_lit_int8(0);
  L5[27][1] = kcg_lit_int8(0);
  L5[27][2] = kcg_lit_int8(0);
  L5[27][3] = kcg_lit_int8(0);
  L5[27][4] = kcg_lit_int8(0);
  L5[27][5] = kcg_lit_int8(0);
  L5[27][6] = kcg_lit_int8(0);
  L5[27][7] = kcg_lit_int8(0);
  L5[27][8] = kcg_lit_int8(0);
  L5[27][9] = kcg_lit_int8(0);
  L5[27][10] = kcg_lit_int8(1);
  L5[27][11] = kcg_lit_int8(1);
  L5[27][12] = kcg_lit_int8(1);
  L5[27][13] = kcg_lit_int8(1);
  L5[27][14] = kcg_lit_int8(0);
  L5[27][15] = kcg_lit_int8(0);
  L5[27][16] = kcg_lit_int8(0);
  L5[27][17] = kcg_lit_int8(0);
  L5[27][18] = kcg_lit_int8(0);
  L5[27][19] = kcg_lit_int8(0);
  L5[27][20] = kcg_lit_int8(0);
  L5[27][21] = kcg_lit_int8(0);
  L5[27][22] = kcg_lit_int8(0);
  L5[27][23] = kcg_lit_int8(0);
  L5[27][24] = kcg_lit_int8(0);
  L5[27][25] = kcg_lit_int8(0);
  L5[27][26] = kcg_lit_int8(0);
  L5[27][27] = kcg_lit_int8(0);
  L5[27][28] = kcg_lit_int8(0);
  L5[27][29] = kcg_lit_int8(0);
  L5[27][30] = kcg_lit_int8(0);
  L5[27][31] = kcg_lit_int8(0);
  kcg_copy_array_int8_32(&L5[28], &L5[27]);
  L5[25][0] = kcg_lit_int8(0);
  L5[25][1] = kcg_lit_int8(0);
  L5[25][2] = kcg_lit_int8(0);
  L5[25][3] = kcg_lit_int8(0);
  L5[25][4] = kcg_lit_int8(0);
  L5[25][5] = kcg_lit_int8(0);
  L5[25][6] = kcg_lit_int8(0);
  L5[25][7] = kcg_lit_int8(0);
  L5[25][8] = kcg_lit_int8(0);
  L5[25][9] = kcg_lit_int8(0);
  L5[25][10] = kcg_lit_int8(1);
  L5[25][11] = kcg_lit_int8(1);
  L5[25][12] = kcg_lit_int8(1);
  L5[25][13] = kcg_lit_int8(1);
  L5[25][14] = kcg_lit_int8(0);
  L5[25][15] = kcg_lit_int8(0);
  L5[25][16] = kcg_lit_int8(0);
  L5[25][17] = kcg_lit_int8(0);
  L5[25][18] = kcg_lit_int8(0);
  L5[25][19] = kcg_lit_int8(0);
  L5[25][20] = kcg_lit_int8(0);
  L5[25][21] = kcg_lit_int8(0);
  L5[25][22] = kcg_lit_int8(0);
  L5[25][23] = kcg_lit_int8(0);
  L5[25][24] = kcg_lit_int8(0);
  L5[25][25] = kcg_lit_int8(0);
  L5[25][26] = kcg_lit_int8(0);
  L5[25][27] = kcg_lit_int8(0);
  L5[25][28] = kcg_lit_int8(0);
  L5[25][29] = kcg_lit_int8(0);
  L5[25][30] = kcg_lit_int8(0);
  L5[25][31] = kcg_lit_int8(0);
  kcg_copy_array_int8_32(&L5[26], &L5[25]);
  L5[23][0] = kcg_lit_int8(0);
  L5[23][1] = kcg_lit_int8(0);
  L5[23][2] = kcg_lit_int8(0);
  L5[23][3] = kcg_lit_int8(0);
  L5[23][4] = kcg_lit_int8(0);
  L5[23][5] = kcg_lit_int8(0);
  L5[23][6] = kcg_lit_int8(0);
  L5[23][7] = kcg_lit_int8(0);
  L5[23][8] = kcg_lit_int8(0);
  L5[23][9] = kcg_lit_int8(0);
  L5[23][10] = kcg_lit_int8(1);
  L5[23][11] = kcg_lit_int8(1);
  L5[23][12] = kcg_lit_int8(1);
  L5[23][13] = kcg_lit_int8(1);
  L5[23][14] = kcg_lit_int8(1);
  L5[23][15] = kcg_lit_int8(0);
  L5[23][16] = kcg_lit_int8(0);
  L5[23][17] = kcg_lit_int8(0);
  L5[23][18] = kcg_lit_int8(0);
  L5[23][19] = kcg_lit_int8(0);
  L5[23][20] = kcg_lit_int8(0);
  L5[23][21] = kcg_lit_int8(0);
  L5[23][22] = kcg_lit_int8(0);
  L5[23][23] = kcg_lit_int8(0);
  L5[23][24] = kcg_lit_int8(0);
  L5[23][25] = kcg_lit_int8(0);
  L5[23][26] = kcg_lit_int8(0);
  L5[23][27] = kcg_lit_int8(0);
  L5[23][28] = kcg_lit_int8(0);
  L5[23][29] = kcg_lit_int8(0);
  L5[23][30] = kcg_lit_int8(0);
  L5[23][31] = kcg_lit_int8(0);
  kcg_copy_array_int8_32(&L5[24], &L5[23]);
  L5[19][0] = kcg_lit_int8(0);
  L5[19][1] = kcg_lit_int8(0);
  L5[19][2] = kcg_lit_int8(0);
  L5[19][3] = kcg_lit_int8(0);
  L5[19][4] = kcg_lit_int8(0);
  L5[19][5] = kcg_lit_int8(0);
  L5[19][6] = kcg_lit_int8(0);
  L5[19][7] = kcg_lit_int8(0);
  L5[19][8] = kcg_lit_int8(0);
  L5[19][9] = kcg_lit_int8(0);
  L5[19][10] = kcg_lit_int8(0);
  L5[19][11] = kcg_lit_int8(0);
  L5[19][12] = kcg_lit_int8(0);
  L5[19][13] = kcg_lit_int8(1);
  L5[19][14] = kcg_lit_int8(1);
  L5[19][15] = kcg_lit_int8(1);
  L5[19][16] = kcg_lit_int8(1);
  L5[19][17] = kcg_lit_int8(0);
  L5[19][18] = kcg_lit_int8(0);
  L5[19][19] = kcg_lit_int8(0);
  L5[19][20] = kcg_lit_int8(0);
  L5[19][21] = kcg_lit_int8(0);
  L5[19][22] = kcg_lit_int8(0);
  L5[19][23] = kcg_lit_int8(0);
  L5[19][24] = kcg_lit_int8(0);
  L5[19][25] = kcg_lit_int8(0);
  L5[19][26] = kcg_lit_int8(0);
  L5[19][27] = kcg_lit_int8(0);
  L5[19][28] = kcg_lit_int8(0);
  L5[19][29] = kcg_lit_int8(0);
  L5[19][30] = kcg_lit_int8(0);
  L5[19][31] = kcg_lit_int8(0);
  kcg_copy_array_int8_32(&L5[20], &L5[19]);
  L5[14][0] = kcg_lit_int8(0);
  L5[14][1] = kcg_lit_int8(0);
  L5[14][2] = kcg_lit_int8(0);
  L5[14][3] = kcg_lit_int8(0);
  L5[14][4] = kcg_lit_int8(0);
  L5[14][5] = kcg_lit_int8(0);
  L5[14][6] = kcg_lit_int8(0);
  L5[14][7] = kcg_lit_int8(0);
  L5[14][8] = kcg_lit_int8(0);
  L5[14][9] = kcg_lit_int8(0);
  L5[14][10] = kcg_lit_int8(0);
  L5[14][11] = kcg_lit_int8(0);
  L5[14][12] = kcg_lit_int8(0);
  L5[14][13] = kcg_lit_int8(0);
  L5[14][14] = kcg_lit_int8(0);
  L5[14][15] = kcg_lit_int8(0);
  L5[14][16] = kcg_lit_int8(1);
  L5[14][17] = kcg_lit_int8(1);
  L5[14][18] = kcg_lit_int8(1);
  L5[14][19] = kcg_lit_int8(0);
  L5[14][20] = kcg_lit_int8(0);
  L5[14][21] = kcg_lit_int8(0);
  L5[14][22] = kcg_lit_int8(0);
  L5[14][23] = kcg_lit_int8(0);
  L5[14][24] = kcg_lit_int8(0);
  L5[14][25] = kcg_lit_int8(0);
  L5[14][26] = kcg_lit_int8(0);
  L5[14][27] = kcg_lit_int8(0);
  L5[14][28] = kcg_lit_int8(0);
  L5[14][29] = kcg_lit_int8(0);
  L5[14][30] = kcg_lit_int8(0);
  L5[14][31] = kcg_lit_int8(0);
  kcg_copy_array_int8_32(&L5[15], &L5[14]);
  L5[11][0] = kcg_lit_int8(0);
  L5[11][1] = kcg_lit_int8(0);
  L5[11][2] = kcg_lit_int8(0);
  L5[11][3] = kcg_lit_int8(0);
  L5[11][4] = kcg_lit_int8(0);
  L5[11][5] = kcg_lit_int8(0);
  L5[11][6] = kcg_lit_int8(0);
  L5[11][7] = kcg_lit_int8(0);
  L5[11][8] = kcg_lit_int8(0);
  L5[11][9] = kcg_lit_int8(0);
  L5[11][10] = kcg_lit_int8(0);
  L5[11][11] = kcg_lit_int8(0);
  L5[11][12] = kcg_lit_int8(0);
  L5[11][13] = kcg_lit_int8(0);
  L5[11][14] = kcg_lit_int8(0);
  L5[11][15] = kcg_lit_int8(0);
  L5[11][16] = kcg_lit_int8(0);
  L5[11][17] = kcg_lit_int8(1);
  L5[11][18] = kcg_lit_int8(1);
  L5[11][19] = kcg_lit_int8(1);
  L5[11][20] = kcg_lit_int8(1);
  L5[11][21] = kcg_lit_int8(1);
  L5[11][22] = kcg_lit_int8(0);
  L5[11][23] = kcg_lit_int8(0);
  L5[11][24] = kcg_lit_int8(0);
  L5[11][25] = kcg_lit_int8(0);
  L5[11][26] = kcg_lit_int8(0);
  L5[11][27] = kcg_lit_int8(0);
  L5[11][28] = kcg_lit_int8(0);
  L5[11][29] = kcg_lit_int8(0);
  L5[11][30] = kcg_lit_int8(0);
  L5[11][31] = kcg_lit_int8(0);
  kcg_copy_array_int8_32(&L5[12], &L5[11]);
  L5[7][0] = kcg_lit_int8(0);
  L5[7][1] = kcg_lit_int8(0);
  L5[7][2] = kcg_lit_int8(0);
  L5[7][3] = kcg_lit_int8(0);
  L5[7][4] = kcg_lit_int8(0);
  L5[7][5] = kcg_lit_int8(0);
  L5[7][6] = kcg_lit_int8(0);
  L5[7][7] = kcg_lit_int8(0);
  L5[7][8] = kcg_lit_int8(0);
  L5[7][9] = kcg_lit_int8(0);
  L5[7][10] = kcg_lit_int8(0);
  L5[7][11] = kcg_lit_int8(0);
  L5[7][12] = kcg_lit_int8(0);
  L5[7][13] = kcg_lit_int8(0);
  L5[7][14] = kcg_lit_int8(0);
  L5[7][15] = kcg_lit_int8(0);
  L5[7][16] = kcg_lit_int8(0);
  L5[7][17] = kcg_lit_int8(0);
  L5[7][18] = kcg_lit_int8(0);
  L5[7][19] = kcg_lit_int8(0);
  L5[7][20] = kcg_lit_int8(0);
  L5[7][21] = kcg_lit_int8(1);
  L5[7][22] = kcg_lit_int8(1);
  L5[7][23] = kcg_lit_int8(1);
  L5[7][24] = kcg_lit_int8(0);
  L5[7][25] = kcg_lit_int8(0);
  L5[7][26] = kcg_lit_int8(0);
  L5[7][27] = kcg_lit_int8(0);
  L5[7][28] = kcg_lit_int8(0);
  L5[7][29] = kcg_lit_int8(0);
  L5[7][30] = kcg_lit_int8(0);
  L5[7][31] = kcg_lit_int8(0);
  kcg_copy_array_int8_32(&L5[8], &L5[7]);
  L5[5][0] = kcg_lit_int8(0);
  L5[5][1] = kcg_lit_int8(0);
  L5[5][2] = kcg_lit_int8(0);
  L5[5][3] = kcg_lit_int8(0);
  L5[5][4] = kcg_lit_int8(0);
  L5[5][5] = kcg_lit_int8(0);
  L5[5][6] = kcg_lit_int8(0);
  L5[5][7] = kcg_lit_int8(0);
  L5[5][8] = kcg_lit_int8(0);
  L5[5][9] = kcg_lit_int8(0);
  L5[5][10] = kcg_lit_int8(0);
  L5[5][11] = kcg_lit_int8(0);
  L5[5][12] = kcg_lit_int8(0);
  L5[5][13] = kcg_lit_int8(0);
  L5[5][14] = kcg_lit_int8(0);
  L5[5][15] = kcg_lit_int8(0);
  L5[5][16] = kcg_lit_int8(0);
  L5[5][17] = kcg_lit_int8(0);
  L5[5][18] = kcg_lit_int8(0);
  L5[5][19] = kcg_lit_int8(0);
  L5[5][20] = kcg_lit_int8(0);
  L5[5][21] = kcg_lit_int8(0);
  L5[5][22] = kcg_lit_int8(0);
  L5[5][23] = kcg_lit_int8(0);
  L5[5][24] = kcg_lit_int8(0);
  L5[5][25] = kcg_lit_int8(0);
  L5[5][26] = kcg_lit_int8(0);
  L5[5][27] = kcg_lit_int8(0);
  L5[5][28] = kcg_lit_int8(0);
  L5[5][29] = kcg_lit_int8(0);
  L5[5][30] = kcg_lit_int8(0);
  L5[5][31] = kcg_lit_int8(0);
  L5[6][0] = kcg_lit_int8(0);
  L5[6][1] = kcg_lit_int8(0);
  L5[6][2] = kcg_lit_int8(0);
  L5[6][3] = kcg_lit_int8(0);
  L5[6][4] = kcg_lit_int8(0);
  L5[6][5] = kcg_lit_int8(0);
  L5[6][6] = kcg_lit_int8(0);
  L5[6][7] = kcg_lit_int8(0);
  L5[6][8] = kcg_lit_int8(0);
  L5[6][9] = kcg_lit_int8(0);
  L5[6][10] = kcg_lit_int8(0);
  L5[6][11] = kcg_lit_int8(0);
  L5[6][12] = kcg_lit_int8(0);
  L5[6][13] = kcg_lit_int8(0);
  L5[6][14] = kcg_lit_int8(0);
  L5[6][15] = kcg_lit_int8(0);
  L5[6][16] = kcg_lit_int8(0);
  L5[6][17] = kcg_lit_int8(0);
  L5[6][18] = kcg_lit_int8(0);
  L5[6][19] = kcg_lit_int8(0);
  L5[6][20] = kcg_lit_int8(0);
  L5[6][21] = kcg_lit_int8(0);
  L5[6][22] = kcg_lit_int8(1);
  L5[6][23] = kcg_lit_int8(1);
  L5[6][24] = kcg_lit_int8(0);
  L5[6][25] = kcg_lit_int8(0);
  L5[6][26] = kcg_lit_int8(0);
  L5[6][27] = kcg_lit_int8(0);
  L5[6][28] = kcg_lit_int8(0);
  L5[6][29] = kcg_lit_int8(0);
  L5[6][30] = kcg_lit_int8(0);
  L5[6][31] = kcg_lit_int8(0);
  L5[9][0] = kcg_lit_int8(0);
  L5[9][1] = kcg_lit_int8(0);
  L5[9][2] = kcg_lit_int8(0);
  L5[9][3] = kcg_lit_int8(0);
  L5[9][4] = kcg_lit_int8(0);
  L5[9][5] = kcg_lit_int8(0);
  L5[9][6] = kcg_lit_int8(0);
  L5[9][7] = kcg_lit_int8(0);
  L5[9][8] = kcg_lit_int8(0);
  L5[9][9] = kcg_lit_int8(0);
  L5[9][10] = kcg_lit_int8(0);
  L5[9][11] = kcg_lit_int8(0);
  L5[9][12] = kcg_lit_int8(0);
  L5[9][13] = kcg_lit_int8(0);
  L5[9][14] = kcg_lit_int8(0);
  L5[9][15] = kcg_lit_int8(0);
  L5[9][16] = kcg_lit_int8(0);
  L5[9][17] = kcg_lit_int8(0);
  L5[9][18] = kcg_lit_int8(0);
  L5[9][19] = kcg_lit_int8(1);
  L5[9][20] = kcg_lit_int8(1);
  L5[9][21] = kcg_lit_int8(1);
  L5[9][22] = kcg_lit_int8(1);
  L5[9][23] = kcg_lit_int8(0);
  L5[9][24] = kcg_lit_int8(0);
  L5[9][25] = kcg_lit_int8(0);
  L5[9][26] = kcg_lit_int8(0);
  L5[9][27] = kcg_lit_int8(0);
  L5[9][28] = kcg_lit_int8(0);
  L5[9][29] = kcg_lit_int8(0);
  L5[9][30] = kcg_lit_int8(0);
  L5[9][31] = kcg_lit_int8(0);
  L5[10][0] = kcg_lit_int8(0);
  L5[10][1] = kcg_lit_int8(0);
  L5[10][2] = kcg_lit_int8(0);
  L5[10][3] = kcg_lit_int8(0);
  L5[10][4] = kcg_lit_int8(0);
  L5[10][5] = kcg_lit_int8(0);
  L5[10][6] = kcg_lit_int8(0);
  L5[10][7] = kcg_lit_int8(0);
  L5[10][8] = kcg_lit_int8(0);
  L5[10][9] = kcg_lit_int8(0);
  L5[10][10] = kcg_lit_int8(0);
  L5[10][11] = kcg_lit_int8(0);
  L5[10][12] = kcg_lit_int8(0);
  L5[10][13] = kcg_lit_int8(0);
  L5[10][14] = kcg_lit_int8(0);
  L5[10][15] = kcg_lit_int8(0);
  L5[10][16] = kcg_lit_int8(0);
  L5[10][17] = kcg_lit_int8(0);
  L5[10][18] = kcg_lit_int8(1);
  L5[10][19] = kcg_lit_int8(1);
  L5[10][20] = kcg_lit_int8(1);
  L5[10][21] = kcg_lit_int8(1);
  L5[10][22] = kcg_lit_int8(0);
  L5[10][23] = kcg_lit_int8(0);
  L5[10][24] = kcg_lit_int8(0);
  L5[10][25] = kcg_lit_int8(0);
  L5[10][26] = kcg_lit_int8(0);
  L5[10][27] = kcg_lit_int8(0);
  L5[10][28] = kcg_lit_int8(0);
  L5[10][29] = kcg_lit_int8(0);
  L5[10][30] = kcg_lit_int8(0);
  L5[10][31] = kcg_lit_int8(0);
  L5[13][0] = kcg_lit_int8(0);
  L5[13][1] = kcg_lit_int8(0);
  L5[13][2] = kcg_lit_int8(0);
  L5[13][3] = kcg_lit_int8(0);
  L5[13][4] = kcg_lit_int8(0);
  L5[13][5] = kcg_lit_int8(0);
  L5[13][6] = kcg_lit_int8(0);
  L5[13][7] = kcg_lit_int8(0);
  L5[13][8] = kcg_lit_int8(0);
  L5[13][9] = kcg_lit_int8(0);
  L5[13][10] = kcg_lit_int8(0);
  L5[13][11] = kcg_lit_int8(0);
  L5[13][12] = kcg_lit_int8(0);
  L5[13][13] = kcg_lit_int8(0);
  L5[13][14] = kcg_lit_int8(0);
  L5[13][15] = kcg_lit_int8(0);
  L5[13][16] = kcg_lit_int8(0);
  L5[13][17] = kcg_lit_int8(1);
  L5[13][18] = kcg_lit_int8(1);
  L5[13][19] = kcg_lit_int8(1);
  L5[13][20] = kcg_lit_int8(1);
  L5[13][21] = kcg_lit_int8(0);
  L5[13][22] = kcg_lit_int8(0);
  L5[13][23] = kcg_lit_int8(0);
  L5[13][24] = kcg_lit_int8(0);
  L5[13][25] = kcg_lit_int8(0);
  L5[13][26] = kcg_lit_int8(0);
  L5[13][27] = kcg_lit_int8(0);
  L5[13][28] = kcg_lit_int8(0);
  L5[13][29] = kcg_lit_int8(0);
  L5[13][30] = kcg_lit_int8(0);
  L5[13][31] = kcg_lit_int8(0);
  L5[16][0] = kcg_lit_int8(0);
  L5[16][1] = kcg_lit_int8(0);
  L5[16][2] = kcg_lit_int8(0);
  L5[16][3] = kcg_lit_int8(0);
  L5[16][4] = kcg_lit_int8(0);
  L5[16][5] = kcg_lit_int8(0);
  L5[16][6] = kcg_lit_int8(0);
  L5[16][7] = kcg_lit_int8(0);
  L5[16][8] = kcg_lit_int8(0);
  L5[16][9] = kcg_lit_int8(0);
  L5[16][10] = kcg_lit_int8(0);
  L5[16][11] = kcg_lit_int8(0);
  L5[16][12] = kcg_lit_int8(0);
  L5[16][13] = kcg_lit_int8(0);
  L5[16][14] = kcg_lit_int8(0);
  L5[16][15] = kcg_lit_int8(1);
  L5[16][16] = kcg_lit_int8(1);
  L5[16][17] = kcg_lit_int8(1);
  L5[16][18] = kcg_lit_int8(0);
  L5[16][19] = kcg_lit_int8(0);
  L5[16][20] = kcg_lit_int8(0);
  L5[16][21] = kcg_lit_int8(0);
  L5[16][22] = kcg_lit_int8(0);
  L5[16][23] = kcg_lit_int8(0);
  L5[16][24] = kcg_lit_int8(0);
  L5[16][25] = kcg_lit_int8(0);
  L5[16][26] = kcg_lit_int8(0);
  L5[16][27] = kcg_lit_int8(0);
  L5[16][28] = kcg_lit_int8(0);
  L5[16][29] = kcg_lit_int8(0);
  L5[16][30] = kcg_lit_int8(0);
  L5[16][31] = kcg_lit_int8(0);
  L5[17][0] = kcg_lit_int8(0);
  L5[17][1] = kcg_lit_int8(0);
  L5[17][2] = kcg_lit_int8(0);
  L5[17][3] = kcg_lit_int8(0);
  L5[17][4] = kcg_lit_int8(0);
  L5[17][5] = kcg_lit_int8(0);
  L5[17][6] = kcg_lit_int8(0);
  L5[17][7] = kcg_lit_int8(0);
  L5[17][8] = kcg_lit_int8(0);
  L5[17][9] = kcg_lit_int8(0);
  L5[17][10] = kcg_lit_int8(0);
  L5[17][11] = kcg_lit_int8(0);
  L5[17][12] = kcg_lit_int8(0);
  L5[17][13] = kcg_lit_int8(0);
  L5[17][14] = kcg_lit_int8(1);
  L5[17][15] = kcg_lit_int8(1);
  L5[17][16] = kcg_lit_int8(1);
  L5[17][17] = kcg_lit_int8(1);
  L5[17][18] = kcg_lit_int8(0);
  L5[17][19] = kcg_lit_int8(0);
  L5[17][20] = kcg_lit_int8(0);
  L5[17][21] = kcg_lit_int8(0);
  L5[17][22] = kcg_lit_int8(0);
  L5[17][23] = kcg_lit_int8(0);
  L5[17][24] = kcg_lit_int8(0);
  L5[17][25] = kcg_lit_int8(0);
  L5[17][26] = kcg_lit_int8(0);
  L5[17][27] = kcg_lit_int8(0);
  L5[17][28] = kcg_lit_int8(0);
  L5[17][29] = kcg_lit_int8(0);
  L5[17][30] = kcg_lit_int8(0);
  L5[17][31] = kcg_lit_int8(0);
  L5[18][0] = kcg_lit_int8(0);
  L5[18][1] = kcg_lit_int8(0);
  L5[18][2] = kcg_lit_int8(0);
  L5[18][3] = kcg_lit_int8(0);
  L5[18][4] = kcg_lit_int8(0);
  L5[18][5] = kcg_lit_int8(0);
  L5[18][6] = kcg_lit_int8(0);
  L5[18][7] = kcg_lit_int8(0);
  L5[18][8] = kcg_lit_int8(0);
  L5[18][9] = kcg_lit_int8(0);
  L5[18][10] = kcg_lit_int8(0);
  L5[18][11] = kcg_lit_int8(0);
  L5[18][12] = kcg_lit_int8(0);
  L5[18][13] = kcg_lit_int8(1);
  L5[18][14] = kcg_lit_int8(1);
  L5[18][15] = kcg_lit_int8(1);
  L5[18][16] = kcg_lit_int8(1);
  L5[18][17] = kcg_lit_int8(0);
  L5[18][18] = kcg_lit_int8(0);
  L5[18][19] = kcg_lit_int8(0);
  L5[18][20] = kcg_lit_int8(0);
  L5[18][21] = kcg_lit_int8(0);
  L5[18][22] = kcg_lit_int8(0);
  L5[18][23] = kcg_lit_int8(0);
  L5[18][24] = kcg_lit_int8(0);
  L5[18][25] = kcg_lit_int8(0);
  L5[18][26] = kcg_lit_int8(0);
  L5[18][27] = kcg_lit_int8(0);
  L5[18][28] = kcg_lit_int8(0);
  L5[18][29] = kcg_lit_int8(0);
  L5[18][30] = kcg_lit_int8(0);
  L5[18][31] = kcg_lit_int8(0);
  L5[21][0] = kcg_lit_int8(0);
  L5[21][1] = kcg_lit_int8(0);
  L5[21][2] = kcg_lit_int8(0);
  L5[21][3] = kcg_lit_int8(0);
  L5[21][4] = kcg_lit_int8(0);
  L5[21][5] = kcg_lit_int8(0);
  L5[21][6] = kcg_lit_int8(0);
  L5[21][7] = kcg_lit_int8(0);
  L5[21][8] = kcg_lit_int8(0);
  L5[21][9] = kcg_lit_int8(0);
  L5[21][10] = kcg_lit_int8(0);
  L5[21][11] = kcg_lit_int8(1);
  L5[21][12] = kcg_lit_int8(1);
  L5[21][13] = kcg_lit_int8(1);
  L5[21][14] = kcg_lit_int8(1);
  L5[21][15] = kcg_lit_int8(1);
  L5[21][16] = kcg_lit_int8(0);
  L5[21][17] = kcg_lit_int8(0);
  L5[21][18] = kcg_lit_int8(0);
  L5[21][19] = kcg_lit_int8(0);
  L5[21][20] = kcg_lit_int8(0);
  L5[21][21] = kcg_lit_int8(0);
  L5[21][22] = kcg_lit_int8(0);
  L5[21][23] = kcg_lit_int8(0);
  L5[21][24] = kcg_lit_int8(0);
  L5[21][25] = kcg_lit_int8(0);
  L5[21][26] = kcg_lit_int8(0);
  L5[21][27] = kcg_lit_int8(0);
  L5[21][28] = kcg_lit_int8(0);
  L5[21][29] = kcg_lit_int8(0);
  L5[21][30] = kcg_lit_int8(0);
  L5[21][31] = kcg_lit_int8(0);
  L5[22][0] = kcg_lit_int8(0);
  L5[22][1] = kcg_lit_int8(0);
  L5[22][2] = kcg_lit_int8(0);
  L5[22][3] = kcg_lit_int8(0);
  L5[22][4] = kcg_lit_int8(0);
  L5[22][5] = kcg_lit_int8(0);
  L5[22][6] = kcg_lit_int8(0);
  L5[22][7] = kcg_lit_int8(0);
  L5[22][8] = kcg_lit_int8(0);
  L5[22][9] = kcg_lit_int8(0);
  L5[22][10] = kcg_lit_int8(0);
  L5[22][11] = kcg_lit_int8(1);
  L5[22][12] = kcg_lit_int8(1);
  L5[22][13] = kcg_lit_int8(1);
  L5[22][14] = kcg_lit_int8(1);
  L5[22][15] = kcg_lit_int8(0);
  L5[22][16] = kcg_lit_int8(0);
  L5[22][17] = kcg_lit_int8(0);
  L5[22][18] = kcg_lit_int8(0);
  L5[22][19] = kcg_lit_int8(0);
  L5[22][20] = kcg_lit_int8(0);
  L5[22][21] = kcg_lit_int8(0);
  L5[22][22] = kcg_lit_int8(0);
  L5[22][23] = kcg_lit_int8(0);
  L5[22][24] = kcg_lit_int8(0);
  L5[22][25] = kcg_lit_int8(0);
  L5[22][26] = kcg_lit_int8(0);
  L5[22][27] = kcg_lit_int8(0);
  L5[22][28] = kcg_lit_int8(0);
  L5[22][29] = kcg_lit_int8(0);
  L5[22][30] = kcg_lit_int8(0);
  L5[22][31] = kcg_lit_int8(0);
  kcg_copy_array_int8_32(&L5[29], &L5[5]);
  L5[3][0] = kcg_lit_int8(0);
  L5[3][1] = kcg_lit_int8(0);
  L5[3][2] = kcg_lit_int8(0);
  L5[3][3] = kcg_lit_int8(0);
  L5[3][4] = kcg_lit_int8(0);
  L5[3][5] = kcg_lit_int8(0);
  L5[3][6] = kcg_lit_int8(0);
  L5[3][7] = kcg_lit_int8(0);
  L5[3][8] = kcg_lit_int8(0);
  L5[3][9] = kcg_lit_int8(0);
  L5[3][10] = kcg_lit_int8(0);
  L5[3][11] = kcg_lit_int8(0);
  L5[3][12] = kcg_lit_int8(0);
  L5[3][13] = kcg_lit_int8(0);
  L5[3][14] = kcg_lit_int8(0);
  L5[3][15] = kcg_lit_int8(0);
  L5[3][16] = kcg_lit_int8(0);
  L5[3][17] = kcg_lit_int8(0);
  L5[3][18] = kcg_lit_int8(0);
  L5[3][19] = kcg_lit_int8(0);
  L5[3][20] = kcg_lit_int8(0);
  L5[3][21] = kcg_lit_int8(0);
  L5[3][22] = kcg_lit_int8(0);
  L5[3][23] = kcg_lit_int8(0);
  L5[3][24] = kcg_lit_int8(0);
  L5[3][25] = kcg_lit_int8(0);
  L5[3][26] = kcg_lit_int8(0);
  L5[3][27] = kcg_lit_int8(0);
  L5[3][28] = kcg_lit_int8(0);
  L5[3][29] = kcg_lit_int8(0);
  L5[3][30] = kcg_lit_int8(0);
  L5[3][31] = kcg_lit_int8(0);
  kcg_copy_array_int8_32(&L5[4], &L5[3]);
  L5[1][0] = kcg_lit_int8(0);
  L5[1][1] = kcg_lit_int8(0);
  L5[1][2] = kcg_lit_int8(0);
  L5[1][3] = kcg_lit_int8(0);
  L5[1][4] = kcg_lit_int8(0);
  L5[1][5] = kcg_lit_int8(0);
  L5[1][6] = kcg_lit_int8(0);
  L5[1][7] = kcg_lit_int8(0);
  L5[1][8] = kcg_lit_int8(0);
  L5[1][9] = kcg_lit_int8(0);
  L5[1][10] = kcg_lit_int8(0);
  L5[1][11] = kcg_lit_int8(0);
  L5[1][12] = kcg_lit_int8(0);
  L5[1][13] = kcg_lit_int8(0);
  L5[1][14] = kcg_lit_int8(0);
  L5[1][15] = kcg_lit_int8(0);
  L5[1][16] = kcg_lit_int8(0);
  L5[1][17] = kcg_lit_int8(0);
  L5[1][18] = kcg_lit_int8(0);
  L5[1][19] = kcg_lit_int8(0);
  L5[1][20] = kcg_lit_int8(0);
  L5[1][21] = kcg_lit_int8(0);
  L5[1][22] = kcg_lit_int8(0);
  L5[1][23] = kcg_lit_int8(0);
  L5[1][24] = kcg_lit_int8(0);
  L5[1][25] = kcg_lit_int8(0);
  L5[1][26] = kcg_lit_int8(0);
  L5[1][27] = kcg_lit_int8(0);
  L5[1][28] = kcg_lit_int8(0);
  L5[1][29] = kcg_lit_int8(0);
  L5[1][30] = kcg_lit_int8(0);
  L5[1][31] = kcg_lit_int8(0);
  kcg_copy_array_int8_32(&L5[2], &L5[1]);
  L5[0][0] = kcg_lit_int8(0);
  L5[0][1] = kcg_lit_int8(0);
  L5[0][2] = kcg_lit_int8(0);
  L5[0][3] = kcg_lit_int8(0);
  L5[0][4] = kcg_lit_int8(0);
  L5[0][5] = kcg_lit_int8(0);
  L5[0][6] = kcg_lit_int8(0);
  L5[0][7] = kcg_lit_int8(0);
  L5[0][8] = kcg_lit_int8(0);
  L5[0][9] = kcg_lit_int8(0);
  L5[0][10] = kcg_lit_int8(0);
  L5[0][11] = kcg_lit_int8(0);
  L5[0][12] = kcg_lit_int8(0);
  L5[0][13] = kcg_lit_int8(0);
  L5[0][14] = kcg_lit_int8(0);
  L5[0][15] = kcg_lit_int8(0);
  L5[0][16] = kcg_lit_int8(0);
  L5[0][17] = kcg_lit_int8(0);
  L5[0][18] = kcg_lit_int8(0);
  L5[0][19] = kcg_lit_int8(0);
  L5[0][20] = kcg_lit_int8(0);
  L5[0][21] = kcg_lit_int8(0);
  L5[0][22] = kcg_lit_int8(0);
  L5[0][23] = kcg_lit_int8(0);
  L5[0][24] = kcg_lit_int8(0);
  L5[0][25] = kcg_lit_int8(0);
  L5[0][26] = kcg_lit_int8(0);
  L5[0][27] = kcg_lit_int8(0);
  L5[0][28] = kcg_lit_int8(0);
  L5[0][29] = kcg_lit_int8(0);
  L5[0][30] = kcg_lit_int8(0);
  L5[0][31] = kcg_lit_int8(0);
  /* _L1=(Package_convolution::conv32_32#1)/ */
  conv32_32_Package_convolution(&L5, &tmp, &outC->Output_orizzontale);
  /* _L7=(Package_convolution::conv32_32#2)/ */
  conv32_32_Package_convolution(&L5, &tmp1, &outC->Output_verticale);
  /* _L10=(Package_convolution::matrixAbs#1)/ */
  matrixAbs_Package_convolution_30(
    &outC->Output_verticale,
    &outC->Output_abs_verticale);
  /* _L12=(Package_convolution::matrixAbs#3)/ */
  matrixAbs_Package_convolution_30(
    &outC->Output_orizzontale,
    &outC->Output_abs_orizzontale);
  /* _L13=(vect::MatAdd#1)/ */
  MatAdd_vect_int8_30_30(
    &outC->Output_abs_verticale,
    &outC->Output_abs_orizzontale,
    &outC->edge_map);
}

#ifndef KCG_USER_DEFINED_INIT
void edgeDetector_init_Package_convolution(
  outC_edgeDetector_Package_convolution *outC)
{
  kcg_size idx;
  kcg_size idx1;

  for (idx1 = 0; idx1 < 30; idx1++) {
    for (idx = 0; idx < 30; idx++) {
      outC->edge_map[idx1][idx] = kcg_lit_int8(0);
      outC->Output_abs_orizzontale[idx1][idx] = kcg_lit_int8(0);
      outC->Output_abs_verticale[idx1][idx] = kcg_lit_int8(0);
      outC->Output_verticale[idx1][idx] = kcg_lit_int8(0);
      outC->Output_orizzontale[idx1][idx] = kcg_lit_int8(0);
    }
  }
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void edgeDetector_reset_Package_convolution(
  outC_edgeDetector_Package_convolution *outC)
{
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */



/* $********** SCADE Suite KCG 32-bit 6.6.4 (build i3) **********
** edgeDetector_Package_convolution.c
** Generation date: 2025-07-18T14:22:15
*************************************************************$ */

