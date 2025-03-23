#include <stdio.h>
int main()
{
    int n;
    while (scanf("%d", &n))
    {
        if (n >= 0)
        {
            int pieces = (n * (n + 1) / 2) + 1;
            printf("%d\n", pieces);
        }
        else
        {
            break;
        }
    }
    return 0;
}