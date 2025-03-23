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
