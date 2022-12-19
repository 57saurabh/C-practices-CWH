#include <stdio.h>
int main()
{
    int n1, n2, ans;
    char ch;

    printf("enter choice '+','-','*','/','%' \n");
    scanf("%c", &ch);
    printf("enter two number. \n");
    scanf("%d %d", &n1, &n2);

    switch (ch)
    {
    case '+':
        ans = n1 + n2;
        printf("n1+n2=%d. \n", ans);
        break;
    case '-':
        ans = n1 - n2;
        printf("n1-n2=%d.\n", ans);
        break;
    case '*':
        ans = n1 * n2;
        printf("n1*n2=%d. \n", ans);
        break;
    case '/':
        ans = n1 / n2;
        printf("n1/n2=%d. \n", ans);
        break;
    case '%':
        ans = n1 % n2;
        printf("n1%n2=%d. \n", ans);
        break;
    default:
        printf("wrong input..\n");
        break;
    }

    return 0;
}
