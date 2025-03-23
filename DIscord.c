// #include <stdio.h>
// int main()
// {
//     int n;
//     scanf("%d", &n);
//     if (n % 4 == 0)
//     {
//         if (n % 100 == 0)
//         {
//             if (n % 400 == 0)
//             {
//                 printf("%d is a leap year\n", n);
//             }
//             else
//             {
//                 printf("%d is not a leap year\n", n);
//             }
//         }
//         else
//         {
//             printf("%d is a leap year\n", n);
//         }
//     }
//     else
//     {
//         printf("%d is not a leap year\n", n);
//     }
//     return 0;
// }

// #include <stdio.h>
// int main() {
//     int n;
//     printf("Number of elements: \n");
//     scanf("%d", &n);

//     int arr[n];
//     printf("Elements: \n");
//     for (int i = 0; i < n; i++)
//         scanf("%d", &arr[i]);

//     printf("Reversed: \n");
//     for (int i = n - 1; i >= 0; i--)
//         printf("%d ", arr[i]);

//     return 0;
// }

// #include <stdio.h>
// int main() {
//     int n, factorial = 1;
//     scanf("%d", &n);
    
//     for (int i = 1; i <= n; i++) {
//         factorial *= i;
//     }
    
//     printf("%d\n",factorial);
//     return 0;
// }

// #include <stdio.h>
// #include <string.h>
// #include <ctype.h>

// int main() {
//     char str[100];
//     int vowels = 0, consonants = 0;

//     printf("Enter a string: ");
//     scanf("%s", &str);
    
//     for(int i = 0; i < strlen(str); i++){
//         char ch = tolower(str[i]);
//         if ((ch >= 'a' && ch <= 'z')) {
//             if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u')
//                 vowels++;
//             else
//                 consonants++;
//         }
//     }

//     printf("Vowels: %d\nConsonants: %d\n", vowels, consonants);
//     return 0;
// }


// #include <stdio.h>
// int main() {
//     int n;
//     float avg, sum = 0;
    
//     printf("Enter number of elements: ");
//     scanf("%d", &n);
    
//     int arr[n];
//     printf("Enter elements: \n");
//     for (int i = 0; i < n; i++) {
//         scanf("%d", &arr[i]);
//         sum += arr[i];
//     }
    
//     avg = sum / n;
//     printf("Sum = %.2f\nAverage = %.2f\n", sum, avg);
    
//     return 0;
// }

// #include <stdio.h>
// int main() {
//     int n;
//     printf("N: \n");
//     scanf("%d", &n);

//     printf("Even numbers\n");
//     for (int i = 2; i <= n; i += 2) {
//         printf("%d \n", i);
//     }
    
//     return 0;
// }

// #include <stdio.h>
// #include <string.h>

// int main() {
//     char str[100];
//     printf("Enter string: ");
//     scanf("%s", &str);
    
//     printf("Length of the string: %d\n", strlen(str));
//     return 0;
// }

// #include <stdio.h>
// int main() {
//     int n, sum = 0;
//     printf("Enter N: ");
//     scanf("%d", &n);

//     for (int i = 2; i <= n; i += 2) {
//         sum += i;
//     }

//     printf("Sum even numbers = %d\n", sum);
//     return 0;
// }

#include <stdio.h>
int main() {
    int year;
    printf("Enter a year: ");
    scanf("%d", &year);

    if ((year % 400 == 0) || (year % 4 == 0 && year % 100 != 0))
        printf("%d is a leap year.\n", year);
    else
        printf("%d is not a leap year.\n", year);
    
    return 0;
}

