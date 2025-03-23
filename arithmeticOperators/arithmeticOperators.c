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

    //    /  Division ===============================
    // float x = 11;
    // float y = 6;
    // float z = x / y;
    // printf("%f", z);

    // Modulus (Remainder) ===========================
    // int x = 9;
    // int y = 6;
    // int z = x % y;
    // printf("%d", z);

    // ++ increment (means increasing value by 1)==========================
    // int x = 5;
    // x++;
    // printf("%d", x);

    // -- decrement (means decreasing value by 1)===========================
    // int x = 5;
    // x++;

    // printf("%d", x);

    // *************************************
    // Assignment Operator

    // use of assignment operator (=)
    //  char Name[] = "Yamin";
    //  int age = 21;

// ```````````````````````````````
    // += 
    
    // int n = 3;
    // n +=5; // n = n +5;
    // printf("%d", n);


// ``````````````````````````
    // -=
    // int j = 12;
    // j -= 6;  // j = j -6;
    // printf("%d",j);

    // int a=70, b=120, c=10;

    // if(a>b){
    //     if(a>c){
    //     printf("%d is greater",a);
    //     }
    //     else{
    //     printf("%d is greater",c);
    //     }
    // }
    // else{
    //    if(b>c){
    //     printf("%d is greater",b);
    //     }
    //     else{
    //     printf("%d is greater",c);
    //     } 
    // }

    int a=70, b=120, c=1000;
    (a>b)? (a>c)?  printf("%d is greater",a) :  printf("%d is greater",c) : (b>c)? printf("%d is greater",b): printf("%d is greater",c);






    return 0;
}