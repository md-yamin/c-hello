// // #include <stdio.h>
// // int main()
// // {
// //     char day;
// //     scanf("%c", &day);
// //     switch(day){
// //         case 's':
// //         printf("Sunday");
// //         break;

// //         case 'm':
// //         printf("Monday");
// //         break;

// //         case 't':
// //         printf("Tuesday");
// //         break;

// //         case 'w':
// //         printf("Wednesday");
// //         break;

// //         case 'r':
// //         printf("Thursday");
// //         break;

// //         default:
// //         printf("Doesn't match");
// //     }
// //     return 0;
// // }
// // 2. Write a C program to find the minimum between two numbers using a
// //  switch-case.
// //  Test Data :
// //  10 20
// // #include <stdio.h>
// // int main()
// // {
// //     int n, m, comp;
// //     scanf("%d %d", &n, &m);
// //     comp = (n<m)? 1:2;
// //     switch (comp)
// //     {
// //     case 1:
// //         printf("%d\n", n);
// //         break;
// //     case 2:
// //         printf("%d\n", m);
// //         break;
// //     default:
// //         printf("error");
// //     }
// // }

// /*3. Write a C program to check even or odd numbers using a switch-case.
// Test Data :
// 7
// Expected Output:
// 7 is an odd number.*/
// // #include <stdio.h>
// // int main()
// // {

// //     int n;
// //     scanf("%d", &n);

// //     switch(n%2){
// //         case 0:
// //         printf("%d is an even number.\n", n);
// //         break;

// //         case 1:
// //         printf("%d is an odd number.\n", n);
// //         break;

// //         default:
// //         printf("Not a Number\n");
// //     }

// //     return 0;
// // }

// /*4. Write a C program to check positive negative or zero using a switch-case.
//  Test Data :-5
//  Expected Output:-5 is a negative number.*/
// // #include <stdio.h>
// // int main()
// // {

// //     int n;
// //     scanf("%d", &n);
// //     switch((n>0)-(n<0)){
// //         case 1 :
// //         printf("%d is positive", n);
// //         break;
// //         case -1 :
// //         printf("%d is Negative", n);
// //         break;
// //         case 0 :
// //         printf("%d is Null", n);
// //         break;
// //         default:
// //         printf("Blank");
// //     }

// //     return 0;
// // }

// /* 5. Write a program in C to read any Month Number in an integer and display the
//  number of days for this month using a switch-case.
//  Test Data :
//  7
//  Expected Output:
//  There are 31 days in month 7*/
// // #include <stdio.h>

// // int main() {
// //     int month;

// //     printf("Enter the month number (1-12): ");
// //     scanf("%d", &month);

// //     switch (month) {
// //         case 1: case 3: case 5: case 7: case 8: case 10: case 12:
// //             printf("There are 31 days in month %d\n", month);
// //             break;
// //         case 4: case 6: case 9: case 11:
// //             printf("There are 30 days in month %d\n", month);
// //             break;
// //         case 2:
// //             printf("There are 28 or 29 days in month %d (depending on a leap year)\n", month);
// //             break;
// //         default:
// //             printf("Invalid month number! Please enter a number between 1 and 12.\n");
// //     }

// //     return 0;
// // }

// /*
// 6. Write a C program to check whether an alphabet is a vowel or a consonant
//  using a switch-case.
//  Test Data :
//  P
//  Expected Output:
//  P is a consonant.
// */

// // #include <stdio.h>
// // #include <ctype.h>
// // int main(){
// //     char letter;
// //     scanf("%c", &letter);
// //     letter = toupper(letter);
// //     switch(letter){
// //         case 'A':case 'E':case 'I':case 'O':case 'U':
// //         printf("%c is a vowel.\n",letter);
// //         break;
// //         default:
// //         printf("%c is a consonant.\n", letter);
// //     }
// //     return 0;
// // }

// /*
//  7. Write a C program to calculate profit and loss on a transaction using a
//  switch-case.
//  Test Data :
//  Enter buying price: 500
//  Enter selling price: 300
//  Expected Output:
//  Loss amount: 200
// */

// // #include <stdio.h>
// // int main(){

// //     int bP, sP;
// //     scanf("%d %d", &bP, &sP);

// //     switch(((sP-bP) > 0) - ((bP-sP) > 0)){
// //         case 1:
// //         printf("Profit amount: %d", sP-bP);
// //         break;

// //         case -1:
// //         printf("Loss amount: %d", bP-sP);
// //         break;

// //         default:
// //         printf("No Loss or Profit");
// //     }

// //     return 0;
// // }

// /* side note
// Celsius = (Fahrenheit - 32) × 5/9
// Fahrenheit = (Celsius × 9/5) + 32
// */

// /*
// 8. Write a program in C to convert temperature from Fahrenheit to Celsius and
//  Celsius to Fahrenheit using a switch-case.
//  Test Data :
//  Press c to convert the temperature from Fahrenheit to Celsius.
//  Press f to convert temperature from Celsius to Fahrenheit.
//  Enter your choice (c, f): f
//  Enter temperature in Celsius: 37
//  Expected Output :
//  Temperature in Fahrenheit: 98.60
// */

// // #include <stdio.h>
// // int main(){
// //     char type;
// //     float temp;
// //     printf("Press c to convert the temperature from Fahrenheit to Celsius.\n");
// //     printf("Press f to convert temperature from Celsius to Fahrenheit.\n");
// //     printf("Enter your choice (c, f):");
// //     scanf("%c", &type);
// //     printf("Enter temperature in Celsius: ");
// //     scanf("%f", &temp);

// //     switch(type){
// //         case 'c': case 'C':
// //         printf("Temperature in Celsius: %.2f", (temp - 32) * 5.0/9.0);
// //         break;

// //         case 'f': case 'F':
// //         printf("Temperature in Fahrenheit: %.2f", (temp * 9.0/5.0) + 32);
// //         break;

// //         default:
// //         printf("invalid input");
// //     }

// //     return 0;
// // }

// // #include <stdio.h>

// // int main(){

// //     int n;
// //     scanf("%d", &n);
// //     for(int i = 1; i<=n ; i++){
// //         printf("%d\n");
// //     }
// //     return 0;

// // }

// // #include <stdio.h>

// // int main(){

// //    int a,b,c,d;
// //    scanf("%d%d%d%d", &a,&b,&c,&d);
// //    if(b>c && d>a && c+d > a+b && c > 0 && d > 0 && ){

// //    }

// // }

// 1. Problem: Odd or Even
// a. Write a C program to check whether a given number is odd or even using an
// if-else statement. 

// #include <stdio.h>
// int main(){
//    int n;
//    scanf("%d", &n);
//    if(n%2==0){
//       printf("%d is Even\n", n);
//    }
//    else{
//       printf("%d is Odd\n",n);
//    }
//    return 0;
// }

// 2. Problem: Leap Year Checker
// a. Write a program that takes a year as input and checks whether it is a leap year or
// not using if-else conditions. 

// #include <stdio.h>
// int main(){
//    int n;
//    scanf("%d", &n);
//    if(n%4==0){
//       if(n%100){
//          printf("%d is a leap year\n", n);
//       }
//       else{
//          printf("%d is not leap year\n",n);
//       }
//    }
//    else{
//       printf("%d is not leap year\n",n);
//    }
//    return 0;
// }

// 3. Problem: Largest of Three Numbers
// a. Write a C program to find the largest of three numbers using nested if-else
// conditions. 

// #include <stdio.h>
// int main(){
//    int a,b,c;
//    scanf("%d%d%d",&a,&b,&c);
//    if(a>b){
//       if(a>c){
//          printf("%d the largest of three numbers.",a);
//       }
//       else if(c>a){
//          printf("%d the largest of three numbers.",c);
//       }
//    }
//    else if(b>a){
//       if(b>c){
//          printf("%d the largest of three numbers.",b);
//       }
//       else if(c>b){
//          printf("%d the largest of three numbers.",c);
//       }
//    }
//    return 0;
// }

// 4. Problem: Grade Calculator
// a. Write a program that takes a score as input and assigns a grade (A, B, C, D, F)
// using the switch-case statement. 

// #include <stdio.h>
// int main(){
//    int marks;
//    scanf("%d", &marks);
//    switch(marks/10){
//     case 10: case 9: case 8:
//     printf("Grade A");
//     break;
//     case 7:
//     printf("Grade B");
//     break;
//     case 6:
//     printf("Grade C");
//     break;
//     case 5:
//     printf("Grade D");
//     break;
//     case 4:
//     printf("Grade E");
//     break;
//     default:
//     printf("Grade F");
//    }
// }


// 5. Problem: Vowel or Consonant
// a. Write a program to check if a character is a vowel or a consonant using the
// switch-case statement. 

// #include <stdio.h>
// #include <ctype.h>
// int main(){
//    char ch;
//    scanf("%c", &ch);
//    ch = toupper(ch);
//    switch(ch){
//       case 'A':case 'O':case 'I':case 'E':case 'U':
//       printf("%c is a Vowel", ch);
//       break;
//       default:
//       printf("%c is a Consonant", ch);
//    }
//    return 0;
// }

// 6. Problem: Positive, Negative or Zero
// a. Write a C program that takes a number and determines whether it's positive,
// negative, or zero using if-else statements.

// #include <stdio.h>
// int main(){
//    int n;
//    scanf("%d", &n);
//    if(n>0){
//       printf("Positive");
//    }
//    else if(n<0){
//       printf("Negative");
//    }
//    else{
//       printf("Zero");
//    }
//    return 0;
// }

// 7. Problem: Simple Calculator
// a. Write a program to create a simple calculator using the switch-case
// statement. The program should perform addition, subtraction, multiplication, and
// division based on user input. 

// #include <stdio.h>
// int main(){
//     float a, b;
//     char operator;
//     printf("Addition '+' or Substruction '-' or Multiplication '*' or Division '/'\n");
//     printf("Enter the symbol for the action you want to perform.\n");
//     scanf("%c", &operator);
//     switch(operator){
//         case '+':
//         scanf("%f%f", &a,&b);
//         printf("%.1f", a+b);
//         break;

//         case '-':
//         scanf("%f%f", &a,&b);
//         printf("%.1f", a-b);
//         break;

//         case '*':
//         scanf("%f%f", &a,&b);
//         printf("%.1f", a*b);
//         break;

//         case '/':
//         scanf("%f%f", &a,&b);
//         printf("%.1f", a/b);
//         break;
//     }
//     return 0;
// }

// 8. Problem: Triangle Validity Checker
// a. Write a program that takes the lengths of three sides of a triangle and determines
// if the triangle is valid based on the conditions of a valid triangle using conditional
// statements. 

// #include <stdio.h>
// int main(){
//     int a, b, c;
//     scanf("%d%d%d", &a,&b,&c);
//     if(a+b> c && a+c> b && b+c> a ){
//         printf("The triangle is Valid");
//     }
//     else{
//         printf("The triangle is Not Valid");
//     }
//     return 0;
// }

// 9. Problem: Multiplication Table
// a. Write a C program to display the multiplication table of a given number using a
// for loop.

// #include <stdio.h>
// int main(){
//     int n;
//     scanf("%d", &n);
//     for(int i = 1; i <= 10; i++){
//         printf("%d * %d = %d\n", n, i, n*i);
//     }
//     return 0;
// }

// 10. Problem: Factorial Calculator
// a. Write a program to calculate the factorial of a number using a while loop. 

// #include <stdio.h>
// int main(){
//     int n,r=1;
//     scanf("%d", &n);
//     for(int i = 1; i <= n; i++){
//         r*=i;
//     }
//     printf("%d", r);
//     return 0;
// }

// 11. Problem: Fibonacci Series
// a. Write a C program to generate the Fibonacci series up to n terms using a for
// loop.

// #include <stdio.h>
// int main(){
//     int n, r=0;
//     scanf("%d", &n);
//     for(int i = 0; i <= n; i++){
//         r+=i;
//     }
//     printf("%d", r);
//     return 0;
// }


// 12. Problem: Sum of Digits
// a. Write a program that takes an integer as input and calculates the sum of its digits
// using a while loop.
//

// #include <stdio.h>
// int main(){
//     int n, sum=0;
//     scanf("%d", &n);
//     while(n>0){
//         sum = sum + (n%10);
//         n = n/10;
//     }
//     printf("%d", sum);
//     return 0;
// }

// 13. Problem: Prime Number Checker
// a. Write a C program to check whether a given number is prime or not using a for
// loop and conditional statements. 

// #include <stdio.h>
// #include <math.h>
// int main(){
//     int n,c=0;
//     float rt;
//     scanf("%d", &n);
//     rt = sqrt(n);
//     for(int i=2; i<=rt; i++){
//         if(n%i==0){
//             c = 1;
//             break;
//         }
//     }
//     (c>0)? printf("%d is not a Prime Number", n) : printf("%d is a Prime Number", n);
//     return 0;
// }

// 14. Problem: Reverse a Number
// a. Write a C program to reverse a given integer using a while loop. 

// #include <stdio.h>
// int main()
// {
//     int n, rev = 0;
//     scanf("%d", &n);
//     while (n > 0){
//         rev = rev * 10 + (n % 10);
//         n=n/10;
//     }
//     printf("%d", rev);
//     return 0;
// }

// 15. Problem: Counting Digits
// a. Write a program to count the number of digits in an integer using a while loop. 

// #include <stdio.h>
// int main(){
//     int n, c=0;
//     scanf("%d", &n);
//     while(n>0){
//         n = n/10;
//         c++;
//     }
//     printf("%d", c);
//     return 0;
// }

// 16. Problem: Find Maximum Element in Array
// a. Write a C program to find the maximum element in an array using loops and
// conditional statements. 

// #include <stdio.h>
// int main()
// {
//     int n, max;
//     scanf("%d", &n);
//     int arr[n];
//     for(int i = 0; i < n; i++){
//         scanf("%d", &arr[i]);
//     }
//     max=arr[0];
//     for (int i = 0; i < n; i++){
//         if(arr[i]>max){
//             max = arr[i];
//         }
//     }
//     printf("%d", max);
//     return 0;
// }


// 17. Problem: Sum of Array Elements 
// a. Write a program that takes an array of integers and finds the sum of its elements 
// using a loop. 

// #include <stdio.h>
// int main()
// {
//     int n, sum;
//     scanf("%d", &n);
//     int arr[n];
//     for(int i = 0; i < n; i++){
//         scanf("%d", &arr[i]);
//     }
//     sum=0;
//     for (int i = 0; i < n; i++){
//         sum += arr[i];
//     }
//     printf("%d", sum);
//     return 0;
// }

// 18. Floyd’s Triangle Pattern 
// a. Write a C program that prints Floyd’s triangle. 

// #include <stdio.h>
// int main(){
//     int n,m=1;
//     scanf("%d", &n);
//     for(int i = 1; i<=n; i++){
//         for(int j = 1; j<=i; j++){
//             printf("%d ", m);
//             m++;
//         }
//         printf("\n");
//     }
//     return 0;
// }

// 19. Number Pyramid Pattern 
// a. Write a C program that prints a number pyramid.

// #include <stdio.h>
// int main()
// {
//   int n;
//   scanf("%d", &n);
//   for (int i = 1; i <= n; i++){
//     for (int j = 1; j <= n - i; j++){
//       printf(" ");
//     }
//     for (int j = 1; j <= i; j++){
//       printf("%d", j);
//     }
//     for (int j = i - 1; j >= 1; j--){
//       printf("%d", j);
//     }
//     printf("\n");
//   }

//   return 0;
// }

// 20. Diamond Pattern 
// a. Write a C program that prints a diamond pattern. 


// #include <stdio.h>
// int main()
// {
//   int n;
//   scanf("%d", &n);
//   for (int i = 1; i <= n; i++){
//     for (int j = 1; j <= n - i; j++){
//       printf(" ");
//     }
//     for (int j = 1; j <= 2 * i - 1; j++){
//       printf("*");
//     }
//     printf("\n");
//   }
//   for (int i = n - 1; i >= 1; i--){
//     for (int j = 1; j <= n - i; j++){
//       printf(" ");
//     }
//     for (int j = 1; j <= 2 * i - 1; j++){
//       printf("*");
//     }
//     printf("\n");
//   }
//   return 0;
// }
