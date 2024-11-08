#include <stdio.h>


// This is a single line comment that will be ignored by the compiler 
// I knew that already (small tip use "ctrl" + "/" to add a single line comment quickly )
/*
This is a
multi line
comment and
This will also
be ignored 
by the compiler
 */
int main(){
    // printf("hello world\n");
    // printf("say anything else\n");
    // printf("1\t2\t3\t\n4\t5\t6\n");
    // printf("\"I like it when I make people smile.\nThat said it still hurts when I am taken for granted and am laughed at.\n\\It hurts.\\\" - Md Yamin ");

    int x;
    x=123;
    int y = 321;

    int age = 20;           //integer
    float gpa = 3.75;       //floating point number
    char grade = 'A';       //single character
    char name[] = "Yamin";   //array of character 

    printf("I am %d years old.\n",age);
    printf("I am %s.\n",name);
    printf("My avg grade is %c.\n",grade);
    printf("My gpa is %f",gpa);


    return 0;
}



/*
escape sequence = character combination consisting of a backslash "\" followed by a letter combination of digits.
                  They specify actions within a line of string of text
                  \n = newline
                  \t = tab

*/
