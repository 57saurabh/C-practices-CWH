#include<stdio.h>
int main()
{
    int physics, chemistry, maths;
    float total;
    printf("enter the marks of physics chemistry and maths\n");
    scanf("%d %d %d",&physics,&chemistry,&maths);
    total=(physics +chemistry + maths)/3;
    if (total<33 || physics<40 || chemistry<40 || maths <40) 
       {
        printf("your total percent is %f. And you are fail.. \n",total);
    }
    else
    {
        printf("your total percent is %f. you are pass. \n",total);
    }
    
    return 0;
}