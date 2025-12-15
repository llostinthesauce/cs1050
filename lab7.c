// 
//CS150 Spring 2023
//Lab 7
//March 10, 2023

#include<stdio.h> //pre-processor directives
#define ROWS 12 //defines symbolic constants to be used in array functions
#define COLS 3
#define ROWSS 4

void PrintArrayType1(int array[][COLS]) //first printarray function looks at student grade dataset where rows are 12 and cols are 3 and prints it out
{
    for (int i = 0; i < ROWS; i++) //standard nested for loops to print
    {
        printf("Row %d: ", i);
        for (int j = 0; j < COLS; j++)
        {
            printf("%d ", array[i][j]);
        }
        printf("\n");
    }
}

void PrintArrayType2(int array[][COLS]) //second printarray function looks at the cutoff grade dataset when rows are 4 and columns are defined by the dataset
{
    for (int i = 0; i < ROWSS; i++) //standard nested for loops to print
    {
        printf("Row %d: ", i);
        for (int j = 0; j < COLS; j++)
        {
            printf("%d ", array[i][j]);
        }
        printf("\n");
    }
}

void PrintArrayGrades(int array1[][COLS], int array2[][COLS]) //third printarray looks at any student grades set in array in main and assigns the according letter grade to be printed
{
    int a = 0; //i could not figure out how to increment a value for one place in the array to be different in the same for loop so I hard coded 0-3
    int b = 1;
    int c = 2;
    int d = 3;

    for (int i = 0; i < ROWS; i++) //for loop looks at rows first, in this context this means what student
    {
        printf("Student %d: ", i);
        for (int j = 0; j < COLS; j++) //nested for loop looks at columns here, in this context this means what class (cs1050, math1500, english1000 & j loops for cols
        {
            if (array1[i][j] <= 100 && array1[i][j] >= array2[a][j]) //to assign letter grade to num grade, standard if else statments are used with && to check the next value.
                                     //this checks values from array1 (student grades) up against values of array2(cutoff letter grades) and then prints the according letter grade
            {
                printf("A ");
            }

            else if (array1[i][j] < array2[a][j] && array1[i][j] >= array2[b][j]) //only difference here and below is that the abcd values are swapped accordingly to the right column/row
            {
                printf("B ");
            }

            else if (array1[i][j] < array2[b][j] && array1[i][j] >= array2[c][j])
            {
                printf("C ");
            }

            else if (array1[i][j] < array2[c][j] && array1[i][j] >= array2[d][j])
            {
                printf("D ");
            }

            else if (array1[i][j] < array2[d][j])
            { 
                printf("F "); 
            } 
        } 
        printf("\n"); 
    } 
} 
 
// main is below 
 
int main(void) //ints main to begin program 
{ 
    int array1[ROWS][COLS] = { //ints array1 using symbolic constants and sets values accordingly 
        {72, 68, 62}, 
        {95, 88, 95}, 
        {93, 97, 86}, 
        {98, 77, 98}, 
        {99, 92, 90}, 
        {47, 32, 27}, 
        {97, 99, 75}, 
        {85, 95, 91}, 
        {96, 91, 99}, 
        {94, 90, 74}, 
        {98, 98, 90}, 
        {76, 82, 98}}; 
 
    printf("Here are the scores: \n");  
    PrintArrayType1(array1); //prints array 
    printf("\n"); 
 
    printf("Here are the grade cutoffs: \n"); 
 
    int array2[ROWSS][COLS] = { //ints array2 with symbolic constants and sets values accoordingly 
        {85, 90, 90}, 
        {75, 80, 75}, 
        {60, 70, 55}, 
        {50, 60, 40}}; 
 
    PrintArrayType2(array2); //prints array 
 
    printf("\n"); 
    printf("Here are the grades: \n"); 
    PrintArrayGrades(array1, array2); //prints new array with values from array1 assigned as letter grades 
 
    return 0; //returns 0 to main to end program 
} 
