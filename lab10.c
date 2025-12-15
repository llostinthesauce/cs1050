/*
 * CS1050
 * Spring 2023, April 14th
 * Lab 10
 * by  
 */

// includes
#include <stdio.h>
#include <ctype.h>

// Symbolic Constants
#define S1 "1, 2, 3, 4 tell me that you love me more.  Sleepless long nights, that is what my youth was for."
#define S2 "\t99 dreams I have had.  In every 1 a red balloon."
#define S3 "And you'll start cryin' 96 tears."
#define S4 "I demand the sum of.....$1,000,000.00!"
#define STRINGCOUNT 4

// Prototypes

char * Filter(char *s)
{
////start of punct check filter
    int n = 0;

    for (int i = 0; s[i] != '\0'; i++) //loops thru each spot in string until null
    {
        int x = s[i];
        if (ispunct(x) == 0) //uses ispunct function to check if space has punct, if so removes it
        {
            s[n] = s[i];
            n++;
        }
    }
    s[n] = '\0'; //sets last spot to null terminaton

 ////start of upper to lower and lower to upper filter

    for (int c = 0; s[c] != '\0'; c++) //loops thru each spot in string until null
    {
        if (islower(s[c]) == 0) //uses is lower to check if spot is lowercase
        {
            s[c] = tolower(s[c]); //makes switch
        }

        else if (isupper(s[c]) == 0) //uses is upper to check if spot is uppercase 
        {
            s[c] = toupper(s[c]); //makes switch
        }
    }

    return s; //returns manipulated string
}

// Main
int main(void)
{
    char s[STRINGCOUNT][256]=
    {
        S1,S2,S3,S4,
    };

    printf("**** Original Strings ****\n");
    for (int i=0;i<STRINGCOUNT;i++)
    {
        printf("#%d: %s\n",i,s[i]);
    }

    printf("\n\n**** Strings after filtering ****\n");
    for (int i=0;i<STRINGCOUNT;i++)
    {
        printf("#%d: %s\n",i,Filter(s[i]));
    }
}
