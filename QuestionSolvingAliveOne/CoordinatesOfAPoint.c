#include <stdio.h>
#include <string.h>

int main()
{

    float x, y;
    char point[7];

    scanf("%f %f", &x, &y);

    if (x > 0)
    {
        if (y == 0)
        {
            strcpy(point, "Eixo X");
        }
        else if (y > 0)
        {
            strcpy(point, "Q1");
        }
        else
        {
            strcpy(point, "Q4");
        }
    }
    else if (x < 0)
    {
        if (y == 0)
        {
            strcpy(point, "Eixo X");
        }
        else if (y > 0)
        {
            strcpy(point, "Q2");
        }
        else
        {
            strcpy(point, "Q3");
        }
    }
    else if (x == 0)
    {
        if (y == 0)
        {
            strcpy(point, "Origem");
        }
        else
        {
            strcpy(point, "Eixo Y");
        }
    }

    printf("%s", point);

    return 0;
}