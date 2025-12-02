#include <stdio.h>

void printStars(int n) {
    for (int i = 1; i <= n; i++) {
        printf("*\n");
    }
    printf("\n");
}

int main() {
    printStars(1);
    printStars(2);
    printStars(4);
    printStars(3);
    printStars(1);

    return 0;
}
