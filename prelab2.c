/* prelab test code */
/* manipulating integers using input to make an output */

#include<stdio.h> /* includes header file so that phrases know where they are */

int main(void) /* function main begins program execution */
{
  int a; /* define four varibles of integer type, for later use */
  int b;
  int c;
  int d;
  
  int sum; /* define six more placeholder variables to be used later for manipulation */
  int product;
  int integerq;
  int integerr;
  int product1;
  int sum1;
  
  printf(" \n"); /* outputs blank space */
  printf("Enter 4 integers (A,B,C,D) seperated by spaces: "); /* outputs statement, asking for input     of int type */
  scanf("%d%d%d%d",&a,&b,&c,&d); /* scans for input and stores in respective varible */
  
  sum = b + c; /* manipulate input using below formulas, and stores info in respective varible */
  product = a*d;
  integerq = a / c;
  integerr = c % d;
  product1 = a*c;
  sum1 = b + d;
  
  printf("*** Intitial Values ***\n"); /* outputs initial values */
  printf("A = %d\n", a);
  printf("B = %d\n", b);
  printf("C = %d\n", c);
  printf("D = %d\n", d);
  
  printf(" \n"); /* outputs blank space */
  
  printf("*** Calculated Values ***\n"); /* outputs manipulated values */
  printf("The sum of B and C =  %d\n", sum); 
  printf("The product of A and D =  %d\n", product); 
  printf("The integer quotient of A divided by C =  %d\n", integerq); 
  printf("The integer remainder of C divided by D =  %d\n", integerr); 
  printf("The product of A and C divided by the quantity sum of B and D =  %d\n", product1 / sum1); 
  
  printf(" \n"); /* outputs blank space */ 
  
  return 0; /* returns 0, ends program execution */
}
