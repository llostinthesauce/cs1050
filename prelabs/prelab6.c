#include<stdio.h>

int main(void)
{
   int array[20] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20};

   float total;

   for (int i = 0; i<20; i++)
   {
       total = total + array[i];
       printf("for array [%d] value is: %d\n", i, array[i]);
   }

   printf("array total: %.0f\n", total);
   printf("average is: %.2f\n", total/20);

return 0;
}
