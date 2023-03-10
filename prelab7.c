  // last set of averages does not compute correctly, this is mostly correct. need to revisit

  1 #include<stdio.h>
  2 #include<math.h>
  3 #define ROWS 11
  4 #define COLS 3
  5 
  6 void Print2DArray(int array[][COLS])
  7 {
  8     for (int i = 0; i < ROWS; i++)
  9     {
 10         printf("Row %d: ", i);
 11         for (int j = 0; j < COLS; j++)
 12         {
 13             printf("%d ", array[i][j]);
 14         }
 15         printf("\n");
 16     }
 17 }
 18 
 19 float printRowAverage(int array[][COLS], int rown)
 20 {
 21     double counter = 0;
 22     for (int i = 0; i < COLS; i++)
 23     {
 24          counter += array[rown][i];
 25     }
 26     return counter / COLS;
 27 }
 28 
 29 float printColAverage(int array[][COLS], int colsn)
 30 {
 31     double counter = 0;
 32     for (int i = 0; i < COLS; i++)
 33     {
 34         counter =+ array[i][colsn];
 35     }
 36     return counter / ROWS;
 37 }
 38 
 39 //////////////////////////////////////////////////////////
 40 
 41 int main(void)
 42 {
 43     int a[ROWS][COLS] =
 44     {  {72, 68, 62},
 45        {95, 88, 95},
 46        {93, 97, 86},
 47        {98, 77, 98},
 48        {99, 92, 90},
 49        {97, 99, 90},
 50        {85, 95, 91},
 51        {96, 91, 99},
 52        {94, 90, 85},
 53        {98, 98, 90},
 54        {76, 82, 98}};
 55 
 56     printf("Martix: \n");
 57     Print2DArray(a);
 58 
 59     printf("Row Average: \n");
 60     for (int i = 0; i < ROWS; i++)
 61     {
 62         printf("Row %d averages: %f\n", i, printRowAverage(a, i));
 63     }
 64 
 65     printf("Column Average: \n");
 66     for (int i = 0; i < COLS; i++)
 67     {
 68         printf("Column %d average: %f\n", i, printColAverage(a, i));
 69     }
 70 
 71     return 0;
 72 }
