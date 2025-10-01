#include <stdio.h>

int main() {
    int n, i, flag = 0;

    printf("Enter a number: ");
    scanf("%d", &n);

    if (n <= 1) {
        printf("Not prime\n");
        return 0;
    }

    for (i = 2; i <= n / 2; i++) {
        if (n % i == 0) {
            flag = 1;  // found a factor
            break;
        }
    }

    if (flag == 0)
        printf("Prime\n");
    else
        printf("Not prime\n");

    return 0;
}
