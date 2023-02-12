  1 /* Corbin Shanks
  2  * cwswgv
  3  * CS1050 SPRING 2023
  4  * Lab 4 - redo :(
  5  * Feb 11 2023 */
  6 
  7 #include<stdio.h>
  8 
  9 int main(void)
 10 
 11 {
 12     int base;
 13 
 14     for (base = 11; base < 100; base++) /* for sets base to 11, declares loop condition up to 100, and increments base in post */
 15     {
 16         switch (base / 10) /* checks the 10s place in all numbers, since for any # / 10 returns no remainder, easy sort */
 17         {
 18             case 2:
 19                 printf("twenty");
 20                 break;
 21 
 22             case 3:
 23                 printf("thirty");
 24                 break;
 25 
 26             case 4:
 27                 printf("fourty");
 28                 break;
 29 
 30             case 5:
 31                 printf("fifty");
 32                 break;
 33 
 34             case 6:
 35                 printf("sixty");
 36                 break;
 37 
 38             case 7:
 39                 printf("seventy");
 40                 break;
 41 
 42             case 8:
 43                 printf("eighty");
 44                 break;
 45 
 46             case 9:
 47                 printf("ninety");
 48                 break;
 49         }
 50 
 51         switch (base % 10) /* checks all numbers, this time for remainders. after division, whatever is returned is to be added to what is above */
 52         {
 53             case 0:
 54                 printf(", ");
 55                 break;
 56 
 57             case 1:
 58                 printf("%s", base==11 && base<20 ? "eleven, " : " one, ");
 59                 break;
 60 
 61             case 2:
 62                 printf("%s", base==12 && base<20 ? "twelve, " : " two, ");
 63                  break;
 64 
 65             case 3:
 66                 printf("%s", base==13 && base<20 ? "thirteen, " : " three, ");
 67                 break;
 68 
 69             case 4:
 70                 printf("%s", base==14 && base<20 ? "fourteen, " : " four, ");
 71                 break;
 72 
 73             case 5:
 74                 printf("%s", base==15 && base<20 ? "fifteen, " : " five, ");
 75                 break;
 76 
 77             case 6:
 78                 printf("%s", base==16 && base<20 ? "sixteen, " : " six, ");
 79                 break;
 80 
 81             case 7:
 82                 printf("%s", base==17 && base<20 ? "seventeen, " : " seven, ");
 83                 break;
 84 
 85             case 8:
 86                 printf("%s", base==18 && base<20 ? "eightenn, " : " eight, ");
 87                 break;
 88 
 89             case 9:
 90                 printf("%s", base==19 && base<20 ? "nineteen, " : " nine, ");
 91                 break;
 92         }
 93     }
 94     return 0;
 95 }                                                                                                                                                  
