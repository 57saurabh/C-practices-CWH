#include <stdio.h>
int main()
{
    int num;
    printf("enter the num \n");
    scanf("%d", &num);
    if (num == 1)
    {
        printf("your number is one. \n");
    }

    else if (num == 2)
    {
        printf("your number is two. \n ");
    }
    
    else if (num == 3)
    {
        printf("your number is three. \n ");
    }
    else
    {
        printf("the number is other than one two or three");
    }
    return 0;
}