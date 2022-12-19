#include <stdio.h>
int main()
{
    int year;
    printf("enter the year.. \n");
    scanf("%d",&year);
    if(year%4==0&&year%100!=0 || year%400==0)
    {
     printf("the given year is leap year.. \n");
    }
    else
    {
        ("the given year is not leap year..");
    }
    return 0;
}