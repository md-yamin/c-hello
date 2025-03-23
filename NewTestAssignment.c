// #include <stdio.h>
// #include <math.h>

// int main()
// {
//     /*There are 3 types of loops
//     1. for loop
//     2. while loop
//     3. do while loop
//     */

// //    int id, number;
// //    scanf("%d", &number); // number of students in a group
// //     //(initialization; condition; incrementation)
// //    for(int i = 1; i <= number; ++i){
// //     printf("%d", i);
// //    }
// //    printf("%d\n", i);

// }
// /*

// Write a program to print numbers from 1 to 10 using a for loop.

// Print even numbers between 1 and 20 using a for loop.

// Write a program to display the sum of numbers from 1 to 100.

// Display the multiplication table of 5 using a for loop.

// Print numbers from 10 to 1 in reverse order using a for loop.

// */

// // #include <stdio.h>
// // int main(){

// //     int i, result=0;

// //     for(i=1; i<=100; i++){
// //         result = result + i;
// //     }
// //     printf("%d", result);

// //     return 0;
// // }

// // #include <stdio.h>
// // int main(){
// //     int i=6;
// //     while(i > 0){
// //         printf("%d\n", i);
// //         i--;
// //     }

// //     return 0;
// // }

// find the sum of given n number elements
// 3
// 3
// 5 4 8
// Output = 17
// 3
// 5 4 8
// Output = 17
// 3
// 5 4 8
// Output = 17
#include <stdio.h>

int main()
{
    int rows;
    scanf("%d", &rows);

    for(int i = 1; i <= rows; i++){

        for(int j = 1; j <= i; j++){
            printf("* ");
        }
        printf("\n");

    }
    
}