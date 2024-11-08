#include <stdio.h>

int main()
{
    // using format specifiers

    float item1 = 5.75;
    float item2 = 20.00;
    float item3 = 100.99;

    /*
    we type . and then the number of digits we want after decimal in floats or doubles
    like- .1% will show 1 digit after decimal point
    */ 

   /* we can add a minimum field width with format specifiers. It means how much space we would want our output to take. We use this by typing a number after the percent sign and the format specifing character.
   like- %8 will means our output will have a width 8 characters long. 
   fun fact- the output will be left aligned if you use this. If you want it to be left aligned then you can use a negative sign the % and then specify your width 
   */

    printf("this is the price $%8.2f\n",item1);
    printf("this is the price $%8.2f\n",item2);
    printf("this is the price $%-8.2f\n",item3);




    return 0;
}
