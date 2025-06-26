/*GIVEN AMOUNT OF CURRENCY AS INPUT PRINT THE MINIMUM NUMBER OF DENOMINATIONS THE DENOMINATIONS INCLUDE 200/- 100/-  50/- 10/-   5/-    2/-   1/- 
EX : INPUT 358
200/- 1
100/-1
50/- 1
20/- 0
10/- 0
5/- 1
2/- 1
1/- 1*/


#include <stdio.h>

int main() {
    int amount;
    int notes200, notes100, notes50, notes10, notes5, notes2, notes1;

    printf("Enter the amount: ");
    scanf("%d", &amount);

    notes200 = amount / 200;
    amount = amount % 200;

    notes100 = amount / 100;
    amount = amount % 100;

    notes50 = amount / 50;
    amount = amount % 50;

    notes10 = amount / 10;
    amount = amount % 10;

    notes5 = amount / 5;
    amount = amount % 5;

    notes2 = amount / 2;
    amount = amount % 2;

    notes1 = amount;

    printf("200/- : %d\n", notes200);
    printf("100/- : %d\n", notes100);
    printf("50/-  : %d\n", notes50);
    printf("10/-  : %d\n", notes10);
    printf("5/-   : %d\n", notes5);
    printf("2/-   : %d\n", notes2);
    printf("1/-   : %d\n", notes1);

    return 0;
}
