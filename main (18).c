//10.IF ELSE OF FINDING THE GIVEN NUMBER IS EVEN OR ODD
#include <stdio.h>
int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    if (num % 2 == 0) {
        printf("The number is Even.\n");
    } else {
        printf("The number is Odd.\n");
    }
    return 0;
}

