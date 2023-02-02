#include<stdio.h> /* introduce header file */

int main(void) /* initalize program, set main to void to begin */
{
  int count; /* declares count as an int variable */
  count = 0; /* sets counts value to 0 */
  while (count <= 49) /* states that while counts value is less than or = to 49, it will loop */
  {
    count = count + 1; /* assigns 1 to count */
    
    if (count % 3 == 0 && count % 5 == 0) /* says that if could is divisible by 3 without remainder and divisible by 5 without remainder then to execute the following */
      printf("Fizz Buzz, "); /* prints fizz buzz if the above is true */
    else /* if the above if is false, then what follows will be executed */
      
    if (count % 3 == 0) /* says that if count is divisible by 3 without remainder then to execute the following */
      printf( "Fizz, " ); /* prints Fizz if the above is true */
    else /* if neither of the above if statements are true then the following if will execute */
      
    if (count % 5 == 0) /* says that if count is divsible by 5 without remaineder then to execute the following */
      printf("Buzz, " ); /* if the above is true, then Buzz will be printed */
    else /* if none of the if statements above this were true, then the following will execute */
      printf("%d, ", count); /* prints the current value of count. this will only occur if no other conditions from above were met */
  }
   return 0; /* returns 0 to funciton, ends program */
}
