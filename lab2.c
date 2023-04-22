  1 /***************************************************************************** 
  2  * * CMP_SC 1050
  3  * * SP 2023
  4  * * Lab 2
  5  * * By Corbin SHanks (cwswgv)
  6  * * January 27, 2023
  7  * *****************************************************************************/
  8 
  9 #include<stdio.h> /* includes header file so iostream and functions behave as they should */
 10 
 11 int main(void) /* funciton main begins program execution */
 12 {
 13     int X; /* defines varible of integer type as X */
 14     int Y; /* defines varible of integer type as Y */
 15 
 16     int product; /* defines varible product to hold arithmatic solution */
 17     int quotient; /* defines variable quotient to hold arithmatic solution */
 18 
 19     printf("Please input two numbers: "); /* outputs statement, asking for 2 inputs of int type */
 20     scanf("%d%d", &X, &Y); /* scans for input and stores user input into X and Y. These can now be used for       arithmatic */
 21 
 22     printf("X = %d, ", X); /* outputs value of X */
 23     printf("Y = %d\n", Y); /* outputs value of Y */
 24 
 25     product = X*Y; /* assigns the product of X times Y to product, to be displayed for output */
 26     quotient = X/Y; /* assigns the quotient of X divided by Y to quotient, to be displayed for output */
 27 
 28     printf("X times Y = %d\n", product); /* prints the product of X and Y */
 29     printf("X divided by Y = %d\n", quotient); /* prints the quotient of X and Y */
 30     printf("X plus 1 quantity times Y = %d\n", (X + 1)*Y); /* prints the answer of the preceding arithmatic */
 31 
 32     printf("X = %d, ", X); /* prints value of X */
 33     printf("Y = %d\n", Y); /* prints value of Y */
 34 
 35     return 0; /* returns int to funciton, ends program execution */
 36 }
