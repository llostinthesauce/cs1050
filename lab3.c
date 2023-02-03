  1 /* CS1050
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
 13     count = 101; /* sets value in count to 101 */
 14 
 15     while (count > 1) /* while count is greater than 1, loop the following code */
 16     {
 17         count--; /* decrements count by 1, after the while loops, so that even numbers can be ignored, acting as a filter */
 18         count--; /* since count was set to 101, program required a 2nd decrement to make count -2 each loop */
 19 
 20         if (count % 3 == 0 && count % 7 == 0) /* if count % by 3 and 7 is true, then to print TS and current value of count */
 21         {
 22             printf("TS%d ", count); /* prints TS and current value of count if true */
 23         }
 24         else  if (count % 3 == 0) /* if the above statement was false, then this will check if count % 3 */
 25         {
 26             printf("T%d " , count); /* prints T and current value of count if the above is true */
 27         }
 28         else  if (count % 7 == 0) /* if neither of the above are true then checks if count %  7 without remainder */
 29         {
 30             printf("S%d ", count ); /* prints if the above is true */
 31         }
 32         else /* if none of the other conditions from above are true, then just print current value of count */
 33             printf("%d ", count); /* prints count if none of the above are satisfied */
 34    }
 35 
 36     return 0; /* retuns main to 0 to end program */
 37 }
