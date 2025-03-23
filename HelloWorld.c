#include <stdio.h>

int main() {
    int N, num;

    scanf("%d", &N);

    for (int i = 0; i < N; i++) {
        scanf("%d", &num);
        printf("%d\n", num * num);
    }

    return 0;
}