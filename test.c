// // // #include <stdio.h>

// // // int main(){
// // //     char n;
// // //     scanf("%c", &n);
// // //     switch(n){
// // //         case 'a': case 'e': case 'i': case 'o': case 'u':
// // //         printf("Vowel");
// // //         break;

// // //         default:
// // //         if((n>='A' && n<='Z') || (n>='a' && n<='z') )
// // //         printf("Consonent");
// // //     }

// // //     return 0;
// // // }

// // // #include <stdio.h>
// // // int main()
// // // {
// // //     int x, y;
// // //     scanf("%d %d", &x, &y);
// // //     int rem = y % x;
// // //     if (rem == 0)
// // //     {
// // //         printf("0\n");
// // //     }
// // //     else
// // //     {
// // //         printf("%d\n", x - rem);
// // //     }
// // //     return 0;
// // // }

// // // #include <stdio.h>
// // // int main()
// // // {
// // //     int x, y;
// // //     scanf("%d", &x);
// // //     for (int i = 1; i <= x; i++)
// // //     {
// // //         printf("Input:");
// // //         scanf("%d", &y);

// // //         printf("Output:");
// // //         printf("%d\n", y * y);
// // //         printf("\n");
// // //     }
// // //     return 0;
// // // }

// // // #include <stdio.h>
// // // int main()
// // // {
// // //     int x;
// // //     scanf("%d", &x);
// // //     printf("%d\n", x);

// // //     return 0;
// // // }

// // // #include <stdio.h>
// // // int main(){
// // //     int n, a, b, c, s=0;

// // //     scanf("%d", &n);
// // //     for(int i = 1; i <=n; i++){
// // //         scanf("%d %d %d", &a,&b,&c);

// // //         if((a==1 && b==1) || (b==1 && c==1) || (c==1 && a==1))
// // //         {
// // //             s++;
// // //         }
// // //     }
// // //     printf("%d", s);

// // //     return 0;
// // // }

// // // #include <stdio.h>
// // // int main(){
// // //     int rows;
// // //     scanf("%d", &rows);
// // //     // rows
// // //     for(int i = 1; i <= rows; i++){

// // //         // stars
// // //         for(int j = 1; j <=i; j++){
// // //             printf("* ");
// // //         }
// // //         printf("\n");

// // //     }

// // //     return 0;
// // // }

// // #include <stdio.h>

// // int main()
// // {
// //     int rows;
// //     scanf("%d", &rows);
// //     // first loop is for printing the rows
// //     for (int i = 1; i <= rows; i++) {

// //         // loop for printing leading whitespaces
// //         for (int j = 1; j <= 2*(rows - i); j++) {
// //             printf(" ");
// //         }

// //         // loop for printing * character
// //         for (int k = 1; k <= i; k++) {
// //             printf("* ");
// //         }
// //         printf("\n");
// //     }
// //     return 0;
// // }

// #include<stdio.h>
// #include<math.h>
// int main(){

// double a,b,c,w, t1, t2,t3,m,result;

// printf("Input first value for width of slit: ");
// scanf("%lf", &a);

// printf("Input second value for width of slit: ");
// scanf("%lf", &b);

// printf("Input third value for width of slit: ");
// scanf("%lf", &c);

// printf("Input value for wavelength: ");
// scanf("%lf", &w);

// printf("Input value for m: ");
// scanf("%lf", &m);

// //asin() is the function for inverse sin in C programming

// if(w<380 || w>750){
//     printf("Out of the range. Please enter a valid number");
// }
// else{
//     t1= (m*(w/1000000000))/a;
//     t2= (m*(w/1000000000))/b;
//     t3= (m*(w/1000000000))/c;
// }

// if(a>b && b>c){
//     printf("Light bends lowest when slit width is %d",a);
// }
// else if(b>a && b>c){
//     printf("Light bends lowest when slit width is %d",b);
// }
// else if(c>a && b>c){
//     printf("Light bends lowest when slit width is %d",c);
// }

// printf("1 = %lf \n2 = %lf\n3 = %lf", t1,t2,t3);

// return 0;
// }

// #include <stdio.h>
// int main()
// {
//     float w1, w2, ni1, ni2;
//     printf("Weight - Item1:");
//     scanf("%f", &w1);
//     printf("No. of item1:");
//     scanf("%f", &ni1);
//     printf("Weight - Item2:");
//     scanf("%f", &w2);
//     printf("No. of item2:");
//     scanf("%f", &ni2);
//     printf("Average Value = %f\n", (((w1 * ni1) + (w2 * ni2)) / (ni1 + ni2)));
//     return 0;
// }


#include<stdio.h>
#include<math.h>
int main(){

double a,b,c,w, t1, t2,t3,m,result;



printf("Input first value for width of slit in meter: ");
scanf("%lf", &a);

printf("Input second value for width of slit in meter: ");
scanf("%lf", &b);

printf("Input third value for width of slit in meter: ");
scanf("%lf", &c);

printf("Input value for wavelength in nm: ");
scanf("%lf", &w);

printf("Input value for m: ");
scanf("%lf", &m);

//asin() is the function for inverse sin in C programming

double ans1, ans2, ans3;

if(w<380 || w>750){
    printf("Out of the range. Please enter a valid number");
}
else{
    w = w/1e9;
    t1= ((m*w)/a);
    t2= ((m*w)/b);
    t3= ((m*w)/c);

    ans1 = asin(t1)* (180 / 3.14159265359);
    ans2 = asin(t2)* (180 / 3.14159265359);
    ans3 = asin(t3)* (180 / 3.14159265359);
}

if(a>b && b>c){
    printf("Light bends lowest when slit width is %.4lf\n",a);
}
else if(b>a && b>c){
    printf("Light bends lowest when slit width is %.4lf\n",b);
}
else if(c>a && c>b){
    printf("Light bends lowest when slit width is %.4lf\n",c);
}

printf("1 = %.9lf \n2 = %.9lf\n3 = %.9lf", ans1,ans2,ans3);

return 0;
}


