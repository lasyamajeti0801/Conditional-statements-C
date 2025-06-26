//GIVEN A CHARACTER CHECK  WHETHER IT IS UPPER CASE ALPHABET OR LOWER CASE ALPHABET OR A SYMBOL 
#include <stdio.h>
int main() {
    char ch;

    printf("Enter a character: ");
    scanf("%c", &ch);

    if (ch >= 'A' && ch <= 'Z') {
        printf("IT IS AN UPPER CASE ALPHABET\n");
    }
    else if (ch >= 'a' && ch <= 'z') {
        printf("IT IS A LOWER CASE ALPHABET\n");
    }
    else if (ch >= '0' && ch <= '9') {
        printf("IT IS A DIGIT\n");
    }
    else {
        printf("IT IS A SYMBOL\n");
    }

    return 0;
}
