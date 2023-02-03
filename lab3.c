  1 /* CS1050 1050
  2 * SP 2023
  3 * * Lab 3
  4 * * By Corbin Shanks (cwswgv)
  5 * * Febuary 3, 2023
  6 * *****************************************************************************/
  7 
  8 #include<stdio.h> /* include header file so that the program knows where to call */
  9 
 10 int main(void) /* initalizes main to begin program */
 11 {
 12     int count; /* declares count as int type vartiable */
 13     count = 101; /* sets count to 101 */
 14 
 15     while (count > 1) /* while count is greater than 1, loop the following code */
 16     {
 17         count = count - 2; /* decrements count by 2 so that even numbers are filters */
 18 
 19         if (count % 3 == 0 && count % 7 == 0) /* says that if count is div by 3 and 7 then to print TS and current */
 20         {
 21             printf("TS%d ", count); /* prints if true */
 22         }
 23         else  if (count % 3 == 0) /* if the above statement was false, then this will check for just / 3 */
 24         {
 25             printf("T%d " , count); /* prints if true */
 26         }
 27         else  if (count % 7 == 0) /* if neither of the above are true then checks if count is / by 7 */
 28         {
 29             printf("S%d ", count ); /* prints if true */
 30         }
 31         else
 32             printf("%d ", count); /* prints count if none of the above are satisfied */
 33 
 34         }
 35     return 0; /* retuns main to 0 to end program */
 36 }
