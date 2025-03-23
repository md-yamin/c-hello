#include <stdio.h>

int main()
{
    int T;
    scanf("%d", &T);

    for (int t = 1; t <= T; t++)
    {
        int C;
        scanf("%d", &C);

        float tCredits = 0.0;
        float creditSum = 0.0;
        int failed = 0;

        for (int i = 0; i < C; i++)
        {
            float marks, credits;
            scanf("%f %f", &marks, &credits);

            float grade_point;
            if (marks >= 80 && marks <= 100)
            {
                grade_point = 4.00;
            }
            else if (marks >= 75 && marks < 80)
            {
                grade_point = 3.75;
            }
            else if (marks >= 70 && marks < 75)
            {
                grade_point = 3.50;
            }
            else if (marks >= 65 && marks < 70)
            {
                grade_point = 3.25;
            }
            else if (marks >= 60 && marks < 65)
            {
                grade_point = 3.00;
            }
            else if (marks >= 55 && marks < 60)
            {
                grade_point = 2.75;
            }
            else if (marks >= 50 && marks < 55)
            {
                grade_point = 2.50;
            }
            else if (marks >= 45 && marks < 50)
            {
                grade_point = 2.25;
            }
            else if (marks >= 40 && marks < 45)
            {
                grade_point = 2.00;
            }
            else
            {
                grade_point = 0.00;
            };

            if (marks < 40)
            {
                failed++;
            }

            tCredits += credits;
            creditSum += grade_point * credits;
        }

        if (failed > 0)
        {
            printf("Case %d: Sorry, you have failed in %d course%s!\n", t, failed, (failed > 1) ? "s" : "");
        }
        else
        {
            float CGPA = creditSum / tCredits;
            printf("Case %d: %.2f\n", t, CGPA);
        }
    }

    return 0;
}
