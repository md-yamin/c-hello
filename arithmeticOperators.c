#include <stdio.h>

int main()
{

    /*
    Arithmetic operators

    +  Addition
    -  Subtraction
    *  Multiplication
    /  Division  (this is tricky. Make sure to have store value in float if you want decimal values and if there elements are stored in int then the divisor should be stored in a float to avoid errors)
    %  modulus   (will give you a remainder)
    ++ increment (means increasing value by 1)
    -- decrement (means decreasing value by 1)
    */

    int x = 5;
    int y = 6;

    int z = x + y;
    printf("%d", z);

    return 0;
}