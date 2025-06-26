//GIVEN A CHARACTER PRINT ITS INVERTED CASE

#include <stdio.h>

int main() {
    char ch;

    printf("Enter a character: ");
    scanf(" %c", &ch);  // space before %c to avoid newline issues

    if (ch >= 'A' && ch <= 'Z') {
        printf("Inverted Case: %c\n", ch + 32);  // Uppercase to Lowercase
    }
    else if (ch >= 'a' && ch <= 'z') {
        printf("Inverted Case: %c\n", ch - 32);  // Lowercase to Uppercase
    }
    else {
        printf("Character is not an alphabet: %c\n", ch);
    }
    return 0;
}
