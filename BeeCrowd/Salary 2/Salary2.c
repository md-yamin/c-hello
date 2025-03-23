#include <stdio.h>
int main(){
    double a, b;
    char name[8];
    scanf("%s %lf %lf", &name, &a, &b);
    printf("TOTAL = R$ %.2lf\n", (b*15)/100 + a);
    return 0;
}