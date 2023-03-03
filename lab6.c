  1 // Corbin Shanks (cwswgv)
  2 // CS1050 Spring 2023
  3 // Lab 6 
  4 // March 3, 2023
  5 
  6 #include<stdio.h> //processor directive
  7 
  8  int main(void) //initalizes main and program can begin
  9  {
 10      int array1[50]; //initalzies array of int type to size 50
 11 
 12      for (int i = 0; i<50; i++) //first for loop assigns values to array, looking to store only even numbers
 13      {
 14          array1[i] = (2 + 2 * i) - 2; //this is achieved by taking i and * it by 2 + 2, this works, except for 0, so 2 is subtracted to start this       at 0
 15      }
 16 
 17      printf("Array1 elements:\n");
 18 
 19      for (int a = 0; a < 50; a++) //second for loop prints array place and value stored in place
 20      {
 21          printf("array1[%d] = %d, ", a, array1[a]);
 22      }
 23 
 24     int sumEven = 0; //the following variables are set to store the total of even and odd arrays as int and the averages as float type
 25     float even = 0.00;
 26 
 27     int sumOdd = 0;
 28     float odd = 0.00;
 29 
 30     for (int b = 0; b < 50; b += 2) //third for loop evaulates total of even numbered array values and accomplishes it by incrementing by 2
 31     {
 32         sumEven = sumEven + array1[b]; //adds even arrays to sum 
 33     }
 34 
 35     for (int c = -1; c < 50; c += 2) //fourth for loop evaualted total of odd numbered array values, accomplished by started at -1 and incrementing      by 2
 36     {
 37         sumOdd = sumOdd + array1[c]; //adds odd arrays to sub
 38     }
 39 
 40     even = sumEven / 25; //calculates even average, by dividing average by 25 because there are only 25 even numbers in the array
 41     printf("\nTotal of array1 even-indexed elements = %d, average = %.2f\n", sumEven, even); //prints output of total and avg
 42 
 43 
 44     odd = sumOdd / 25; //calculated odd average, by dividing average by 25 because there are only 25 odd numbers in array
 45     printf("Total of array1 odd-indexed elements = %d, average = %.2f\n", sumOdd, odd); //prints output of total and avg
 46 
 47     return 0; //returns 0 to main to end program :)
 48 }
