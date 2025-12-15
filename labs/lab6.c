//  
// CS1050 Spring 2023
// Lab 6 
// March 3, 2023

#include<stdio.h> //processor directive

 int main(void) //initalizes main and program can begin
 {
     int array1[50]; //initalzies array of int type to size 50

     for (int i = 0; i<50; i++) //first for loop assigns values to array, looking to store only even numbers
     {
         array1[i] = (2 + 2 * i) - 2; //this is achieved by taking i and * it by 2 + 2, this works, except for 0, so 2 is subtracted to start this       at 0
     }

     printf("Array1 elements:\n");

     for (int a = 0; a < 50; a++) //second for loop prints array place and value stored in place
     {
         printf("array1[%d] = %d, ", a, array1[a]);
     }

    int sumEven = 0; //the following variables are set to store the total of even and odd arrays as int and the averages as float type
    float even = 0.00;

    int sumOdd = 0;
    float odd = 0.00;

    for (int b = 0; b < 50; b += 2) //third for loop evaulates total of even numbered array values and accomplishes it by incrementing by 2
    {
        sumEven = sumEven + array1[b]; //adds even arrays to sum 
    }

    for (int c = -1; c < 50; c += 2) //fourth for loop evaualted total of odd numbered array values, accomplished by started at -1 and incrementing      by 2
    {
        sumOdd = sumOdd + array1[c]; //adds odd arrays to sub
    }

    even = sumEven / 25; //calculates even average, by dividing average by 25 because there are only 25 even numbers in the array
    printf("\nTotal of array1 even-indexed elements = %d, average = %.2f\n", sumEven, even); //prints output of total and avg


    odd = sumOdd / 25; //calculated odd average, by dividing average by 25 because there are only 25 odd numbers in array
    printf("Total of array1 odd-indexed elements = %d, average = %.2f\n", sumOdd, odd); //prints output of total and avg

    return 0; //returns 0 to main to end program :)
}
