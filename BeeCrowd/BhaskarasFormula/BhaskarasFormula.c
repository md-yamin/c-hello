// #include <stdio.h>
// #include <math.h>

// int main()
// {
//   double a, b, c, r1, r2;
//   scanf("%lf %lf %lf", &a, &b, &c);
//   r1 = (-b + sqrt((b * b) - (4 * a * c))) / (2 * a);
//   r2 = (-b - sqrt((b * b) - (4 * a * c))) / (2 * a);

//   if (a > 0 && b > 0 && c > 0)
//   {
//     printf("R1 = %.5lf\n", r1);
//     printf("R2 = %.5lf\n", r2);
//   }
//   else
//   {
//     printf("Impossivel calcular\n");
//   }

//   return 0;
// }


#include <stdio.h>
#include <math.h>

int main()
{
  double a, b, c, discriminant, r1, r2;
  scanf("%lf %lf %lf", &a, &b, &c);
  
  discriminant = (b * b) - (4 * a * c);

  if (a != 0 && discriminant >= 0)
  {
    r1 = (-b + sqrt(discriminant)) / (2 * a);
    r2 = (-b - sqrt(discriminant)) / (2 * a);
    printf("R1 = %.5lf\n", r1);
    printf("R2 = %.5lf\n", r2);
  }
  else
  {
    printf("Impossivel calcular\n");
  }

  return 0;
}
