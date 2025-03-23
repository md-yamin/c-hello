#include <stdio.h>

int main()
{
    float x;
    printf("enter a value=");
    scanf("%f", &x);

        if (x > 0 && x <= 25)
        {
            printf("[0, 25]");
        }
        else if (x > 25 && x <= 50)
        {
            printf("(25, 50]");
        }
        else if (x > 50 && x <= 75)
        {
            printf("(50, 75]");
        }
        else if (x > 75 && x <= 100)
        {
            printf("(75, 100]");
        }
        else
        {
            printf("Out of Intervals");
        }

    return 0;
}
