  1 ////////////////////////// 
  2 // CS 1050
  3 // SP 2023
  4 // LAB 8
  5 // Corbin Shanks (cwswgv)
  6 // March 17, 2023
  7 //////////////////////////
  8 
  9 #include<stdio.h> //header files direct main and access standard c library
 10 #include<limits.h>
 11 
 12 void GetIntArray(int *outputArray, int *count) //points to array delcared in main as well as defines array elements
 13 {
 14     printf("Enter the number of elements in your array:\n");
 15     scanf("%d", count);
 16 
 17     for (int i = 0; i < *count; i++)
 18     {
 19         printf("Enter Element #%d: ", i); //takes user input for array data
 20         scanf("%d", &outputArray[i]);
 21     }
 22 }
 23 
 24 void PrintArray(int array[], int count) //prints array using values gathered from getintarray and main
 25 {
 26     printf("Here are the %d elements of your array:\n", count);
 27     for (int i = 0; i < count; i++)
 28     {
 29         printf("Element %d = %d\n", i, array[i]);
 30     }
 31 }
 32 
 33 int SumArray(int *array, int count) //totals value of all array elements and returns 
 34 {
 35     int total = 0;
 36 
 37     for (int i = 0; i < count; i++)
 38     {
 39         total = total + array[i];
 40     }
 41     return total; //returns total
 42 }
 43 
 44 int MaxArray(int *array, int count) //finds max value in array elements using an if
 45 {
 46     int max = 0;
 47 
 48     for (int i = 0; i < count; i++)
 49     {
 50         if (array[i] > max)
 51         {
 52             max = array[i];
 53         }
 54     }
 55     return max; //returns max
 56 }
 57 
 58 int MinArray(int *array, int count) //finds min value in array elements using an if
 59 {
 60     int min;
 61 
 62     for (int i = 0; i < count; i++)
 63     {
 64         if (array[i] <  min)
 65         {
 66             min = array[i];
 67         }
 68     }
 69     return min; //returns min
 70 }
 71
 72 ////////////////////////////////////////////////////////////////////////////////////////////////////
 73 
 74 int main(void) //declares main to being program
 75 {
 76     int count; //declares count to be used in function calls
 77     int array[20]; //declares array to size 20 because of varying input from function (could have 5 or 10 or more)
 78 
 79     printf("************************\n"); //prints intro
 80     printf("*** Welcome to Lab 8 ***\n");
 81     printf("************************\n");
 82 
 83     GetIntArray(array, &count); //passes array and address of count into getintarray
 84     PrintArray(array, count); //passes array and count into printarray, prints
 85 
 86     printf("Total of all array elements = %d\n", SumArray(array, count)); //following calls sum, min and max 
 87     printf("The largest element = %d\n", MaxArray(array, count));
 88     printf("The smallest element = %d\n", MinArray(array, count));
 89 
 90     return 0; //returns 0 to end program :)
 91 }
