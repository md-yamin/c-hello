#include <stdio.h>
int main(){
    float a,b,c;
    scanf("%f %f %f", &a,&b,&c);
    float triangle = 0.5*a*c, circle = 3.14159*c*c, trapezium = (a+b)*c/2, square = b*b,rectangle = a*b;
    printf("TRIANGULO: %.3f\nCIRCULO: %.3f\nTRAPEZIO: %.3f\nQUADRADO: %.3f\nRETANGULO: %.3f\n", triangle,circle,trapezium,square,rectangle);
    return 0;
}