#include<stdio.h>
int main()
{
      int age;
     printf("enter your age. \n");
     scanf("%d",&age);
     if (age<=70 && age>= 18)
     {
     printf("you are above 18 and below  70. you can drive. \n");
     }
     else 
     {
         printf("you are not able to drive. \n");
     }
     if (age == 50)
     {
         printf("half century.");
     }
     
    return 0;
}