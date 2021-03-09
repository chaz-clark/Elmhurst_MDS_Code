
/************************************************************
 * The following C source code was automatically generated
 * by the TRANSLATE feature in Salford Predictive Modeler(R).
 * Modeling version: 8.3.2.001, Translation version: 8.3.2.001
 ************************************************************/

#include <string.h>  /* for strcmp() */

/************************************************************
 *     **** APPLICATION-DEPENDENT MISSING VALUES ****
 * The two constants must be set **by you** to whatever
 * value(s) you use in your data management or programming
 * workflow to represent missing data.
 ************************************************************/

const double DBL_MISSING_VALUE = /* value needed here! */ ;
const int    INT_MISSING_VALUE = /* value needed here! */ ;

/************
 * PREDICTORS
 ************/

double CASENO, XAUDELTA, XAGDELTA, WHEAT_FDEL, DOLLARINDE, DOLLARIND1, CHFDELTA,
       S_P_FDELTA, RUSSELL_FD, SILVER_FDE, NZDDELTA, NIKKEI_FDE, GAS_FDELTA,
       NASDAQ_FDE, KOSPI_FDEL, HSI_FDELTA, GOLD_FDELT, FTSE_FDELT, EURDELTA,
       DJI_FDELTA, DAX_FDELTA, WIT_OILDEL, COPPER_FDE, CAC_FDELTA, BRENTDELTA,
       AIDDELTA, CTB1YDELTA, CTB6MDELTA, CTB3MDELTA, DE6DELTA, DE5DELTA,
       DE4DELTA, DE2DELTA, DE1DELTA, TE6DELTA, TE5DELTA, TE3DELTA, TE2DELTA,
       TE1DELTA, NYSEDELTA, RUTDELTA, SSECDELTA, IXICDELTA, HSIDELTA, GSPCDELTA,
       GDAXIDELTA, FTSEDELTA, FCHIDELTA, XOMDELTA, WFCDELTA, MSFTDELTA,
       JPMDELTA, JNJDELTA, GEDELTA, AMZNDELTA, AAPLDELTA, CNYDELTA, CADDELTA,
       JPYDELTA, GBPDELTA, DBAADELTA, DAAADELTA, GOLDDELTA, OILDELTA,
       DGS10DELTA, DGS5DELTA, DTB6DELTA, DTB3DELTA, DTB4WKDELT, EMA200DELT,
       EMA50DELTA, EMA20DELTA, EMA10DELTA, ROC20DELTA, ROCDELTA, ROC10DELTA,
       ROC5DELTA, MOM3DELTA, MOM2DELTA, MOM1DELTA, MOMDELTA, OPEN, CLOSE,
       ADJ_CLOSE, HIGH, LOW, VOLUME, MOM, MOM1, MOM2, MOM3, ROC_5, ROC_10,
       ROC_15, ROC_20, EMA_10, EMA_20, EMA_50, EMA_200, DTB4WK, DTB3, DTB6,
       DGS5, DGS10, OIL, GOLD, DAAA, DBAA, GBP, JPY, CAD, CNY, AAPL, AMZN, GE,
       JNJ, JPM, MSFT, WFC, XOM, FCHI, FTSE, GDAXI, GSPC, HSI, IXIC, RUT, NYSE,
       TE1, TE2, TE3, TE5, TE6, DE1, DE2, DE4, DE5, DE6, CTB3M, CTB6M, CTB1Y,
       AUD, BRENT, CAC_F, COPPER_F, WIT_OIL, DAX_F, DJI_F, EUR, FTSE_F, GOLD_F,
       HSI_F, KOSPI_F, NASDAQ_F, GAS_F, NIKKEI_F, NZD, SILVER_F, RUSSELL_F,
       S_P_F, CHF, DOLLAR_IND, DOLLAR_IN1, WHEAT_F, XAG, XAU, WORD1, WORD2,
       WORD4, WORD5, WORD6, WORD8, WORD9, WORD10, WORD11, WORD13, WORD14,
       WORD15, WORD16, WORD17, WORD18, WORD20, WORD21, WORD22, WORD23, WORD24,
       WORD25, WORD26, WORD27, WORD28, WORD29, WORD30, WORD31, WORD32, WORD33,
       WORD35, WORD37, WORD38, WORD40, WORD41, WORD42, WORD43, WORD44, WORD45,
       WORD47, WORD48, WORD49, WORD50, WORD51, WORD53, WORD54, WORD55, WORD56,
       WORD57, WORD58, WORD60, WORD62, WORD63, WORD64, WORD68, WORD69, WORD70,
       WORD71, WORD72, WORD75, WORD77, WORD79, WORD83, WORD84, WORD85, WORD86,
       WORD88, WORD89, WORD91, WORD93, WORD98, WORD100, WORD101, WORD104,
       WORD105, WORD107, WORD108, WORD109, WORD113, WORD115, WORD119, WORD121,
       WORD122, WORD123, WORD125, WORD127, WORD128, WORD133, WORD134, WORD137,
       WORD138, WORD142, WORD143, WORD144, WORD147, WORD150, WORD151, WORD153,
       WORD155, WORD156, WORD158, WORD163, WORD166;

/************************************************
 * Here come the trees.  A shell for calling them
 * appears at the end of this source file.
 ************************************************/

int Tree_1(int * const pTerminalNodeNumber)
{
  /* CART version: 8.3.2.001 */
  /* Tree: Tree_1 */
  /* Timestamp: 20200320211605007 */
  /* Grove: C:\Users\CHAZIN~1\AppData\Local\Temp\v6ik_00077.grv */
  /* Target: CLOSEDELTA */
  /* CART Optimal tree, Complexity threshold = 0.00405326 */
  /* Target variable: CLOSEDELTA, integer discrete with 2 levels. */
  /* N terminal nodes = 3, Depth = 3 */

  int target = 0;
  int node = 1; /* start at root node */
  int done = 0; /* set at terminal node */

 /*
  * Terminal node probabilities:
  * prob[0]: probability( CLOSEDELTA = 0 )
  * prob[1]: probability( CLOSEDELTA = 1 )
  */

  double prob[2] = { 0.0 };

  while (done == 0) switch (node) {

    case 1:
      if (ROC20DELTA != DBL_MISSING_VALUE) {
        if (ROC20DELTA <= -1.98471140862) node = -1;
        else node = 2;
      }
      else if (ROCDELTA != DBL_MISSING_VALUE) {
        if (ROCDELTA <= -1.75741374493) node = -1;
        else node = 2;
      }
      else if (ROC10DELTA != DBL_MISSING_VALUE) {
        if (ROC10DELTA <= -1.88115829229) node = -1;
        else node = 2;
      }
      else if (ROC5DELTA != DBL_MISSING_VALUE) {
        if (ROC5DELTA <= -0.843304902315) node = -1;
        else node = 2;
      }
      else if (EMA10DELTA != DBL_MISSING_VALUE) {
        if (EMA10DELTA <= -173.12323761) node = -1;
        else node = 2;
      }
      else if (MOM2DELTA != DBL_MISSING_VALUE) {
        if (MOM2DELTA <= -0.0122144985944) node = -1;
        else node = 2;
      }
      else if (MOM3DELTA != DBL_MISSING_VALUE) {
        if (MOM3DELTA <= -0.0210653552786) node = -1;
        else node = 2;
      }
      else if (EMA20DELTA != DBL_MISSING_VALUE) {
        if (EMA20DELTA <= -168.27822876) node = -1;
        else node = 2;
      }
      else if (AAPLDELTA != DBL_MISSING_VALUE) {
        if (AAPLDELTA <= -0.0303558623418) node = -1;
        else node = 2;
      }
      else if (RUSSELL_FD != DBL_MISSING_VALUE) {
        if (RUSSELL_FD <= -3.70500016212) node = -1;
        else node = 2;
      }
      else if (GAS_FDELTA != DBL_MISSING_VALUE) {
        if (GAS_FDELTA <= -7.64999985695) node = -1;
        else node = 2;
      }
      else if (RUTDELTA != DBL_MISSING_VALUE) {
        if (RUTDELTA <= -0.0371843241155) node = -1;
        else node = 2;
      }
      else if (CNYDELTA != DBL_MISSING_VALUE) {
        if (CNYDELTA <= -0.037953549996) node = -1;
        else node = 2;
      }
      else if (CADDELTA != DBL_MISSING_VALUE) {
        if (CADDELTA <= -0.037953549996) node = -1;
        else node = 2;
      }
      else if (JPYDELTA != DBL_MISSING_VALUE) {
        if (JPYDELTA <= -0.037953549996) node = -1;
        else node = 2;
      }
      else if (GBPDELTA != DBL_MISSING_VALUE) {
        if (GBPDELTA <= -0.037953549996) node = -1;
        else node = 2;
      }
      else if (GOLDDELTA != DBL_MISSING_VALUE) {
        if (GOLDDELTA <= 0.0307597741485) node = 2;
        else node = -1;
      }
      else if (FTSE != DBL_MISSING_VALUE) {
        if (FTSE <= 0.0167211554945) node = 2;
        else node = -1;
      }
      else if (RUT != DBL_MISSING_VALUE) {
        if (RUT <= -0.0242312243208) node = -1;
        else node = 2;
      }
      else if (DJI_F != DBL_MISSING_VALUE) {
        if (DJI_F <= -1.76499998569) node = -1;
        else node = 2;
      }
      else if (XOMDELTA != DBL_MISSING_VALUE) {
        if (XOMDELTA <= -0.026987654157) node = -1;
        else node = 2;
      }
      else if (ROC_15 != DBL_MISSING_VALUE) {
        if (ROC_15 <= 4.97269868851) node = 2;
        else node = -1;
      }
      else if (WORD128 != DBL_MISSING_VALUE) {
        if (WORD128 <= 3.5) node = 2;
        else node = -1;
      }
      else if (GSPCDELTA != DBL_MISSING_VALUE) {
        if (GSPCDELTA <= -0.0147576769814) node = -1;
        else node = 2;
      }
      else if (MOMDELTA != DBL_MISSING_VALUE) {
        if (MOMDELTA <= -0.0159426890314) node = -1;
        else node = 2;
      }
      else if (WORD5 != DBL_MISSING_VALUE) {
        if (WORD5 <= 4.5) node = -1;
        else node = 2;
      }
      else if (WORD155 != DBL_MISSING_VALUE) {
        if (WORD155 <= 2.5) node = 2;
        else node = -1;
      }
      else if (NYSEDELTA != DBL_MISSING_VALUE) {
        if (NYSEDELTA <= -0.0226309774444) node = -1;
        else node = 2;
      }
      else if (AMZNDELTA != DBL_MISSING_VALUE) {
        if (AMZNDELTA <= -0.043205216527) node = -1;
        else node = 2;
      }
      else if (IXICDELTA != DBL_MISSING_VALUE) {
        if (IXICDELTA <= -0.0170742543414) node = -1;
        else node = 2;
      }
      else if (MOM3 != DBL_MISSING_VALUE) {
        if (MOM3 <= -0.0101055246778) node = -1;
        else node = 2;
      }
      else if (ROC_20 != DBL_MISSING_VALUE) {
        if (ROC_20 <= -3.6739192009) node = -1;
        else node = 2;
      }
      else if (WORD37 != DBL_MISSING_VALUE) {
        if (WORD37 <= 1.5) node = -1;
        else node = 2;
      }
      else if (WORD60 != DBL_MISSING_VALUE) {
        if (WORD60 <= 6.5) node = 2;
        else node = -1;
      }
      else if (HSIDELTA != DBL_MISSING_VALUE) {
        if (HSIDELTA <= 0.0400763042271) node = 2;
        else node = -1;
      }
      else if (DTB3 != DBL_MISSING_VALUE) {
        if (DTB3 <= 0.304999992251) node = 2;
        else node = -1;
      }
      else if (GDAXI != DBL_MISSING_VALUE) {
        if (GDAXI <= 0.0347838923335) node = 2;
        else node = -1;
      }
      else if (HSI != DBL_MISSING_VALUE) {
        if (HSI <= 0.0300887161866) node = 2;
        else node = -1;
      }
      else if (DAX_F != DBL_MISSING_VALUE) {
        if (DAX_F <= 3.23000001907) node = 2;
        else node = -1;
      }
      else if (RUSSELL_F != DBL_MISSING_VALUE) {
        if (RUSSELL_F <= -2.46000003815) node = -1;
        else node = 2;
      }
      else if (WORD77 != DBL_MISSING_VALUE) {
        if (WORD77 <= 7.5) node = 2;
        else node = -1;
      }
      else if (WORD115 != DBL_MISSING_VALUE) {
        if (WORD115 <= 4.5) node = 2;
        else node = -1;
      }
      else if (WORD153 != DBL_MISSING_VALUE) {
        if (WORD153 <= 3.5) node = 2;
        else node = -1;
      }
      else if (LOW != DBL_MISSING_VALUE) {
        if (LOW <= 10113.4101563) node = -1;
        else node = 2;
      }
      else if (MOM != DBL_MISSING_VALUE) {
        if (MOM <= -0.0155848488212) node = -1;
        else node = 2;
      }
      else if (WORD4 != DBL_MISSING_VALUE) {
        if (WORD4 <= 54.5) node = 2;
        else node = -1;
      }
      else if (WORD10 != DBL_MISSING_VALUE) {
        if (WORD10 <= 7.5) node = -1;
        else node = 2;
      }
      else if (DE2DELTA != DBL_MISSING_VALUE) {
        if (DE2DELTA <= 0.0850000008941) node = 2;
        else node = -1;
      }
      else if (WORD50 != DBL_MISSING_VALUE) {
        if (WORD50 <= 1.5) node = -1;
        else node = 2;
      }
      else if (DOLLARIND1 != DBL_MISSING_VALUE) {
        if (DOLLARIND1 <= 1.55500000715) node = 2;
        else node = -1;
      }
      else if (CHFDELTA != DBL_MISSING_VALUE) {
        if (CHFDELTA <= -1.78500002623) node = -1;
        else node = 2;
      }
      else if (S_P_FDELTA != DBL_MISSING_VALUE) {
        if (S_P_FDELTA <= -3.27999997139) node = -1;
        else node = 2;
      }
      else if (DJI_FDELTA != DBL_MISSING_VALUE) {
        if (DJI_FDELTA <= -3) node = -1;
        else node = 2;
      }
      else if (WIT_OILDEL != DBL_MISSING_VALUE) {
        if (WIT_OILDEL <= -7.97500014305) node = -1;
        else node = 2;
      }
      else if (OILDELTA != DBL_MISSING_VALUE) {
        if (OILDELTA <= -0.0834312997758) node = -1;
        else node = 2;
      }
      else if (HIGH != DBL_MISSING_VALUE) {
        if (HIGH <= 10424.8852539) node = -1;
        else node = 2;
      }
      else if (EMA_10 != DBL_MISSING_VALUE) {
        if (EMA_10 <= 10179.75) node = -1;
        else node = 2;
      }
      else if (DTB4WK != DBL_MISSING_VALUE) {
        if (DTB4WK <= 0.244999997318) node = 2;
        else node = -1;
      }
      else if (DTB6 != DBL_MISSING_VALUE) {
        if (DTB6 <= 0.444999992847) node = 2;
        else node = -1;
      }
      else if (CAD != DBL_MISSING_VALUE) {
        if (CAD <= -0.00760529655963) node = -1;
        else node = 2;
      }
      else if (JNJ != DBL_MISSING_VALUE) {
        if (JNJ <= 0.0195347629488) node = 2;
        else node = -1;
      }
      else if (FCHI != DBL_MISSING_VALUE) {
        if (FCHI <= 0.0279403915629) node = 2;
        else node = -1;
      }
      else if (CTB3M != DBL_MISSING_VALUE) {
        if (CTB3M <= 0.28125) node = 2;
        else node = -1;
      }
      else if (XAG != DBL_MISSING_VALUE) {
        if (XAG <= 3.92999994755) node = 2;
        else node = -1;
      }
      else if (WORD38 != DBL_MISSING_VALUE) {
        if (WORD38 <= 15.5) node = 2;
        else node = -1;
      }
      else if (WORD89 != DBL_MISSING_VALUE) {
        if (WORD89 <= 5.5) node = 2;
        else node = -1;
      }
      else if (DE1DELTA != DBL_MISSING_VALUE) {
        if (DE1DELTA <= 0.0749999992549) node = 2;
        else node = -1;
      }
      else if (TE6DELTA != DBL_MISSING_VALUE) {
        if (TE6DELTA <= -0.0449999999255) node = -1;
        else node = 2;
      }
      else if (CLOSE != DBL_MISSING_VALUE) {
        if (CLOSE <= 10402.5249023) node = -1;
        else node = 2;
      }
      else if (ADJ_CLOSE != DBL_MISSING_VALUE) {
        if (ADJ_CLOSE <= 10402.5249023) node = -1;
        else node = 2;
      }
      else if (ROC_5 != DBL_MISSING_VALUE) {
        if (ROC_5 <= -3.61646640301) node = -1;
        else node = 2;
      }
      else if (AAPL != DBL_MISSING_VALUE) {
        if (AAPL <= -0.0272979373112) node = -1;
        else node = 2;
      }
      else if (AMZN != DBL_MISSING_VALUE) {
        if (AMZN <= -0.0282541196793) node = -1;
        else node = 2;
      }
      else if (GAS_F != DBL_MISSING_VALUE) {
        if (GAS_F <= 4.3149998188) node = 2;
        else node = -1;
      }
      else if (WORD43 != DBL_MISSING_VALUE) {
        if (WORD43 <= 10.5) node = 2;
        else node = -1;
      }
      else if (WORD121 != DBL_MISSING_VALUE) {
        if (WORD121 <= 2.5) node = 2;
        else node = -1;
      }
      else if (DOLLARINDE != DBL_MISSING_VALUE) {
        if (DOLLARINDE <= 1.48500001431) node = 2;
        else node = -1;
      }
      else if (NASDAQ_FDE != DBL_MISSING_VALUE) {
        if (NASDAQ_FDE <= -3.33000004292) node = -1;
        else node = 2;
      }
      else if (TE5DELTA != DBL_MISSING_VALUE) {
        if (TE5DELTA <= 0.0349999992177) node = 2;
        else node = -1;
      }
      else if (OPEN != DBL_MISSING_VALUE) {
        if (OPEN <= 10205.5351563) node = -1;
        else node = 2;
      }
      else if (EMA_20 != DBL_MISSING_VALUE) {
        if (EMA_20 <= 10245.7216797) node = -1;
        else node = 2;
      }
      else if (XOM != DBL_MISSING_VALUE) {
        if (XOM <= -0.0211521470919) node = -1;
        else node = 2;
      }
      else if (FTSE_F != DBL_MISSING_VALUE) {
        if (FTSE_F <= 1.46499997377) node = 2;
        else node = -1;
      }
      else if (HSI_F != DBL_MISSING_VALUE) {
        if (HSI_F <= -2.98000001907) node = -1;
        else node = 2;
      }
      else if (NZD != DBL_MISSING_VALUE) {
        if (NZD <= -1.47500002384) node = -1;
        else node = 2;
      }
      else if (S_P_F != DBL_MISSING_VALUE) {
        if (S_P_F <= 1.44499999285) node = 2;
        else node = -1;
      }
      else if (XAU != DBL_MISSING_VALUE) {
        if (XAU <= 1.71000003815) node = 2;
        else node = -1;
      }
      else if (WORD11 != DBL_MISSING_VALUE) {
        if (WORD11 <= 2.5) node = -1;
        else node = 2;
      }
      else if (WORD13 != DBL_MISSING_VALUE) {
        if (WORD13 <= 4.5) node = -1;
        else node = 2;
      }
      else if (WORD15 != DBL_MISSING_VALUE) {
        if (WORD15 <= 3.5) node = -1;
        else node = 2;
      }
      else if (WORD30 != DBL_MISSING_VALUE) {
        if (WORD30 <= 18) node = 2;
        else node = -1;
      }
      else if (WORD33 != DBL_MISSING_VALUE) {
        if (WORD33 <= 18) node = 2;
        else node = -1;
      }
      else if (WORD35 != DBL_MISSING_VALUE) {
        if (WORD35 <= 1.5) node = -1;
        else node = 2;
      }
      else if (WORD101 != DBL_MISSING_VALUE) {
        if (WORD101 <= 4.5) node = 2;
        else node = -1;
      }
      else if (WORD108 != DBL_MISSING_VALUE) {
        if (WORD108 <= 4.5) node = 2;
        else node = -1;
      }
      else if (VOLUME != DBL_MISSING_VALUE) {
        if (VOLUME <= 1079729984) node = 2;
        else node = -1;
      }
      else if (IXIC != DBL_MISSING_VALUE) {
        if (IXIC <= -0.0153736597858) node = -1;
        else node = 2;
      }
      else if (NASDAQ_F != DBL_MISSING_VALUE) {
        if (NASDAQ_F <= -1.94999998808) node = -1;
        else node = 2;
      }
      else if (AIDDELTA != DBL_MISSING_VALUE) {
        if (AIDDELTA <= -0.995000004768) node = -1;
        else node = 2;
      }
      else if (XAUDELTA != DBL_MISSING_VALUE) {
        if (XAUDELTA <= 6.48000001907) node = 2;
        else node = -1;
      }
      else if (NZDDELTA != DBL_MISSING_VALUE) {
        if (NZDDELTA <= -2.51499998569) node = -1;
        else node = 2;
      }
      else if (KOSPI_FDEL != DBL_MISSING_VALUE) {
        if (KOSPI_FDEL <= -6.10500001907) node = -1;
        else node = 2;
      }
      else if (EURDELTA != DBL_MISSING_VALUE) {
        if (EURDELTA <= -2.62999999523) node = -1;
        else node = 2;
      }
      else if (GEDELTA != DBL_MISSING_VALUE) {
        if (GEDELTA <= -0.0662106964737) node = -1;
        else node = 2;
      }
      else if (DTB3DELTA != DBL_MISSING_VALUE) {
        if (DTB3DELTA <= 0.054999999702) node = 2;
        else node = -1;
      }
      else if (OIL != DBL_MISSING_VALUE) {
        if (OIL <= -0.0474213473499) node = -1;
        else node = 2;
      }
      else if (GOLD != DBL_MISSING_VALUE) {
        if (GOLD <= -0.0282060392201) node = -1;
        else node = 2;
      }
      else if (WFC != DBL_MISSING_VALUE) {
        if (WFC <= -0.0512854736298) node = -1;
        else node = 2;
      }
      else if (NYSE != DBL_MISSING_VALUE) {
        if (NYSE <= -0.0283522941172) node = -1;
        else node = 2;
      }
      else if (TE5 != DBL_MISSING_VALUE) {
        if (TE5 <= 0.0850000008941) node = 2;
        else node = -1;
      }
      else if (COPPER_F != DBL_MISSING_VALUE) {
        if (COPPER_F <= 4.66000008583) node = 2;
        else node = -1;
      }
      else if (KOSPI_F != DBL_MISSING_VALUE) {
        if (KOSPI_F <= -5.77499985695) node = -1;
        else node = 2;
      }
      else if (SILVER_F != DBL_MISSING_VALUE) {
        if (SILVER_F <= 4.50999999046) node = 2;
        else node = -1;
      }
      else if (DOLLAR_IND != DBL_MISSING_VALUE) {
        if (DOLLAR_IND <= 1.375) node = 2;
        else node = -1;
      }
      else if (WORD1 != DBL_MISSING_VALUE) {
        if (WORD1 <= 2.5) node = -1;
        else node = 2;
      }
      else if (WORD6 != DBL_MISSING_VALUE) {
        if (WORD6 <= 97) node = 2;
        else node = -1;
      }
      else if (WORD8 != DBL_MISSING_VALUE) {
        if (WORD8 <= 69) node = 2;
        else node = -1;
      }
      else if (WORD25 != DBL_MISSING_VALUE) {
        if (WORD25 <= 1.5) node = -1;
        else node = 2;
      }
      else if (WORD26 != DBL_MISSING_VALUE) {
        if (WORD26 <= 0.5) node = -1;
        else node = 2;
      }
      else if (WORD42 != DBL_MISSING_VALUE) {
        if (WORD42 <= 0.5) node = -1;
        else node = 2;
      }
      else if (WORD79 != DBL_MISSING_VALUE) {
        if (WORD79 <= 19) node = 2;
        else node = -1;
      }
      else if (WORD100 != DBL_MISSING_VALUE) {
        if (WORD100 <= 4.5) node = 2;
        else node = -1;
      }
      else if (WORD113 != DBL_MISSING_VALUE) {
        if (WORD113 <= 4.5) node = 2;
        else node = -1;
      }
      else if (WORD125 != DBL_MISSING_VALUE) {
        if (WORD125 <= 4.5) node = 2;
        else node = -1;
      }
      else if (WORD127 != DBL_MISSING_VALUE) {
        if (WORD127 <= 3.5) node = 2;
        else node = -1;
      }
      else if (WORD138 != DBL_MISSING_VALUE) {
        if (WORD138 <= 4) node = 2;
        else node = -1;
      }
      else if (WORD144 != DBL_MISSING_VALUE) {
        if (WORD144 <= 4.5) node = 2;
        else node = -1;
      }
      else if (WORD151 != DBL_MISSING_VALUE) {
        if (WORD151 <= 3.5) node = 2;
        else node = -1;
      }
      else if (WORD158 != DBL_MISSING_VALUE) {
        if (WORD158 <= 4.5) node = 2;
        else node = -1;
      }
      else if (CASENO != DBL_MISSING_VALUE) {
        if (CASENO <= 5.5) node = -1;
        else node = 2;
      }
      else if (MOM1 != DBL_MISSING_VALUE) {
        if (MOM1 <= -0.0290084918961) node = -1;
        else node = 2;
      }
      else if (AUD != DBL_MISSING_VALUE) {
        if (AUD <= 1.30500000715) node = 2;
        else node = -1;
      }
      else if (WORD119 != DBL_MISSING_VALUE) {
        if (WORD119 <= 3.5) node = 2;
        else node = -1;
      }
      else if (WORD147 != DBL_MISSING_VALUE) {
        if (WORD147 <= 3.5) node = 2;
        else node = -1;
      }
      else if (JPM != DBL_MISSING_VALUE) {
        if (JPM <= -0.0226160129532) node = -1;
        else node = 2;
      }
      else if (GSPC != DBL_MISSING_VALUE) {
        if (GSPC <= -0.0145914638415) node = -1;
        else node = 2;
      }
      else if (EMA50DELTA != DBL_MISSING_VALUE) {
        if (EMA50DELTA <= -95.242477417) node = -1;
        else node = 2;
      }
      else if (MOM1DELTA != DBL_MISSING_VALUE) {
        if (MOM1DELTA <= -0.0203872732818) node = -1;
        else node = 2;
      }
      else if (BRENT != DBL_MISSING_VALUE) {
        if (BRENT <= 1.99000000954) node = 2;
        else node = -1;
      }
      else if (CAC_F != DBL_MISSING_VALUE) {
        if (CAC_F <= -1.40999996662) node = -1;
        else node = 2;
      }
      else if (TE3DELTA != DBL_MISSING_VALUE) {
        if (TE3DELTA <= -0.0449999999255) node = -1;
        else node = 2;
      }
      else if (TE2DELTA != DBL_MISSING_VALUE) {
        if (TE2DELTA <= -0.0449999999255) node = -1;
        else node = 2;
      }
      else if (NIKKEI_FDE != DBL_MISSING_VALUE) {
        if (NIKKEI_FDE <= -5.01999998093) node = -1;
        else node = 2;
      }
      else if (WFCDELTA != DBL_MISSING_VALUE) {
        if (WFCDELTA <= -0.0514811351895) node = -1;
        else node = 2;
      }
      else if (DTB4WKDELT != DBL_MISSING_VALUE) {
        if (DTB4WKDELT <= -0.0649999994785) node = -1;
        else node = 2;
      }
      else if (ROC_10 != DBL_MISSING_VALUE) {
        if (ROC_10 <= -7.27611804008) node = -1;
        else node = 2;
      }
      else if (GE != DBL_MISSING_VALUE) {
        if (GE <= -0.0432419516146) node = -1;
        else node = 2;
      }
      else if (DE4 != DBL_MISSING_VALUE) {
        if (DE4 <= 6.11500000954) node = 2;
        else node = -1;
      }
      else if (DE5 != DBL_MISSING_VALUE) {
        if (DE5 <= 6.18499994278) node = 2;
        else node = -1;
      }
      else if (CTB1Y != DBL_MISSING_VALUE) {
        if (CTB1Y <= 0.126671418548) node = 2;
        else node = -1;
      }
      else if (WIT_OIL != DBL_MISSING_VALUE) {
        if (WIT_OIL <= -4.22499990463) node = -1;
        else node = 2;
      }
      else if (CHF != DBL_MISSING_VALUE) {
        if (CHF <= -1.1099999547) node = -1;
        else node = 2;
      }
      else if (DOLLAR_IN1 != DBL_MISSING_VALUE) {
        if (DOLLAR_IN1 <= 1.36500000954) node = 2;
        else node = -1;
      }
      else if (WORD17 != DBL_MISSING_VALUE) {
        if (WORD17 <= 83.5) node = 2;
        else node = -1;
      }
      else if (WORD18 != DBL_MISSING_VALUE) {
        if (WORD18 <= 2.5) node = -1;
        else node = 2;
      }
      else if (WORD20 != DBL_MISSING_VALUE) {
        if (WORD20 <= 2.5) node = -1;
        else node = 2;
      }
      else if (WORD23 != DBL_MISSING_VALUE) {
        if (WORD23 <= 31.5) node = 2;
        else node = -1;
      }
      else if (WORD27 != DBL_MISSING_VALUE) {
        if (WORD27 <= 1.5) node = -1;
        else node = 2;
      }
      else if (WORD32 != DBL_MISSING_VALUE) {
        if (WORD32 <= 21) node = 2;
        else node = -1;
      }
      else if (WORD49 != DBL_MISSING_VALUE) {
        if (WORD49 <= 12.5) node = 2;
        else node = -1;
      }
      else if (WORD53 != DBL_MISSING_VALUE) {
        if (WORD53 <= 12) node = 2;
        else node = -1;
      }
      else if (WORD54 != DBL_MISSING_VALUE) {
        if (WORD54 <= 11.5) node = 2;
        else node = -1;
      }
      else if (WORD58 != DBL_MISSING_VALUE) {
        if (WORD58 <= 9.5) node = 2;
        else node = -1;
      }
      else if (WORD71 != DBL_MISSING_VALUE) {
        if (WORD71 <= 14.5) node = 2;
        else node = -1;
      }
      else if (WORD91 != DBL_MISSING_VALUE) {
        if (WORD91 <= 6.5) node = 2;
        else node = -1;
      }
      else if (WORD107 != DBL_MISSING_VALUE) {
        if (WORD107 <= 4.5) node = 2;
        else node = -1;
      }
      else if (BRENTDELTA != DBL_MISSING_VALUE) {
        if (BRENTDELTA <= -5.7650001049) node = -1;
        else node = 2;
      }
      else if (JPMDELTA != DBL_MISSING_VALUE) {
        if (JPMDELTA <= -0.0360345728695) node = -1;
        else node = 2;
      }
      else if (EMA_50 != DBL_MISSING_VALUE) {
        if (EMA_50 <= 10366.9389648) node = -1;
        else node = 2;
      }
      else if (EMA_200 != DBL_MISSING_VALUE) {
        if (EMA_200 <= 10366.9389648) node = -1;
        else node = 2;
      }
      else if (WORD31 != DBL_MISSING_VALUE) {
        if (WORD31 <= 15.5) node = 2;
        else node = -1;
      }
      else if (WORD64 != DBL_MISSING_VALUE) {
        if (WORD64 <= 8) node = 2;
        else node = -1;
      }
      else if (MSFT != DBL_MISSING_VALUE) {
        if (MSFT <= -0.023098371923) node = -1;
        else node = 2;
      }
      else if (NIKKEI_F != DBL_MISSING_VALUE) {
        if (NIKKEI_F <= -2.27499997616) node = -1;
        else node = 2;
      }
      else if (DGS10DELTA != DBL_MISSING_VALUE) {
        if (DGS10DELTA <= -0.054999999702) node = -1;
        else node = 2;
      }
      else if (DGS5 != DBL_MISSING_VALUE) {
        if (DGS5 <= 0.625) node = -1;
        else node = 2;
      }
      else if (DE1 != DBL_MISSING_VALUE) {
        if (DE1 <= 1.49500000477) node = 2;
        else node = -1;
      }
      else if (DE4DELTA != DBL_MISSING_VALUE) {
        if (DE4DELTA <= -0.22500000149) node = -1;
        else node = 2;
      }
      else if (MSFTDELTA != DBL_MISSING_VALUE) {
        if (MSFTDELTA <= -0.0813409239054) node = -1;
        else node = 2;
      }
      else if (EMA200DELT != DBL_MISSING_VALUE) {
        if (EMA200DELT <= -60.9094219208) node = -1;
        else node = 2;
      }
      else if (TE6 != DBL_MISSING_VALUE) {
        if (TE6 <= -0.00499999988824) node = -1;
        else node = 2;
      }
      else if (WORD9 != DBL_MISSING_VALUE) {
        if (WORD9 <= 5.5) node = -1;
        else node = 2;
      }
      else if (WORD16 != DBL_MISSING_VALUE) {
        if (WORD16 <= 34) node = 2;
        else node = -1;
      }
      else if (WORD22 != DBL_MISSING_VALUE) {
        if (WORD22 <= 28.5) node = 2;
        else node = -1;
      }
      else if (WORD24 != DBL_MISSING_VALUE) {
        if (WORD24 <= 1.5) node = -1;
        else node = 2;
      }
      else if (WORD28 != DBL_MISSING_VALUE) {
        if (WORD28 <= 19.5) node = 2;
        else node = -1;
      }
      else if (WORD45 != DBL_MISSING_VALUE) {
        if (WORD45 <= 0.5) node = -1;
        else node = 2;
      }
      else if (WORD62 != DBL_MISSING_VALUE) {
        if (WORD62 <= 12.5) node = 2;
        else node = -1;
      }
      else if (WORD63 != DBL_MISSING_VALUE) {
        if (WORD63 <= 0.5) node = -1;
        else node = 2;
      }
      else if (WORD109 != DBL_MISSING_VALUE) {
        if (WORD109 <= 4.5) node = 2;
        else node = -1;
      }
      else if (WORD123 != DBL_MISSING_VALUE) {
        if (WORD123 <= 3.5) node = 2;
        else node = -1;
      }
      else if (WORD68 != DBL_MISSING_VALUE) {
        if (WORD68 <= 7.5) node = 2;
        else node = -1;
      }
      else if (TE1DELTA != DBL_MISSING_VALUE) {
        if (TE1DELTA <= -0.0649999994785) node = -1;
        else node = 2;
      }
      else if (FTSEDELTA != DBL_MISSING_VALUE) {
        if (FTSEDELTA <= -0.00892105372623) node = -1;
        else node = 2;
      }
      else if (GDAXIDELTA != DBL_MISSING_VALUE) {
        if (GDAXIDELTA <= -0.0246727010235) node = -1;
        else node = 2;
      }
      else if (MOM2 != DBL_MISSING_VALUE) {
        if (MOM2 <= -0.00755933648907) node = -1;
        else node = 2;
      }
      else node = 2; /* default direction */
      break;

    case -1:
      target = 1;
      prob[0] = 0.0400000;
      prob[1] = 0.9600000;
      node = 1;
      done = 1;
      break;

    case 2:
      if (ROC20DELTA != DBL_MISSING_VALUE) {
        if (ROC20DELTA <= 1.96533322334) node = -2;
        else node = -3;
      }
      else if (ROC5DELTA != DBL_MISSING_VALUE) {
        if (ROC5DELTA <= 3.05081951618) node = -2;
        else node = -3;
      }
      else if (ROC10DELTA != DBL_MISSING_VALUE) {
        if (ROC10DELTA <= 2.04283177853) node = -2;
        else node = -3;
      }
      else if (ROCDELTA != DBL_MISSING_VALUE) {
        if (ROCDELTA <= 2.86374902725) node = -2;
        else node = -3;
      }
      else if (MOM1DELTA != DBL_MISSING_VALUE) {
        if (MOM1DELTA <= 0.00733775296248) node = -2;
        else node = -3;
      }
      else if (TE3DELTA != DBL_MISSING_VALUE) {
        if (TE3DELTA <= 0.134999997914) node = -2;
        else node = -3;
      }
      else if (DGS10DELTA != DBL_MISSING_VALUE) {
        if (DGS10DELTA <= 0.164999999106) node = -2;
        else node = -3;
      }
      else if (TE2DELTA != DBL_MISSING_VALUE) {
        if (TE2DELTA <= 0.124999996275) node = -2;
        else node = -3;
      }
      else if (TE1DELTA != DBL_MISSING_VALUE) {
        if (TE1DELTA <= 0.155000001192) node = -2;
        else node = -3;
      }
      else if (EMA10DELTA != DBL_MISSING_VALUE) {
        if (EMA10DELTA <= 44.9696750641) node = -2;
        else node = -3;
      }
      else if (DAAADELTA != DBL_MISSING_VALUE) {
        if (DAAADELTA <= 0.179999999702) node = -2;
        else node = -3;
      }
      else if (HSIDELTA != DBL_MISSING_VALUE) {
        if (HSIDELTA <= 0.0205482244492) node = -2;
        else node = -3;
      }
      else if (MOM2DELTA != DBL_MISSING_VALUE) {
        if (MOM2DELTA <= 0.0146208554506) node = -2;
        else node = -3;
      }
      else if (SILVER_F != DBL_MISSING_VALUE) {
        if (SILVER_F <= 2.15000009537) node = -2;
        else node = -3;
      }
      else if (DE6DELTA != DBL_MISSING_VALUE) {
        if (DE6DELTA <= 0.17500000447) node = -2;
        else node = -3;
      }
      else if (DE5DELTA != DBL_MISSING_VALUE) {
        if (DE5DELTA <= 0.185000002384) node = -2;
        else node = -3;
      }
      else if (WORD23 != DBL_MISSING_VALUE) {
        if (WORD23 <= 20.5) node = -2;
        else node = -3;
      }
      else if (KOSPI_FDEL != DBL_MISSING_VALUE) {
        if (KOSPI_FDEL <= 2.19999992847) node = -2;
        else node = -3;
      }
      else if (CNY != DBL_MISSING_VALUE) {
        if (CNY <= -0.00189660000615) node = -3;
        else node = -2;
      }
      else if (DE4DELTA != DBL_MISSING_VALUE) {
        if (DE4DELTA <= 0.14999999851) node = -2;
        else node = -3;
      }
      else if (DE1DELTA != DBL_MISSING_VALUE) {
        if (DE1DELTA <= -0.054999999702) node = -3;
        else node = -2;
      }
      else if (AMZNDELTA != DBL_MISSING_VALUE) {
        if (AMZNDELTA <= 0.0359746590257) node = -2;
        else node = -3;
      }
      else if (WORD93 != DBL_MISSING_VALUE) {
        if (WORD93 <= 3.5) node = -2;
        else node = -3;
      }
      else if (DAX_FDELTA != DBL_MISSING_VALUE) {
        if (DAX_FDELTA <= 0.75) node = -2;
        else node = -3;
      }
      else if (WORD33 != DBL_MISSING_VALUE) {
        if (WORD33 <= 4.5) node = -3;
        else node = -2;
      }
      else if (DBAADELTA != DBL_MISSING_VALUE) {
        if (DBAADELTA <= 0.179999999702) node = -2;
        else node = -3;
      }
      else if (WORD72 != DBL_MISSING_VALUE) {
        if (WORD72 <= 6.5) node = -2;
        else node = -3;
      }
      else if (FCHIDELTA != DBL_MISSING_VALUE) {
        if (FCHIDELTA <= 0.0319242645055) node = -2;
        else node = -3;
      }
      else if (FTSE_FDELT != DBL_MISSING_VALUE) {
        if (FTSE_FDELT <= 1.93000000715) node = -2;
        else node = -3;
      }
      else if (EMA20DELTA != DBL_MISSING_VALUE) {
        if (EMA20DELTA <= 164.681190491) node = -2;
        else node = -3;
      }
      else if (JPM != DBL_MISSING_VALUE) {
        if (JPM <= 0.0164632098749) node = -2;
        else node = -3;
      }
      else if (HSI_FDELTA != DBL_MISSING_VALUE) {
        if (HSI_FDELTA <= 1.79500001669) node = -2;
        else node = -3;
      }
      else if (WORD163 != DBL_MISSING_VALUE) {
        if (WORD163 <= 1.5) node = -2;
        else node = -3;
      }
      else if (ROC_5 != DBL_MISSING_VALUE) {
        if (ROC_5 <= 1.27800703049) node = -2;
        else node = -3;
      }
      else if (FTSEDELTA != DBL_MISSING_VALUE) {
        if (FTSEDELTA <= 0.0122688310221) node = -2;
        else node = -3;
      }
      else if (WORD156 != DBL_MISSING_VALUE) {
        if (WORD156 <= 1.5) node = -2;
        else node = -3;
      }
      else if (DGS5DELTA != DBL_MISSING_VALUE) {
        if (DGS5DELTA <= -0.214999996126) node = -3;
        else node = -2;
      }
      else if (CHF != DBL_MISSING_VALUE) {
        if (CHF <= 1.15999996662) node = -2;
        else node = -3;
      }
      else if (GDAXI != DBL_MISSING_VALUE) {
        if (GDAXI <= 0.00920811295509) node = -2;
        else node = -3;
      }
      else if (SILVER_FDE != DBL_MISSING_VALUE) {
        if (SILVER_FDE <= 4.50999999046) node = -2;
        else node = -3;
      }
      else if (CAC_FDELTA != DBL_MISSING_VALUE) {
        if (CAC_FDELTA <= 2.79499995708) node = -2;
        else node = -3;
      }
      else if (CTB6M != DBL_MISSING_VALUE) {
        if (CTB6M <= -0.0787037052214) node = -3;
        else node = -2;
      }
      else if (DAX_F != DBL_MISSING_VALUE) {
        if (DAX_F <= 1.87999999523) node = -2;
        else node = -3;
      }
      else if (IXICDELTA != DBL_MISSING_VALUE) {
        if (IXICDELTA <= 0.0116647551768) node = -2;
        else node = -3;
      }
      else if (NASDAQ_FDE != DBL_MISSING_VALUE) {
        if (NASDAQ_FDE <= 1.92000001669) node = -2;
        else node = -3;
      }
      else if (EMA50DELTA != DBL_MISSING_VALUE) {
        if (EMA50DELTA <= 78.5800361633) node = -2;
        else node = -3;
      }
      else if (CTB1Y != DBL_MISSING_VALUE) {
        if (CTB1Y <= -0.0469563491642) node = -3;
        else node = -2;
      }
      else if (OILDELTA != DBL_MISSING_VALUE) {
        if (OILDELTA <= 0.0235629370436) node = -2;
        else node = -3;
      }
      else if (GOLD_FDELT != DBL_MISSING_VALUE) {
        if (GOLD_FDELT <= 3.61500000954) node = -2;
        else node = -3;
      }
      else if (COPPER_FDE != DBL_MISSING_VALUE) {
        if (COPPER_FDE <= 3.9699999094) node = -2;
        else node = -3;
      }
      else if (GDAXIDELTA != DBL_MISSING_VALUE) {
        if (GDAXIDELTA <= 0.040617281571) node = -2;
        else node = -3;
      }
      else if (MOM3DELTA != DBL_MISSING_VALUE) {
        if (MOM3DELTA <= 0.0234871366993) node = -2;
        else node = -3;
      }
      else if (CAC_F != DBL_MISSING_VALUE) {
        if (CAC_F <= 2.55499994755) node = -2;
        else node = -3;
      }
      else if (DJI_F != DBL_MISSING_VALUE) {
        if (DJI_F <= 1.39999997616) node = -2;
        else node = -3;
      }
      else if (WORD44 != DBL_MISSING_VALUE) {
        if (WORD44 <= 12.5) node = -2;
        else node = -3;
      }
      else if (WORD122 != DBL_MISSING_VALUE) {
        if (WORD122 <= 2.5) node = -2;
        else node = -3;
      }
      else if (DE2DELTA != DBL_MISSING_VALUE) {
        if (DE2DELTA <= -0.0950000025332) node = -3;
        else node = -2;
      }
      else if (SSECDELTA != DBL_MISSING_VALUE) {
        if (SSECDELTA <= 0.0322719141841) node = -2;
        else node = -3;
      }
      else if (CLOSE != DBL_MISSING_VALUE) {
        if (CLOSE <= 17904.5849609) node = -2;
        else node = -3;
      }
      else if (ADJ_CLOSE != DBL_MISSING_VALUE) {
        if (ADJ_CLOSE <= 17904.5849609) node = -2;
        else node = -3;
      }
      else if (MOM2 != DBL_MISSING_VALUE) {
        if (MOM2 <= -0.0144946938381) node = -3;
        else node = -2;
      }
      else if (MOM3 != DBL_MISSING_VALUE) {
        if (MOM3 <= 0.0140370526351) node = -2;
        else node = -3;
      }
      else if (FCHI != DBL_MISSING_VALUE) {
        if (FCHI <= 0.0217643994838) node = -2;
        else node = -3;
      }
      else if (XOMDELTA != DBL_MISSING_VALUE) {
        if (XOMDELTA <= 0.0202498463914) node = -2;
        else node = -3;
      }
      else if (ROC_20 != DBL_MISSING_VALUE) {
        if (ROC_20 <= 4.35255503654) node = -2;
        else node = -3;
      }
      else if (WORD35 != DBL_MISSING_VALUE) {
        if (WORD35 <= 11.5) node = -2;
        else node = -3;
      }
      else if (CHFDELTA != DBL_MISSING_VALUE) {
        if (CHFDELTA <= 2.02999997139) node = -2;
        else node = -3;
      }
      else if (CTB6MDELTA != DBL_MISSING_VALUE) {
        if (CTB6MDELTA <= -0.269061148167) node = -3;
        else node = -2;
      }
      else if (WORD134 != DBL_MISSING_VALUE) {
        if (WORD134 <= 4) node = -2;
        else node = -3;
      }
      else if (WORD137 != DBL_MISSING_VALUE) {
        if (WORD137 <= 3.5) node = -2;
        else node = -3;
      }
      else if (RUT != DBL_MISSING_VALUE) {
        if (RUT <= 0.0251409690827) node = -2;
        else node = -3;
      }
      else if (RUSSELL_F != DBL_MISSING_VALUE) {
        if (RUSSELL_F <= 2.84000003338) node = -2;
        else node = -3;
      }
      else if (S_P_F != DBL_MISSING_VALUE) {
        if (S_P_F <= 1.80500000715) node = -2;
        else node = -3;
      }
      else if (DOLLAR_IND != DBL_MISSING_VALUE) {
        if (DOLLAR_IND <= -1.06000000238) node = -3;
        else node = -2;
      }
      else if (DOLLAR_IN1 != DBL_MISSING_VALUE) {
        if (DOLLAR_IN1 <= -1.01999998093) node = -3;
        else node = -2;
      }
      else if (CASENO != DBL_MISSING_VALUE) {
        if (CASENO <= 10) node = -3;
        else node = -2;
      }
      else if (VOLUME != DBL_MISSING_VALUE) {
        if (VOLUME <= 1173680000) node = -2;
        else node = -3;
      }
      else if (DTB4WK != DBL_MISSING_VALUE) {
        if (DTB4WK <= 0.00499999988824) node = -3;
        else node = -2;
      }
      else if (XAGDELTA != DBL_MISSING_VALUE) {
        if (XAGDELTA <= 4.51999998093) node = -2;
        else node = -3;
      }
      else if (WORD75 != DBL_MISSING_VALUE) {
        if (WORD75 <= 3.5) node = -2;
        else node = -3;
      }
      else if (WORD2 != DBL_MISSING_VALUE) {
        if (WORD2 <= 33.5) node = -2;
        else node = -3;
      }
      else if (WORD41 != DBL_MISSING_VALUE) {
        if (WORD41 <= 2.5) node = -3;
        else node = -2;
      }
      else if (RUSSELL_FD != DBL_MISSING_VALUE) {
        if (RUSSELL_FD <= 1.85000002384) node = -2;
        else node = -3;
      }
      else if (XAUDELTA != DBL_MISSING_VALUE) {
        if (XAUDELTA <= 2.83000004292) node = -2;
        else node = -3;
      }
      else if (NZDDELTA != DBL_MISSING_VALUE) {
        if (NZDDELTA <= 1.94999998808) node = -2;
        else node = -3;
      }
      else if (WORD143 != DBL_MISSING_VALUE) {
        if (WORD143 <= 3.5) node = -2;
        else node = -3;
      }
      else if (CTB1YDELTA != DBL_MISSING_VALUE) {
        if (CTB1YDELTA <= -0.123348817229) node = -3;
        else node = -2;
      }
      else if (JPMDELTA != DBL_MISSING_VALUE) {
        if (JPMDELTA <= -0.0767065137625) node = -3;
        else node = -2;
      }
      else if (MOM != DBL_MISSING_VALUE) {
        if (MOM <= 0.0152242565528) node = -2;
        else node = -3;
      }
      else if (ROC_10 != DBL_MISSING_VALUE) {
        if (ROC_10 <= -6.19750356674) node = -3;
        else node = -2;
      }
      else if (ROC_15 != DBL_MISSING_VALUE) {
        if (ROC_15 <= -7.6539504528) node = -3;
        else node = -2;
      }
      else if (WORD85 != DBL_MISSING_VALUE) {
        if (WORD85 <= 6.5) node = -2;
        else node = -3;
      }
      else if (GBP != DBL_MISSING_VALUE) {
        if (GBP <= -0.00998526718467) node = -3;
        else node = -2;
      }
      else if (CAD != DBL_MISSING_VALUE) {
        if (CAD <= -0.00578625802882) node = -3;
        else node = -2;
      }
      else if (FTSE != DBL_MISSING_VALUE) {
        if (FTSE <= 0.0174599895254) node = -2;
        else node = -3;
      }
      else if (GSPC != DBL_MISSING_VALUE) {
        if (GSPC <= 0.0166903575882) node = -2;
        else node = -3;
      }
      else if (IXIC != DBL_MISSING_VALUE) {
        if (IXIC <= 0.0188044104725) node = -2;
        else node = -3;
      }
      else if (NYSE != DBL_MISSING_VALUE) {
        if (NYSE <= 0.0174433207139) node = -2;
        else node = -3;
      }
      else if (FTSE_F != DBL_MISSING_VALUE) {
        if (FTSE_F <= 1.73500001431) node = -2;
        else node = -3;
      }
      else if (NASDAQ_F != DBL_MISSING_VALUE) {
        if (NASDAQ_F <= 1.60500001907) node = -2;
        else node = -3;
      }
      else if (WORD32 != DBL_MISSING_VALUE) {
        if (WORD32 <= 18.5) node = -2;
        else node = -3;
      }
      else if (WORD142 != DBL_MISSING_VALUE) {
        if (WORD142 <= 2.5) node = -2;
        else node = -3;
      }
      else if (EMA200DELT != DBL_MISSING_VALUE) {
        if (EMA200DELT <= 33.1195411682) node = -2;
        else node = -3;
      }
      else if (EUR != DBL_MISSING_VALUE) {
        if (EUR <= -1.15999996662) node = -3;
        else node = -2;
      }
      else if (EMA_20 != DBL_MISSING_VALUE) {
        if (EMA_20 <= 11965.7558594) node = -3;
        else node = -2;
      }
      else if (NYSEDELTA != DBL_MISSING_VALUE) {
        if (NYSEDELTA <= 0.0152135724202) node = -2;
        else node = -3;
      }
      else if (NIKKEI_FDE != DBL_MISSING_VALUE) {
        if (NIKKEI_FDE <= 4.29000020027) node = -2;
        else node = -3;
      }
      else if (BRENTDELTA != DBL_MISSING_VALUE) {
        if (BRENTDELTA <= 5.50999999046) node = -2;
        else node = -3;
      }
      else if (DTB6 != DBL_MISSING_VALUE) {
        if (DTB6 <= 0.0299999993294) node = -3;
        else node = -2;
      }
      else if (DBAA != DBL_MISSING_VALUE) {
        if (DBAA <= 4.46499991417) node = -3;
        else node = -2;
      }
      else if (TE6 != DBL_MISSING_VALUE) {
        if (TE6 <= 0.234999999404) node = -2;
        else node = -3;
      }
      else if (COPPER_F != DBL_MISSING_VALUE) {
        if (COPPER_F <= -2.93999993801) node = -3;
        else node = -2;
      }
      else if (WORD37 != DBL_MISSING_VALUE) {
        if (WORD37 <= 17.5) node = -2;
        else node = -3;
      }
      else if (WORD54 != DBL_MISSING_VALUE) {
        if (WORD54 <= 10.5) node = -2;
        else node = -3;
      }
      else if (WORD56 != DBL_MISSING_VALUE) {
        if (WORD56 <= 0.5) node = -3;
        else node = -2;
      }
      else if (WFCDELTA != DBL_MISSING_VALUE) {
        if (WFCDELTA <= 0.0180189525709) node = -2;
        else node = -3;
      }
      else if (WIT_OILDEL != DBL_MISSING_VALUE) {
        if (WIT_OILDEL <= 3.57000005245) node = -2;
        else node = -3;
      }
      else if (CNYDELTA != DBL_MISSING_VALUE) {
        if (CNYDELTA <= -0.0229470999911) node = -3;
        else node = -2;
      }
      else if (CADDELTA != DBL_MISSING_VALUE) {
        if (CADDELTA <= -0.0229470999911) node = -3;
        else node = -2;
      }
      else if (JPYDELTA != DBL_MISSING_VALUE) {
        if (JPYDELTA <= -0.0229470999911) node = -3;
        else node = -2;
      }
      else if (GBPDELTA != DBL_MISSING_VALUE) {
        if (GBPDELTA <= -0.0229470999911) node = -3;
        else node = -2;
      }
      else if (OPEN != DBL_MISSING_VALUE) {
        if (OPEN <= 10516.300293) node = -3;
        else node = -2;
      }
      else if (MOM1 != DBL_MISSING_VALUE) {
        if (MOM1 <= 0.0161629728973) node = -2;
        else node = -3;
      }
      else if (WORD101 != DBL_MISSING_VALUE) {
        if (WORD101 <= 3.5) node = -2;
        else node = -3;
      }
      else if (EMA_10 != DBL_MISSING_VALUE) {
        if (EMA_10 <= 12023.9291992) node = -3;
        else node = -2;
      }
      else if (DE2 != DBL_MISSING_VALUE) {
        if (DE2 <= 3.26499998569) node = -2;
        else node = -3;
      }
      else if (LOW != DBL_MISSING_VALUE) {
        if (LOW <= 10834.4248047) node = -3;
        else node = -2;
      }
      else if (WORD51 != DBL_MISSING_VALUE) {
        if (WORD51 <= 8.5) node = -2;
        else node = -3;
      }
      else if (AIDDELTA != DBL_MISSING_VALUE) {
        if (AIDDELTA <= -2.52000004053) node = -3;
        else node = -2;
      }
      else if (CTB3MDELTA != DBL_MISSING_VALUE) {
        if (CTB3MDELTA <= -0.833333343267) node = -3;
        else node = -2;
      }
      else if (WORD144 != DBL_MISSING_VALUE) {
        if (WORD144 <= 3.5) node = -2;
        else node = -3;
      }
      else if (TE5DELTA != DBL_MISSING_VALUE) {
        if (TE5DELTA <= 0.054999999702) node = -2;
        else node = -3;
      }
      else if (JNJDELTA != DBL_MISSING_VALUE) {
        if (JNJDELTA <= 0.0282632196322) node = -2;
        else node = -3;
      }
      else if (DTB6DELTA != DBL_MISSING_VALUE) {
        if (DTB6DELTA <= 0.0699999984354) node = -2;
        else node = -3;
      }
      else if (DTB4WKDELT != DBL_MISSING_VALUE) {
        if (DTB4WKDELT <= -0.0999999977648) node = -3;
        else node = -2;
      }
      else if (DGS5 != DBL_MISSING_VALUE) {
        if (DGS5 <= 0.314999997616) node = -3;
        else node = -2;
      }
      else if (DGS10 != DBL_MISSING_VALUE) {
        if (DGS10 <= 0.759999990463) node = -3;
        else node = -2;
      }
      else if (WORD166 != DBL_MISSING_VALUE) {
        if (WORD166 <= 4.5) node = -2;
        else node = -3;
      }
      else if (DAAA != DBL_MISSING_VALUE) {
        if (DAAA <= 1.70000004768) node = -3;
        else node = -2;
      }
      else if (WFC != DBL_MISSING_VALUE) {
        if (WFC <= 0.0567939132452) node = -2;
        else node = -3;
      }
      else if (WORD133 != DBL_MISSING_VALUE) {
        if (WORD133 <= 3.5) node = -2;
        else node = -3;
      }
      else if (TE1 != DBL_MISSING_VALUE) {
        if (TE1 <= 0.699999988079) node = -3;
        else node = -2;
      }
      else if (TE2 != DBL_MISSING_VALUE) {
        if (TE2 <= 0.680000007153) node = -3;
        else node = -2;
      }
      else if (TE3 != DBL_MISSING_VALUE) {
        if (TE3 <= 0.615000009537) node = -3;
        else node = -2;
      }
      else if (DE1 != DBL_MISSING_VALUE) {
        if (DE1 <= 0.264999985695) node = -3;
        else node = -2;
      }
      else if (DE4 != DBL_MISSING_VALUE) {
        if (DE4 <= 2.04500007629) node = -3;
        else node = -2;
      }
      else if (DE5 != DBL_MISSING_VALUE) {
        if (DE5 <= 2.125) node = -3;
        else node = -2;
      }
      else if (DE6 != DBL_MISSING_VALUE) {
        if (DE6 <= 2.14499998093) node = -3;
        else node = -2;
      }
      else if (CTB3M != DBL_MISSING_VALUE) {
        if (CTB3M <= -0.6875) node = -3;
        else node = -2;
      }
      else if (KOSPI_F != DBL_MISSING_VALUE) {
        if (KOSPI_F <= 3.86500000954) node = -2;
        else node = -3;
      }
      else if (NIKKEI_F != DBL_MISSING_VALUE) {
        if (NIKKEI_F <= 3.05999994278) node = -2;
        else node = -3;
      }
      else if (NZD != DBL_MISSING_VALUE) {
        if (NZD <= 1.87000000477) node = -2;
        else node = -3;
      }
      else if (WHEAT_F != DBL_MISSING_VALUE) {
        if (WHEAT_F <= -8.33999991417) node = -3;
        else node = -2;
      }
      else if (XAU != DBL_MISSING_VALUE) {
        if (XAU <= -4.92000007629) node = -3;
        else node = -2;
      }
      else if (WORD1 != DBL_MISSING_VALUE) {
        if (WORD1 <= 141.5) node = -2;
        else node = -3;
      }
      else if (WORD5 != DBL_MISSING_VALUE) {
        if (WORD5 <= 105) node = -2;
        else node = -3;
      }
      else if (WORD25 != DBL_MISSING_VALUE) {
        if (WORD25 <= 58.5) node = -2;
        else node = -3;
      }
      else if (WORD104 != DBL_MISSING_VALUE) {
        if (WORD104 <= 7.5) node = -2;
        else node = -3;
      }
      else if (WORD105 != DBL_MISSING_VALUE) {
        if (WORD105 <= 4.5) node = -2;
        else node = -3;
      }
      else if (WORD40 != DBL_MISSING_VALUE) {
        if (WORD40 <= 32.5) node = -2;
        else node = -3;
      }
      else if (WORD47 != DBL_MISSING_VALUE) {
        if (WORD47 <= 15.5) node = -2;
        else node = -3;
      }
      else if (WORD107 != DBL_MISSING_VALUE) {
        if (WORD107 <= 5.5) node = -2;
        else node = -3;
      }
      else if (WORD70 != DBL_MISSING_VALUE) {
        if (WORD70 <= 20.5) node = -2;
        else node = -3;
      }
      else if (WORD77 != DBL_MISSING_VALUE) {
        if (WORD77 <= 7.5) node = -2;
        else node = -3;
      }
      else if (WORD150 != DBL_MISSING_VALUE) {
        if (WORD150 <= 1.5) node = -2;
        else node = -3;
      }
      else if (WHEAT_FDEL != DBL_MISSING_VALUE) {
        if (WHEAT_FDEL <= -6.15499997139) node = -3;
        else node = -2;
      }
      else if (DTB3DELTA != DBL_MISSING_VALUE) {
        if (DTB3DELTA <= -0.0449999999255) node = -3;
        else node = -2;
      }
      else if (AUD != DBL_MISSING_VALUE) {
        if (AUD <= 1.16500002146) node = -2;
        else node = -3;
      }
      else if (HSI_F != DBL_MISSING_VALUE) {
        if (HSI_F <= -2.10500001907) node = -3;
        else node = -2;
      }
      else if (WORD83 != DBL_MISSING_VALUE) {
        if (WORD83 <= 6.5) node = -2;
        else node = -3;
      }
      else if (WORD13 != DBL_MISSING_VALUE) {
        if (WORD13 <= 25.5) node = -2;
        else node = -3;
      }
      else if (WORD45 != DBL_MISSING_VALUE) {
        if (WORD45 <= 12.5) node = -2;
        else node = -3;
      }
      else if (MSFTDELTA != DBL_MISSING_VALUE) {
        if (MSFTDELTA <= 0.0187633167952) node = -2;
        else node = -3;
      }
      else if (XAG != DBL_MISSING_VALUE) {
        if (XAG <= 1.56999999285) node = -2;
        else node = -3;
      }
      else if (S_P_FDELTA != DBL_MISSING_VALUE) {
        if (S_P_FDELTA <= 1.84500002861) node = -2;
        else node = -3;
      }
      else if (WORD21 != DBL_MISSING_VALUE) {
        if (WORD21 <= 4.5) node = -3;
        else node = -2;
      }
      else if (WORD71 != DBL_MISSING_VALUE) {
        if (WORD71 <= 6.5) node = -2;
        else node = -3;
      }
      else if (HIGH != DBL_MISSING_VALUE) {
        if (HIGH <= 12257.7451172) node = -3;
        else node = -2;
      }
      else if (EMA_50 != DBL_MISSING_VALUE) {
        if (EMA_50 <= 12071.1860352) node = -3;
        else node = -2;
      }
      else if (RUTDELTA != DBL_MISSING_VALUE) {
        if (RUTDELTA <= 0.0202460335568) node = -2;
        else node = -3;
      }
      else if (GSPCDELTA != DBL_MISSING_VALUE) {
        if (GSPCDELTA <= 0.0154226655141) node = -2;
        else node = -3;
      }
      else if (GOLDDELTA != DBL_MISSING_VALUE) {
        if (GOLDDELTA <= 0.017526130192) node = -2;
        else node = -3;
      }
      else if (MOMDELTA != DBL_MISSING_VALUE) {
        if (MOMDELTA <= 0.0155501067638) node = -2;
        else node = -3;
      }
      else if (WORD48 != DBL_MISSING_VALUE) {
        if (WORD48 <= 1.5) node = -3;
        else node = -2;
      }
      else if (WORD86 != DBL_MISSING_VALUE) {
        if (WORD86 <= 0.5) node = -3;
        else node = -2;
      }
      else if (JPY != DBL_MISSING_VALUE) {
        if (JPY <= 6.25) node = -2;
        else node = -3;
      }
      else if (BRENT != DBL_MISSING_VALUE) {
        if (BRENT <= -3.59000003338) node = -3;
        else node = -2;
      }
      else if (WIT_OIL != DBL_MISSING_VALUE) {
        if (WIT_OIL <= -3.54499995708) node = -3;
        else node = -2;
      }
      else if (GOLD_F != DBL_MISSING_VALUE) {
        if (GOLD_F <= 3.56500005722) node = -2;
        else node = -3;
      }
      else if (WORD98 != DBL_MISSING_VALUE) {
        if (WORD98 <= 6.5) node = -2;
        else node = -3;
      }
      else if (WORD113 != DBL_MISSING_VALUE) {
        if (WORD113 <= 3.5) node = -2;
        else node = -3;
      }
      else if (WORD14 != DBL_MISSING_VALUE) {
        if (WORD14 <= 3) node = -3;
        else node = -2;
      }
      else if (WORD24 != DBL_MISSING_VALUE) {
        if (WORD24 <= 22.5) node = -2;
        else node = -3;
      }
      else if (WORD29 != DBL_MISSING_VALUE) {
        if (WORD29 <= 0.5) node = -3;
        else node = -2;
      }
      else if (WORD30 != DBL_MISSING_VALUE) {
        if (WORD30 <= 1.5) node = -3;
        else node = -2;
      }
      else if (WORD43 != DBL_MISSING_VALUE) {
        if (WORD43 <= 0.5) node = -3;
        else node = -2;
      }
      else if (WORD55 != DBL_MISSING_VALUE) {
        if (WORD55 <= 10.5) node = -2;
        else node = -3;
      }
      else if (WORD57 != DBL_MISSING_VALUE) {
        if (WORD57 <= 0.5) node = -3;
        else node = -2;
      }
      else if (WORD88 != DBL_MISSING_VALUE) {
        if (WORD88 <= 5.5) node = -2;
        else node = -3;
      }
      else if (WORD69 != DBL_MISSING_VALUE) {
        if (WORD69 <= 10) node = -2;
        else node = -3;
      }
      else if (WORD84 != DBL_MISSING_VALUE) {
        if (WORD84 <= 6.5) node = -2;
        else node = -3;
      }
      else node = -2; /* default direction */
      break;

    case -2:
      target = 0;
      prob[0] = 1.0000000;
      prob[1] = 0.0000000;
      node = 2;
      done = 1;
      break;

    case -3:
      target = 1;
      prob[0] = 0.0000000;
      prob[1] = 1.0000000;
      node = 3;
      done = 1;
      break;

    default:
      /* error */
      done = 1;
      node = 0;
      break;

  }
  if (pTerminalNodeNumber) *pTerminalNodeNumber = node;
  return(target);
}

/***************************
 * CALL EACH TREE EXPLICITLY
 ***************************/

void grove()
{
  int terminal_node_number;

  Tree_1(&terminal_node_number);

  return;
}
