#include <stdio.h>
int main()
{
    float r, h;
    float a = 3.14;
    printf("enter the value of radius in meter \n");
    scanf("%f", &r);
    printf("enter the value of hight of the cylider \n");
    scanf("%f", &h);
    printf("the volume of cylinder is %f \n", a * r * r * h);
    printf("the area of circle is %f", a * r * r);
    return 0;
}