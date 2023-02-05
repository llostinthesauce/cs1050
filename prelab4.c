  1 /* prelab 4, corbin shanks, cs1050, 5 feb 2023, printing 1-10 with a switch or ternary operator */
  2 
  3 #include<stdio.h>
  4 
  5 int main(void)
  6 
  7 {
  8     int base = 11;
  9 
 10     while (base >= 0)
 11     {
 12        --base;
 13         switch (base)
 14             {
 15                 case 10:
 16                     printf("ten ");
 17                     break;
 18                 case 9:
 19                     printf("nine ");
 20                     break;
 21                 case 8:
 22                     printf("eight ");
 23                     break;
 24                 case 7:
 25                     printf("seven ");
 26                     break;
 27                 case 6:
 28                     printf("six ");
 29                     break;
 30                 case 5:
 31                     printf("five ");
 32                     break;
 33                 case 4:
 34                     printf("four ");
 35                     break;
 36                 case 3:
 37                     printf("three ");
 38                     break;
 39                 case 2:
 40                     printf("two ");
 41                     break;
 42                 case 1:
 43                     printf("one ");
 44                     break;
 45             }
 46     }
 47 
 48 return(0);
 49 
 50 }
