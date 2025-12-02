#include <stdio.h>

int main() {
    char str[100];
    int i = 0;

    printf("Enter a string in lowercase: ");
    scanf("%[^\n]", str); // read string with spaces

    while (str[i] != '\0') {
        // If character is lowercase, convert to uppercase
        if (str[i] >= 'a' && str[i] <= 'z') {
            str[i] = str[i] - 32;
        }
        i++;
    }

    printf("Uppercase string: %s\n", str);

    return 0;
}
