  1 // CS1050
  2 // SPRING 2023
  3 // LAB 5
  4 // Corbin Shanks (cwswgv)
  5 // February 24th, 2023
  6 
  7 //Lab 5 Objective: write a function that is to be called in main that can determine if any n is prime
  8 
  9 #include<stdio.h> //preprocessor directive
 10 
 11 int IsPrime(int n) //function definition and function declaration (given call line)
 12 {
 13     int i = 2; //initalizes i to 2, which will be the increment counter for any given n
 14 
 15     while (i <= n/2) //looks at any n, when it is divisible by 2 and less > than i, because if n is / 2 then its not prime (other than when n is 2)
 16     {
 17         if (n % i == 0) //if n is divisible by i with no remainder, then it is not prime, returns 0
 18         {
 19             return 0;
 20         }
 21         else //if the above condition fails, i is incremented
 22         {
 23             i++;
 24         }
 25     }
 26     return 1; //if none of the above is met, n is prime and 1 is returned
 27 }
 28 
 29 int main(void) //initalizes main to begin program
 30 {
 31     int n; //initalizes n as our number to loop and evaulate in above function
 32 
 33     for (n = 2; n<=100; n++) //sets n to 2 (1 cant be prime), loops until 100, and increments each time
 34     {
 35         if (IsPrime(n) == 1) //if function returns 1, n is prime and n is printed with a space. 
 36         printf("%d ", n); //no need for an else to evaulate when n is not prime because output does not call for it
 37     }
 38 
 39     return 0; //returns 0 to main to end main program
 40 }                                                                                                                           
