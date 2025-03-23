#include <stdio.h>

int main()
{

    int a, b;
    char optr;

    scanf("%d %c %d", &a, &optr, &b);

    if (optr == '<' && a < b)
    {
        printf("Right");
    }
    else if (optr == '>' && a > b)
    {
        printf("Right");
    }
    else if (optr == '=' && a == b)
    {
        printf("Right");
    }
    else
    {
        printf("Wrong");
    }

    return 0;
}