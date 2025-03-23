#include <stdio.h>

int main()
{

    int a, b, c, d, e;

    scanf("%d %d %d", &a, &b, &c);

    // Minimum Value Code
    if (a < b && a < c)
    {
        d = a;
    }
    else if (b < a && b < c)
    {
        d = b;
    }
    else
    {
        d = c;
    }

    // Maximum Value Code
    if (a > b && a > c)
    {
        e = a;
    }
    else if (b > a && b > c)
    {
        e = b;
    }
    else
    {
        e = c;
    }

    printf("%d  %d", d, e);

    return 0;
}