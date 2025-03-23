#include <stdio.h>
int main(){
    int ageDays;
    scanf("%d", &ageDays);

    int years = ageDays / 365;
    int months = (ageDays % 365)/30;
    int days = (ageDays % 365)%30;


    printf("%d ano(s)\n", years);
    printf("%d mes(es)\n", months);
    printf("%d dia(s)\n", days);

    return 0;
}
