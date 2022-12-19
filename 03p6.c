// wap to find greatest num among four num..
#include <stdio.h>
int main()
{
    int a, b, c, d;
    printf("enter all four number. \n");
    scanf("%d %d %d %d", &a, &b, &c, &d);
    if (a > b && a > c && a > d)
    {
        printf("%d is greatest among all four number. \n", a);
    }
    else if (b > a && b > c && b > d)
    {
        printf("%d is greatest among all four number. \n", b);
    }
    else if (c > a && c > b && c > d)
    {
        printf("%d is greatest among all four number. \n", c);
    }
    else if (d > a && d > c && d > b)
    {
        printf("%d is greatest among all four number. \n", d);
    }
    else
    {
        printf("all are equal");
    }
    if (a > b && a > c && a > d && b > c && b > d && c > d)
    {
      printf("%d > %d > %d > %d \n",a,b,c,d);
    }
    else if (b>a  && b > c && b > d && a > c && a > d && c > d)
    {
        printf("%d > %d > %d > %d \n",b,a,c,d);
    }
    else if (c>a  && c > b && c > d &&  a>b  && a > d && b > d)
    {
        printf("%d > %d > %d > %d \n",c,a,b,d);
    }
     else if (d>a  && d > b && d > d &&  a>b  && a > c && b > c)
    {
        printf("%d > %d > %d > %d \n",d,a,b,c);
    }
    
    
    return 0;
}