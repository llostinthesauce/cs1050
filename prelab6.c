  1 #include<stdio.h>
  2 
  3 int main(void)
  4 {
  5    int array[20] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20};
  6 
  7    float total;
  8 
  9    for (int i = 0; i<20; i++)
 10    {
 11        total = total + array[i];
 12        printf("for array [%d] value is: %d\n", i, array[i]);
 13    }
 14 
 15    printf("array total: %.0f\n", total);
 16    printf("average is: %.2f\n", total/20);
 17 
 18 return 0;
 19 }
