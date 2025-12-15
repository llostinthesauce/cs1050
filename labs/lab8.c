////////////////////////// 
// CS 1050
// SP 2023
// LAB 8
//  
// March 17, 2023
//////////////////////////

#include<stdio.h> //header files direct main and access standard c library
#include<limits.h>

void GetIntArray(int *outputArray, int *count) //points to array delcared in main as well as defines array elements
{
    printf("Enter the number of elements in your array:\n");
    scanf("%d", count);

    for (int i = 0; i < *count; i++)
    {
        printf("Enter Element #%d: ", i); //takes user input for array data
        scanf("%d", &outputArray[i]);
    }
}

void PrintArray(int array[], int count) //prints array using values gathered from getintarray and main
{
    printf("Here are the %d elements of your array:\n", count);
    for (int i = 0; i < count; i++)
    {
        printf("Element %d = %d\n", i, array[i]);
    }
}

int SumArray(int *array, int count) //totals value of all array elements and returns 
{
    int total = 0;

    for (int i = 0; i < count; i++)
    {
        total = total + array[i];
    }
    return total; //returns total
}

int MaxArray(int *array, int count) //finds max value in array elements using an if
{
    int max = 0;

    for (int i = 0; i < count; i++)
    {
        if (array[i] > max)
        {
            max = array[i];
        }
    }
    return max; //returns max
}

int MinArray(int *array, int count) //finds min value in array elements using an if
{
    int min;

    for (int i = 0; i < count; i++)
    {
        if (array[i] <  min)
        {
            min = array[i];
        }
    }
    return min; //returns min
}
 71
////////////////////////////////////////////////////////////////////////////////////////////////////

int main(void) //declares main to being program
{
    int count; //declares count to be used in function calls
    int array[20]; //declares array to size 20 because of varying input from function (could have 5 or 10 or more)

    printf("************************\n"); //prints intro
    printf("*** Welcome to Lab 8 ***\n");
    printf("************************\n");

    GetIntArray(array, &count); //passes array and address of count into getintarray
    PrintArray(array, count); //passes array and count into printarray, prints

    printf("Total of all array elements = %d\n", SumArray(array, count)); //following calls sum, min and max 
    printf("The largest element = %d\n", MaxArray(array, count));
    printf("The smallest element = %d\n", MinArray(array, count));

    return 0; //returns 0 to end program :)
}
