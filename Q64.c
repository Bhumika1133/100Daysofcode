#include <stdio.h>

int main() {
    long num;
    int freq[10] = {0};   
    int digit, max = 0, maxDigit = 0;

    printf("Enter an integer number: ");
    scanf("%ld", &num);

    if (num < 0)
        num = -num; 


    while (num > 0) {
        digit = num % 10;   
        freq[digit]++;
        num /= 10;
    }

    
    for (int i = 0; i < 10; i++) {
        if (freq[i] > max) {
            max = freq[i];
            maxDigit = i;
        }
    }

    printf("Digit occurring most times = %d\n", maxDigit);
    printf("It occurs %d times.\n", max);

    return 0;
}
