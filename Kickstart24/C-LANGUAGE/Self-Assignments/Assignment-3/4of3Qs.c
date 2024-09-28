#include <stdio.h>

int main() {
    char character;

    // Asking for a single character input from the user
    printf("Enter a character: ");
    scanf("%c", &character);

    // Displaying the ASCII value using the '%d' format specifier
    printf("The ASCII code for '%c' is %d\n", character, character);

    return 0;
}
