#include <stdio.h>
#include <ctype.h>



// A code to convert celsius to fahrenheit or vice versa.



int main(){
    char unit;
    float temp;

    printf("Is the temperature is in (C) or in (F) = \n");
    scanf("%c", &unit);

    unit = tolower(unit);

    if (unit == 'c')
    {
       printf("The unit of measurement is in Celsius. Please enter the temperature:");
       scanf("%f",&temp);
       temp= (temp * 9/5 )+32;
       printf("The temperature in Fahrenheit is: %.2f", temp);

    }
    else if (unit == 'f')
    {
       printf("The unit of measurement is in Fahrenheit. Please enter the temperature:");
       scanf("%f",&temp);
       temp= ((temp - 32)* 5)/9;
       printf("The temperature in Fahrenheit is: %.2f", temp);

    }
    else
    {
       printf("The unit of measurement %c is invalid.", unit );

    }
return 0;

}