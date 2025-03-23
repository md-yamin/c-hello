// Set A
// 1. Check if a number is positive, negative, or zero using if-else
#include <stdio.h>
int main() {
    int num;
    scanf("%d", &num);
    
    if (num > 0)
        printf("The number is positive.\n");
    else if (num < 0)
        printf("The number is negative.\n");
    else
        printf("The number is zero.\n");
    
    return 0;
}

// 2. Count vowels and consonants in a string
#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char str[100];
    int vowels = 0, consonants = 0;

    printf("Enter a string: ");
    scanf("%s", &str);
    
    for(int i = 0; i < strlen(str); i++){
        char ch = tolower(str[i]);
        if ((ch >= 'a' && ch <= 'z')) {
            if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u')
                vowels++;
            else
                consonants++;
        }
    }

    printf("Vowels: %d\nConsonants: %d\n", vowels, consonants);
    return 0;
}
// 3. Find sum and average of elements in an array
#include <stdio.h>
int main() {
    int n;
    float avg, sum = 0;
    
    printf("Enter number of elements: ");
    scanf("%d", &n);
    
    int arr[n];
    printf("Enter elements: \n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
        sum += arr[i];
    }
    
    avg = sum / n;
    printf("Sum = %.2f\nAverage = %.2f\n", sum, avg);
    
    return 0;
}

// 4. Print all even numbers from 1 to N
#include <stdio.h>
int main() {
    int n;
    printf("N: \n");
    scanf("%d", &n);

    printf("Even numbers\n");
    for (int i = 2; i <= n; i += 2) {
        printf("%d \n", i);
    }
    
    return 0;
}

// SET-B
// 1. Find the maximum of three numbers using if-else
#include <stdio.h>
int main() {
    int a, b, c;
    printf("Enter three numbers: ");
    scanf("%d %d %d", &a, &b, &c);

    if (a >= b && a >= c)
        printf("Maximum number: %d\n", a);
    else if (b >= a && b >= c)
        printf("Maximum number: %d\n", b);
    else
        printf("Maximum number: %d\n", c);
    
    return 0;
}

// 2. Find factorial of a number using a loop
#include <stdio.h>
int main() {
    int n, factorial = 1;
    scanf("%d", &n);
    
    for (int i = 1; i <= n; i++) {
        factorial *= i;
    }
    
    printf("%d\n",factorial);
    return 0;
}


// 3. Find the largest element in an array
#include <stdio.h>
int main() {
    int n;
    printf("Enter number of elements: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter elements: ");
    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    int max = arr[0];
    for (int i = 1; i < n; i++)
        if (arr[i] > max)
            max = arr[i];

    printf("Largest element: %d\n", max);
    return 0;
}

// 4. Find the length of a string using strlen()
#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    printf("Enter string: ");
    scanf("%s", &str);
    
    printf("Length of the string: %d\n", strlen(str));
    return 0;
}


// SET-C
// 1. Check whether a character is a vowel or consonant

#include <stdio.h>
#include <ctype.h>

int main() {
    char ch;
    printf("Enter a character: ");
    scanf("%c", &ch);

    ch = tolower(ch);
    if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u')
        printf("%c is a vowel.\n", ch);
    else
        printf("%c is a consonant.\n", ch);
    
    return 0;
}

// 2. Sum of first N even numbers
#include <stdio.h>
int main() {
    int n, sum = 0;
    printf("Enter N: ");
    scanf("%d", &n);

    for (int i = 2; i <= n; i += 2) {
        sum += i;
    }

    printf("Sum even numbers = %d\n", sum);
    return 0;
}

// 3. Reverse an array
#include <stdio.h>
int main() {
    int n;
    printf("Number of elements: \n");
    scanf("%d", &n);

    int arr[n];
    printf("Elements: \n");
    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    printf("Reversed: \n");
    for (int i = n - 1; i >= 0; i--)
        printf("%d ", arr[i]);

    return 0;
}

// 4. Copy one string into another using strcpy()
#include <stdio.h>
#include <string.h>

int main() {
    char str1[100], str2[100];
    printf("Enter a string: ");
    gets(str1);
    
    strcpy(str2, str1);
    printf("Copied string: %s\n", str2);
    
    return 0;
}


// SET-D
// 1. Check if a year is a leap year

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
// 2. Print Fibonacci series up to N terms

#include <stdio.h>
int main() {
    int n, a = 0, b = 1, c;
    printf("Enter number of terms: ");
    scanf("%d", &n);

    printf("Fibonacci series: %d %d ", a, b);
    for (int i = 2; i < n; i++) {
        c = a + b;
        printf("%d ", c);
        a = b;
        b = c;
    }
    
    return 0;
}

// 3. Find the smallest element in an array

#include <stdio.h>
int main() {
    int n;
    printf("Enter number of elements: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter %d elements: ", n);
    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    int min = arr[0];
    for (int i = 1; i < n; i++)
        if (arr[i] < min)
            min = arr[i];

    printf("Smallest element: %d\n", min);
    return 0;
}


// 4. Compare two strings using strcmp()

#include <stdio.h>
#include <string.h>

int main() {
    char str1[100], str2[100];
    printf("Enter first string: ");
    gets(str1);
    printf("Enter second string: ");
    gets(str2);

    if (strcmp(str1, str2) == 0)
        printf("Strings are equal.\n");
    else
        printf("Strings are not equal.\n");

    return 0;
}

