#include <stdio.h>
int main()
{
    float a;
    printf("enter you income in lakh .\n");
    scanf("%f", &a);
    if (a < 2.5)
    {
        printf("there is no tax on your income .\n");
    }
    else if (a >= 2.5 && a < 5.0)
    {
        printf("you have to pay 5 percent of your income that is %f lakh .\n", (a * 5) / 100);
    }
    else if (a >= 5.0 && a < 10.0)
    {
        printf("you have to pay 20 percent of your income that is %f lakh .\n", (a * 20) / 100);
    }
    else if (a >= 10.0)
    {
        printf("you have to pay 30 percent of your income that is %f lakh .\n", (a * 30) / 100);
    }
    else
    {
        printf("there is no tax on your income .\n");
    }

    return 0;
}