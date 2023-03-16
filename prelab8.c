  1 #include<stdio.h>
  2 #include<math.h>
  3 
  4 void getCount(int * outputInt)
  5 {
  6     printf("How many integers would you like to enter? ");
  7     scanf("%d", outputInt);
  8     printf("\n");
  9 }
 10 
 11 void getIntArray(int * outputIntArray, int count)
 12 {
 13     for (int i = 0; i < count; i++)
 14     {
 15         printf("Enter integer #%d: ", i+1);
 16         scanf("%d", &outputIntArray[i]);
 17         printf("%d\n", outputIntArray[i]);
 18     }
 19 }
 20 
 21 void printArray(int a[], int size)
 22 {
 23     printf("You entered an array with %d elements:\n", size);
 24     for (int i = 0; i < size; i++)
 25     {
 26         printf("\tArray[%d] = %d\n", i, a[i]);
 27     }
 28 }
 29 
 30 int main(void)
 31 {
 32     int z = 0;
 33 
 34     printf("*************************************************\n");
 35     printf("*********** Welcome to Prelab 8! ****************\n");
 36     printf("*************************************************\n");
 37 
 38     getCount(&z);
 39 
 40     int array[z];
 41 
 42     getIntArray(array, z);
 43     printArray(array, z);
 44 }
