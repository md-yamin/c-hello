// Mathematical Expression
#include <stdio.h>

int main()
{
    int a, b, c;
    char s, e;
    scanf("%d %c %d %c %d", &a, &s, &b, &e, &c);
    if (s == '+')
    {
        if (a + b == c)
        {
            printf("Yes");
        }
        else
        {
            printf("Yes");
        }
    }
    else if (s == '-')
    {
        if (a - b == c)
        {
            printf("Yes");
        }
        else
        {
            printf("Yes");
        }
    }
    else
    {
        printf("%d", a * b);
    }

    return 0;
}
