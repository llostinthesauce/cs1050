#include<stdio.h>
#include<math.h>

void getCount(int *outputInt)
{
    printf("How many integers would you like to enter? ");
    scanf("%d", outputInt);
    printf("\n");
}

void getIntArray(int *outputIntArray, int count)
{
    for (int i = 0; i < count; i++)
    {
        printf("Enter integer #%d: ", i+1);
        scanf("%d", &outputIntArray[i]);
        printf("%d\n", outputIntArray[i]);
    }
}

void printArray(int a[], int size)
{
    printf("You entered an array with %d elements:\n", size);
    for (int i = 0; i < size; i++)
    {
        printf("\tArray[%d] = %d\n", i, a[i]);
    }
}

int main(void)
{
    int z = 0;

    printf("*************************************************\n");
    printf("*********** Welcome to Prelab 8! ****************\n");
    printf("*************************************************\n");

    getCount(&z);

    int array[z];

    getIntArray(array, z);
    printArray(array, z);
}
