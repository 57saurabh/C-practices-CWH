#include<stdio.h>
int main ()
{
 float P, A, r, t;
 A= P + P*r*t;
printf("enter the principle amount \n");
scanf("%f",&P);
printf("enter the rate of the intrest \n");
scanf("%f",&r);
printf("enter the time period of intrest in years \n");
scanf("%f",&t);
printf("the SI of the given amount is %f",A);
return 0;
}