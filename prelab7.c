  // last set of averages does not compute correctly, this is mostly correct. need to revisit

#include<stdio.h>
#include<math.h>
#define ROWS 11
#define COLS 3

void Print2DArray(int array[][COLS])
{
    for (int i = 0; i < ROWS; i++)
    {
        printf("Row %d: ", i);
        for (int j = 0; j < COLS; j++)
        {
            printf("%d ", array[i][j]);
        }
        printf("\n");
    }
}

float printRowAverage(int array[][COLS], int rown)
{
    double counter = 0;
    for (int i = 0; i < COLS; i++)
    {
         counter += array[rown][i];
    }
    return counter / COLS;
}

float printColAverage(int array[][COLS], int colsn)
{
    double counter = 0;
    for (int i = 0; i < COLS; i++)
    {
        counter =+ array[i][colsn];
    }
    return counter / ROWS;
}

//////////////////////////////////////////////////////////

int main(void)
{
    int a[ROWS][COLS] =
    {  {72, 68, 62},
       {95, 88, 95},
       {93, 97, 86},
       {98, 77, 98},
       {99, 92, 90},
       {97, 99, 90},
       {85, 95, 91},
       {96, 91, 99},
       {94, 90, 85},
       {98, 98, 90},
       {76, 82, 98}};

    printf("Martix: \n");
    Print2DArray(a);

    printf("Row Average: \n");
    for (int i = 0; i < ROWS; i++)
    {
        printf("Row %d averages: %f\n", i, printRowAverage(a, i));
    }

    printf("Column Average: \n");
    for (int i = 0; i < COLS; i++)
    {
        printf("Column %d average: %f\n", i, printColAverage(a, i));
    }

    return 0;
}
