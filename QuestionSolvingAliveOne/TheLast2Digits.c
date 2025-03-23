#include <stdio.h>

int main(){

    int a, b, c, d;
    scanf("%d %d %d %d", &a, &b, &c, &d);
    int result = a*b*c*d;
    

    printf("%d", result%100);
    
    return 0;
}

