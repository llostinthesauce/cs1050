/* prelab 4, cs1050, 9 feb 2023, printing 1-10 with a switch or ternary operator */

#include<stdio.h>

int main(void)

{
    int base = 11;

    do
    {
       --base;
        switch (base)
            {
                case 10:
                    printf("ten ");
                    break;
                case 9:
                    printf("nine ");
                    break;
                case 8:
                    printf("eight ");
                    break;
                case 7:
                    printf("seven ");
                    break;
                case 6:
                    printf("six ");
                    break;
                case 5:
                    printf("five ");
                    break;
                case 4:
                    printf("four ");
                    break;
                case 3:
                    printf("three ");
                    break;
                case 2:
                    printf("two ");
                    break;
                case 1:
                    printf("one ");
                    break;
            }
    }
            while (base >= 0);

return(0);

}                                                                                                                                                                                                                              
