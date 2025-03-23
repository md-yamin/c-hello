#include <stdio.h>

// Summation from 1 to N

int main(){

    int n;
    int sum = 0;

    printf("Input your Number: ");
    scanf("%d", &n);
    
    for(int i = 0; i <= n; i++){
        sum += i;
        // printf("\nNow = %d", sum);
    }


    printf("%d", sum);

    return 0;
}