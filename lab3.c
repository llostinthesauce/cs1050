/* CS1050
* SP 2023
* * Lab 3 
* * By  
* * Febuary 3, 2023
* *****************************************************************************/

#include<stdio.h> /* include header file so that the program knows where to call */

int main(void) /* initalizes main to begin program */
{
    int count; /* declares count as int type vartiable */
    count = 101; /* sets value in count to 101 */

    while (count > 1) /* while count is greater than 1, loop the following code */
    {
        count--; /* decrements count by 1, after the while loops, so that even numbers can be ignored, acting as a filter */
        count--; /* since count was set to 101, program required a 2nd decrement to make count -2 each loop */

        if (count % 3 == 0 && count % 7 == 0) /* if count % by 3 and 7 is true, then to print TS and current value of count */
        {
            printf("TS%d ", count); /* prints TS and current value of count if true */
        }
        else  if (count % 3 == 0) /* if the above statement was false, then this will check if count % 3 */
        {
            printf("T%d " , count); /* prints T and current value of count if the above is true */
        }
        else  if (count % 7 == 0) /* if neither of the above are true then checks if count %  7 without remainder */
        {
            printf("S%d ", count ); /* prints if the above is true */
        }
        else /* if none of the other conditions from above are true, then just print current value of count */
            printf("%d ", count); /* prints count if none of the above are satisfied */
   }

    return 0; /* retuns main to 0 to end program */
}
