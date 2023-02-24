  1 #include <stdio.h> //preprocessor directive for standard c library
  2 #include <math.h> //presprocessor directive for math functions in c
  3 
  4 long factorial(int n) //given factorial function, unaltered
  5 {
  6     long result = 1;
  7     for(int i = n; i > 1; i--)
  8     {
  9         result = result*i;
 10     }
 11     return result;
 12 }
 13 
 14 int main() //main
 15 {
 16     double sum = 1; //due to factorial equation, this takes care of (1) + 1/1
 17 
 18     for(int base = 1; base <= 5; base++) //for loop defines base/1, loops for printf and power clause, increments
 19     {
 20         for(int fl = 1; fl < 25; fl++) //inner for loop defines var p to create factorial up to 20, increments
 21         {
 22             sum = sum + pow(base, fl)/factorial(fl); //sum = sum + pow base^p / factorial (p), covers bases up to 25
 23         }
 24 
 25     printf("e to the %d power = %.10lf\n", base, sum); //prints base and sum to 10 decimal places, 5 times
 26 
 27     sum = 1; //sets sum back to 1 for each loop, because taylor series cant work if numerator isnt correct
 28     }
 29 
 30     return 0;
 31 }
