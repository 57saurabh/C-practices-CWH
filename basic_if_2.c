#include<stdio.h>
int main()
{
     int age;
     printf("enter your age. \n");
     scanf("%d",&age);
     if (age>=70)
     {
     printf("you are above or equal 70. You are not able to drive. \n");
     }
     else 
     {
         printf("you are able to drive \n");
     }
     if (age==50)
     {
       printf("half century");
     }
     
    return 0;
}