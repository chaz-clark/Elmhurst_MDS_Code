/* Data Dictionary, Number Of Variables = 8 */
/*    Name = JOBROLE, Type = categorical. */
/*    Name = OVERTIME, Type = categorical. */
/*    Name = ENVIRONMENTSATISFACTION, Type = continuous. */
/*    Name = JOBINVOLVEMENT, Type = continuous. */
/*    Name = JOBLEVEL, Type = continuous. */
/*    Name = JOBSATISFACTION, Type = continuous. */
/*    Name = STOCKOPTIONLEVEL, Type = continuous. */
/*    Name = TOTALWORKINGYEARS, Type = continuous. */

 BF2 = max( 0, 3 - TOTALWORKINGYEARS);
 BF3 = ( OVERTIME$ in ( "Yes" ) );
 BF6 = max( 0, 2 - JOBLEVEL) * BF3;
 BF8 = max( 0, 1 - STOCKOPTIONLEVEL);
 BF9 = ( JOBROLE$ in ( "Research Scientist", "Manufacturing Director", "Healthcare Representative", "Manager", "Research Director" ) ) * BF3;
 BF12 = max( 0, 3 - JOBINVOLVEMENT) * BF8;
 BF13 = max( 0, JOBSATISFACTION - 1) * BF8;
 BF15 = max( 0, 3 - ENVIRONMENTSATISFACTION) * BF3;

 Y = 0.0485894 + 0.131488 * BF2 + 0.332566 * BF6 + 0.181969 * BF8
               - 0.114741 * BF9 + 0.11508 * BF12 - 0.0640886 * BF13
               + 0.159002 * BF15;

 MODEL ATTRITION$ = BF2 BF6 BF8 BF9 BF12 BF13 BF15;

