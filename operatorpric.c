#include <stdio.h>
int main()
{
int a;
printf("enter a number \n");
scanf("%d",&a);
// if (a%97==0)
// {
//   printf("the Num is divisable by 97 \n");
// }
// else
// {
//     printf("the no is non divisable");
// }
printf("divisiblity test return = %d",a % 97 );
    return 0;
} 