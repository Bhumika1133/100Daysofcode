#include <stdio.h>

int main() {
    int num, temp, first, last, pow = 1;

    printf("Enter a number: ");
    scanf("%d", &num);

    temp = num;
    last = temp % 10;

    while (temp >= 10) {
        temp = temp / 10;
        pow = pow * 10;
    }
    first = temp;

    int middle = (num % pow) / 10;

    int newNum = (last * pow) + (middle * 10) + first;

    printf("Number after swapping first and last digit = %d\n", newNum);

    return 0;
}
