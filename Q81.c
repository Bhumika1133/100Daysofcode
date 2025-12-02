#include <stdio.h>

int main() {
    char str[100];
    int count = 0;
    int i = 0;

    printf("Enter a string: ");
    scanf("%[^\n]", str); // reads string with spaces

    while (str[i] != '\0') {
        count++;
        i++;
    }

    printf("Number of characters in the string = %d\n", count);

    return 0;
}
