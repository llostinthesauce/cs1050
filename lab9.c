  1 //////////////////////////
  2 //CS 1050
  3 //LAB 9
  4 //Corbin Shanks (cwswgv)
  5 //April 7, 2023
  6 //////////////////////////
  7 
  8 #include <stdio.h>
  9 #include <string.h> //header files
 10 
 11 int getInt() //funciton that gets the int between 1 and 5 to be used later
 12 {
 13     int swap;
 14 
 15     do {
 16         printf("Enter a swap distance: ");
 17         scanf("%d", &swap); }
 18     while (swap <= 1 || swap >= 5);
 19     {
 20         return swap;
 21     }
 22 }
 23 
 24 void getString(char * a) //function that gets the string from the user with parameters
 25 {
 26     do {
 27         printf("Enter a string between 20 and 40 characters: ");
 28         scanf("%40s", a); }
 29     while (strlen(a) <= 20 || strlen(a) >= 40);
 30 
 31     printf("You entered: %s\n", a);
 32 }
 33 
 34 void swapString (char * a, int n) //function that swaps string with int (i am aware this is not working properly) 
 35 {
 36     int length = strlen(a);
 37     n = 2;
 38 
 39     for (int i = 0; i < length - n; i += n)
 40     {
 41         char temp = a[i];
 42         a[i] = a[i+n];
 43         a[i+n] = temp;
 44     }
 45 
 46     printf("manipulated string is: %s\n", a);
 47 }
 48 
 49 ///////////////////////////////////////////
 50 
 51 int main(void)
 52 {
 53     printf("Welcome to Lab 9!\n"); //main just calls all three functions and terminates
 54 
 55     char a[40];
 56     int n = 0;
 57 
 58     getString(a);
 59     getInt();
 60     swapString(a,n);
 61 
 62     printf("Thanks for doing lab 9\n");
 63 
 64 }
