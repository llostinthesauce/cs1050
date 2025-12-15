#include <stdio.h> //preprocessor directive for standard c library
#include <math.h> //presprocessor directive for math functions in c

long factorial(int n) //given factorial function, unaltered
{
    long result = 1;
    for(int i = n; i > 1; i--)
    {
        result = result*i;
    }
    return result;
}

int main //main
{
    double sum = 1; //due to factorial equation, this takes care of (1) + 1/1

    for(int base = 1; base <= 5; base++) //for loop defines base/1, loops for printf and power clause, increments
    {
        for(int fl = 1; fl < 25; fl++) //inner for loop defines var p to create factorial up to 20, increments
        {
            sum = sum + pow(base, fl)/factorial(fl); //sum = sum + pow base^p / factorial (p), covers bases up to 25
        }

    printf("e to the %d power = %.10lf\n", base, sum); //prints base and sum to 10 decimal places, 5 times

    sum = 1; //sets sum back to 1 for each loop, because taylor series cant work if numerator isnt correct
    }

    return 0;
}
