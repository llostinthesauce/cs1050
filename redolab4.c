/* 
 * 
 * CS1050 SPRING 2023
 * Lab 4 - redo :(
 * Feb 11 2023 */

#include<stdio.h>

int main(void)

{
    int base;

    for (base = 11; base < 100; base++) /* for sets base to 11, declares loop condition up to 100, and increments base in post */
    {
        switch (base / 10) /* checks the 10s place in all numbers, since for any # / 10 returns no remainder, easy sort */
        {
            case 2:
                printf("twenty");
                break;

            case 3:
                printf("thirty");
                break;

            case 4:
                printf("fourty");
                break;

            case 5:
                printf("fifty");
                break;

            case 6:
                printf("sixty");
                break;

            case 7:
                printf("seventy");
                break;

            case 8:
                printf("eighty");
                break;

            case 9:
                printf("ninety");
                break;
        }

        switch (base % 10) /* checks all numbers, this time for remainders. after division, whatever is returned is to be added to what is above */
        {
            case 0:
                printf(", ");
                break;

            case 1:
                printf("%s", base==11 && base<20 ? "eleven, " : " one, ");
                break;

            case 2:
                printf("%s", base==12 && base<20 ? "twelve, " : " two, ");
                 break;

            case 3:
                printf("%s", base==13 && base<20 ? "thirteen, " : " three, ");
                break;

            case 4:
                printf("%s", base==14 && base<20 ? "fourteen, " : " four, ");
                break;

            case 5:
                printf("%s", base==15 && base<20 ? "fifteen, " : " five, ");
                break;

            case 6:
                printf("%s", base==16 && base<20 ? "sixteen, " : " six, ");
                break;

            case 7:
                printf("%s", base==17 && base<20 ? "seventeen, " : " seven, ");
                break;

            case 8:
                printf("%s", base==18 && base<20 ? "eightenn, " : " eight, ");
                break;

            case 9:
                printf("%s", base==19 && base<20 ? "nineteen, " : " nine, ");
                break;
        }
    }
    return 0;
}                                                                                                                                                  
