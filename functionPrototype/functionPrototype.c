#include <stdio.h>

void hello(char name[], int age); //This is a function prototype

int main(){

    char name[] = "Yamin";
    int age = 21;

    hello(name, age);

    return 0;
}

void hello(char name[], int age)
{
    printf("Hello %s\n", name);
    printf("You are %d years old\n", age);
};