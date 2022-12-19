#include <stdio.h>
int main()
{
  int a, b, sum;
  printf("enter the  value of a,b\n");
  scanf("%d %d", &a, &b);
  sum = a + b;
  printf("the sum of the number is %d \n \t the multiplication of number is %d \n\t\t the sub of numbers is %d ", sum, a * b, a - b);
  return 0;
}