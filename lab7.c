  1 //Corbin Shanks (cwswgv)
  2 //CS150 Spring 2023
  3 //Lab 7
  4 //March 10, 2023
  5 
  6 #include<stdio.h> //pre-processor directives
  7 #define ROWS 12 //defines symbolic constants to be used in array functions
  8 #define COLS 3
  9 #define ROWSS 4
 10 
 11 void PrintArrayType1(int array[][COLS]) //first printarray function looks at student grade dataset where rows are 12 and cols are 3 and prints it out
 12 {
 13     for (int i = 0; i < ROWS; i++) //standard nested for loops to print
 14     {
 15         printf("Row %d: ", i);
 16         for (int j = 0; j < COLS; j++)
 17         {
 18             printf("%d ", array[i][j]);
 19         }
 20         printf("\n");
 21     }
 22 }
 23 
 24 void PrintArrayType2(int array[][COLS]) //second printarray function looks at the cutoff grade dataset when rows are 4 and columns are defined by the dataset
 25 {
 26     for (int i = 0; i < ROWSS; i++) //standard nested for loops to print
 27     {
 28         printf("Row %d: ", i);
 29         for (int j = 0; j < COLS; j++)
 30         {
 31             printf("%d ", array[i][j]);
 32         }
 33         printf("\n");
 34     }
 35 }
 36 
 37 void PrintArrayGrades(int array1[][COLS], int array2[][COLS]) //third printarray looks at any student grades set in array in main and assigns the according letter grade to be printed
 38 {
 39     int a = 0; //i could not figure out how to increment a value for one place in the array to be different in the same for loop so I hard coded 0-3
 40     int b = 1;
 41     int c = 2;
 42     int d = 3;
 43 
 44     for (int i = 0; i < ROWS; i++) //for loop looks at rows first, in this context this means what student
 45     {
 46         printf("Student %d: ", i);
 47         for (int j = 0; j < COLS; j++) //nested for loop looks at columns here, in this context this means what class (cs1050, math1500, english1000 & j loops for cols
 48         {
 49             if (array1[i][j] <= 100 && array1[i][j] >= array2[a][j]) //to assign letter grade to num grade, standard if else statments are used with && to check the next value.
 50                                      //this checks values from array1 (student grades) up against values of array2(cutoff letter grades) and then prints the according letter grade
 51             {
 52                 printf("A ");
 53             }
 54 
 55             else if (array1[i][j] < array2[a][j] && array1[i][j] >= array2[b][j]) //only difference here and below is that the abcd values are swapped accordingly to the right column/row
 56             {
 57                 printf("B ");
 58             }
 59 
 60             else if (array1[i][j] < array2[b][j] && array1[i][j] >= array2[c][j])
 61             {
 62                 printf("C ");
 63             }
 64 
 65             else if (array1[i][j] < array2[c][j] && array1[i][j] >= array2[d][j])
 66             {
 67                 printf("D ");
 68             }
 69 
 70             else if (array1[i][j] < array2[d][j])
 71             { 
 72                 printf("F "); 
 73             } 
 74         } 
 75         printf("\n"); 
 76     } 
 77 } 
 78  
 79 // main is below 
 80  
 81 int main(void) //ints main to begin program 
 82 { 
 83     int array1[ROWS][COLS] = { //ints array1 using symbolic constants and sets values accordingly 
 84         {72, 68, 62}, 
 85         {95, 88, 95}, 
 86         {93, 97, 86}, 
 87         {98, 77, 98}, 
 88         {99, 92, 90}, 
 89         {47, 32, 27}, 
 90         {97, 99, 75}, 
 91         {85, 95, 91}, 
 92         {96, 91, 99}, 
 93         {94, 90, 74}, 
 94         {98, 98, 90}, 
 95         {76, 82, 98}}; 
 96  
 97     printf("Here are the scores: \n");  
 98     PrintArrayType1(array1); //prints array 
 99     printf("\n"); 
100  
101     printf("Here are the grade cutoffs: \n"); 
102  
103     int array2[ROWSS][COLS] = { //ints array2 with symbolic constants and sets values accoordingly 
104         {85, 90, 90}, 
105         {75, 80, 75}, 
106         {60, 70, 55}, 
107         {50, 60, 40}}; 
108  
109     PrintArrayType2(array2); //prints array 
110  
111     printf("\n"); 
112     printf("Here are the grades: \n"); 
113     PrintArrayGrades(array1, array2); //prints new array with values from array1 assigned as letter grades 
114  
115     return 0; //returns 0 to main to end program 
116 } 
