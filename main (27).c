//GIVEN A CHARCTEER CHECK THE GIVEN CHARACTER IS VOWEL OR CONSONANT USING SWITCH CASE
    #include <stdio.h>
int main() {
    char ch;
    printf("Enter an alphabet: ");
    scanf("%c", &ch);
ch|=32;
    switch (ch) {
        case 'a':
        case 'e':
        case 'i':
        case 'o':
        case 'u':
            printf("The character is a Vowel.\n");
            break;
        default:
            printf("The character is a Consonant.\n");
    }
    return 0;
}


