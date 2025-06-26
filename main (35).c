//GIVEN TWO DIFFERENT DATE PRINT THE DIFFERNCE IN BETWEEN DATES

#include <stdio.h>

int main() {
    int d1, m1, y1;
    int d2, m2, y2;
    int diffD, diffM, diffY;

    printf("Enter first date (dd/mm/yyyy): ");
    scanf("%d/%d/%d", &d1, &m1, &y1);

    printf("Enter second date (dd/mm/yyyy): ");
    scanf("%d/%d/%d", &d2, &m2, &y2);

    // Array of days in each month
    int monthDays[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

    // Check for leap year in second date year
    if ( (y2 % 4 == 0 && y2 % 100 != 0) || (y2 % 400 == 0) ) {
        monthDays[1] = 29;
    }

    // If day2 < day1, borrow days from previous month
    if (d2 < d1) {
        m2 = m2 - 1;
        d2 = d2 + monthDays[(m2 - 1 + 12) % 12];
    }
    diffD = d2 - d1;

    // If month2 < month1, borrow year
    if (m2 < m1) {
        y2 = y2 - 1;
        m2 = m2 + 12;
    }
    diffM = m2 - m1;
    diffY = y2 - y1;

    printf("Difference is: %d years %d months %d days\n", diffY, diffM, diffD);

    return 0;
}
