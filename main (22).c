//FIND THE ELECTRICITY BILL OF USER FOR THE FIRST 100 UNITS IT CHARGES 2 /- PER UNIT OVERUSING WHICH FOR THE  NEXT 100 UNITS – 3/- OVER USING WHICH FOR NEXT 100 UNITS THE CHARGE PER UNIT IS 5/- AND ANY UNITS CONSUMED ABOVE CHARGED ABOVE 10/- PER UNIT

#include <stdio.h>

int main() {
    int units;
    float bill = 0;

    printf("Enter the number of units consumed: ");
    scanf("%d", &units);

    if (units <= 100) {
        bill = units * 2;
    }
    else if (units <= 200) {
        bill = (100 * 2) + (units - 100) * 3;
    }
    else if (units <= 300) {
        bill = (100 * 2) + (100 * 3) + (units - 200) * 5;
    }
    else {
        bill = (100 * 2) + (100 * 3) + (100 * 5) + (units - 300) * 10;
    }

    printf("Total Electricity Bill: ₹%.2f\n", bill);

    return 0;
}
