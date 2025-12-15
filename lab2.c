/***************************************************************************** 
 * * CMP_SC 1050
 * * SP 2023
 * * Lab 2
 * * By  
 * * January 27, 2023
 * *****************************************************************************/

#include<stdio.h> /* includes header file so iostream and functions behave as they should */

int main(void) /* funciton main begins program execution */
{
    int X; /* defines varible of integer type as X */
    int Y; /* defines varible of integer type as Y */

    int product; /* defines varible product to hold arithmatic solution */
    int quotient; /* defines variable quotient to hold arithmatic solution */

    printf("Please input two numbers: "); /* outputs statement, asking for 2 inputs of int type */
    scanf("%d%d", &X, &Y); /* scans for input and stores user input into X and Y. These can now be used for       arithmatic */

    printf("X = %d, ", X); /* outputs value of X */
    printf("Y = %d\n", Y); /* outputs value of Y */

    product = X*Y; /* assigns the product of X times Y to product, to be displayed for output */
    quotient = X/Y; /* assigns the quotient of X divided by Y to quotient, to be displayed for output */

    printf("X times Y = %d\n", product); /* prints the product of X and Y */
    printf("X divided by Y = %d\n", quotient); /* prints the quotient of X and Y */
    printf("X plus 1 quantity times Y = %d\n", (X + 1)*Y); /* prints the answer of the preceding arithmatic */

    printf("X = %d, ", X); /* prints value of X */
    printf("Y = %d\n", Y); /* prints value of Y */

    return 0; /* returns int to funciton, ends program execution */
}
