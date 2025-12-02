//Write a program to find the product of odd digits of a number.
#include <stdio.h>
int main(){int n, dig, product = 1;

    printf("Enter a number: ");
    scanf("%d", &n);

    while (n > 0) {
        dig = n % 10;

        if (dig % 2 != 0) {  
            product = product * dig;
        }

        n = n / 10;           
    }

    printf("Product of odd digits = %d", product);

    return 0;}
    