  1 // CS1050
  2 // Spring 2023
  3 // Lab 6 
  4 // Corbin Shanks (cwswgv)
  5 // March 3, 2023
  6 
  7 #include<stdio.h> //processor directive
  8 
  9  int main(void) //initalizes main and program can begin
 10  {
 11      int array1[50]; //initalzies array of int type to size 50
 12 
 13      for (int i = 0; i<50; i++) //first for loop assigns values to array, looking to store only even numbers
 14      {
 15          array1[i] = (2 + 2 * i) - 2; //this is achieved by taking i and * it by 2 + 2, this works, except for 0, so 2 is subtracted to start this at 0
 16      }
 17 
 18      printf("Array1 elements:\n");
 19 
 20      for (int a = 0; a < 50; a++) //second for loop prints array place and value stored in place
 21      {
 22          printf("array1[%d] = %d, ", a, array1[a]);
 23      }
 24 
 25     int sumEven = 0; //the following variables are set to store the total of even and odd arrays as int and the averages as float type
 26     float even = 0.00;
 27 
 28     int sumOdd = 0;
 29     float odd = 0.00;
 30 
 31     for (int b = 0; b < 50; b += 2) //third for loop evaulates total of even numbered array values and accomplishes it by incrementing by 2
 32     {
 33         sumEven = sumEven + array1[b]; //adds even arrays to sum 
 34     }
 35 
 36     for (int c = -1; c < 50; c += 2) //fourth for loop evaualted total of odd numbered array values, accomplished by started at -1 and incrementing by 2
 37     {
 38         sumOdd = sumOdd + array1[c]; //adds odd arrays to sub
 39     }
 40 
 41     even = sumEven / 25; //calculates even average, by dividing average by 25 because there are only 25 even numbers in the array
 42     printf("\nTotal of array1 even-indexed elements = %d, average = %.2f\n", sumEven, even); //prints output of total and avg
 43 
 44 
 45     odd = sumOdd / 25; //calculated odd average, by dividing average by 25 because there are only 25 odd numbers in array
 46     printf("Total of array1 odd-indexed elements = %d, average = %.2f\n", sumOdd, odd); //prints output of total and avg
 47 
 48     return 0; //returns 0 to main to end program :)
 49 }
