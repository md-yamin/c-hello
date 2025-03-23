#include <stdio.h>

int main()
{
    float n;
    scanf("%f", &n);
    int c = n;
    float x = n-c;


    if (x == 0)
    {
        printf("int %d",c);
    }
    else{
        printf("float %d %.3f",c , x);
    }
    return 0;
}
