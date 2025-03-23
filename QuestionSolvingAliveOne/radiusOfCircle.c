#include <stdio.h>


float area(){
    float n;
    scanf("%lf", &n);
    float area = n*n*3.141592653;
    return area;
}

int main(){
    area();
    return 0;
}