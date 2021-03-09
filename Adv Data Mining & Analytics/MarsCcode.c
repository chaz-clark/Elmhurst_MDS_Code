
/************************************************************
 * The following C source code was automatically generated
 * by the TRANSLATE feature in Salford Predictive Modeler(R).
 * Modeling version: 8.3.2.001, Translation version: 8.3.2.001
 ************************************************************/

#include <string.h>  /* for strcmp() */

#define max(A,B) ((A) > (B) ? (A) : (B))

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

double S_P_FDELTA, ROC20DELTA, DJI_F;
/* MARS version: 8.3.2.001 */
/* Model: MARS_1 */
/* Grove: C:\Users\CHAZIN~1\AppData\Local\Temp\v6ik_00087.grv */
/* Target: CLOSEDELTA */

double MARS_1() {

 double BF1 = max( 0, ROC20DELTA + 0.456916);
 double BF2 = max( 0, -0.456916 - ROC20DELTA);
 double BF4 = max( 0, 0.5 - S_P_FDELTA);
 double BF6 = max( 0, 0.77 - DJI_F);

 double  Y = -0.188062 + 0.246818 * BF1 + 0.43904 * BF2 - 0.129011 * BF4
                       + 0.122708 * BF6;
  return (Y);
}
