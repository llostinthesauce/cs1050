  1 /*
  2  * CS1050
  3  * Spring 2023, April 14th
  4  * Lab 10
  5  * by Corbin Shanks (cwswgv)
  6  */
  7 
  8 // includes
  9 #include <stdio.h>
 10 #include <ctype.h>
 11 
 12 // Symbolic Constants
 13 #define S1 "1, 2, 3, 4 tell me that you love me more.  Sleepless long nights, that is what my youth was for."
 14 #define S2 "\t99 dreams I have had.  In every 1 a red balloon."
 15 #define S3 "And you'll start cryin' 96 tears."
 16 #define S4 "I demand the sum of.....$1,000,000.00!"
 17 #define STRINGCOUNT 4
 18 
 19 // Prototypes
 20 
 21 char * Filter(char *s)
 22 {
 23 ////start of punct check filter
 24     int n = 0;
 25 
 26     for (int i = 0; s[i] != '\0'; i++) //loops thru each spot in string until null
 27     {
 28         int x = s[i];
 29         if (ispunct(x) == 0) //uses ispunct function to check if space has punct, if so removes it
 30         {
 31             s[n] = s[i];
 32             n++;
 33         }
 34     }
 35     s[n] = '\0'; //sets last spot to null terminaton
 36 
 37  ////start of upper to lower and lower to upper filter
 38 
 39     for (int c = 0; s[c] != '\0'; c++) //loops thru each spot in string until null
 40     {
 41         if (islower(s[c]) == 0) //uses is lower to check if spot is lowercase
 42         {
 43             s[c] = tolower(s[c]); //makes switch
 44         }
 45 
 46         else if (isupper(s[c]) == 0) //uses is upper to check if spot is uppercase 
 47         {
 48             s[c] = toupper(s[c]); //makes switch
 49         }
 50     }
 51 
 52     return s; //returns manipulated string
 53 }
 54 
 55 // Main
 56 int main(void)
 57 {
 58     char s[STRINGCOUNT][256]=
 59     {
 60         S1,S2,S3,S4,
 61     };
 62 
 63     printf("**** Original Strings ****\n");
 64     for (int i=0;i<STRINGCOUNT;i++)
 65     {
 66         printf("#%d: %s\n",i,s[i]);
 67     }
 68 
 69     printf("\n\n**** Strings after filtering ****\n");
 70     for (int i=0;i<STRINGCOUNT;i++)
 71     {
 72         printf("#%d: %s\n",i,Filter(s[i]));
 73     }
 74 }
