// Mathematical Expression
#include <stdio.h>

int main()
{
    // int a, b, c;
    // char s, e;
    // scanf("%d %c %d %c %d", &a, &s, &b, &e, &c);
    // if (s == '+')
    // {
    //     if (a + b == c)
    //     {
    //         printf("Yes");
    //     }
    //     else
    //     {
    //         printf("Yes");
    //     }
    // }
    // else if (s == '-')
    // {
    //     if (a - b == c)
    //     {
    //         printf("Yes");
    //     }
    //     else
    //     {
    //         printf("Yes");
    //     }
    // }
    // else
    // {
    //     printf("%d", a * b);
    // }


int x,y;
char sign;
scanf("%d %c %d", &x,&sign,&y);
if (sign=='+')
{
    printf("%d",x+y);

    }
    else if(sign=='-'){
        printf("%d",x-y);
    }
     else{
        printf("can't calculate");
     }

    return 0;
}
