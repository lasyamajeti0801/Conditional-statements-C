//GIVEN  A DATE AS SLASH SEPARATED VALUES CHECK WHEATHER THE DATE IS VALID OR NOT

#include <stdio.h>

int isLeapYear(int year) {
    return ( (year % 4 == 0 && year % 100 != 0) || (year % 400 == 0) );
}

int main() {
    int day, month, year;
    
    printf("Enter date in dd/mm/yyyy format: ");
    scanf("%d/%d/%d", &day, &month, &year);

    // Basic checks
    if (year < 1 || month < 1 || month > 12 || day < 1) {
        printf("Invalid Date\n");
        return 0;
    }

    int maxDays;

    // Days in month check
    switch(month) {
        case 1: case 3: case 5: case 7: case 8: case 10: case 12:
            maxDays = 31;
            break;
        case 4: case 6: case 9: case 11:
            maxDays = 30;
            break;
        case 2:
            if (isLeapYear(year))
                maxDays = 29;
            else
                maxDays = 28;
            break;
        default:
            printf("Invalid Date\n");
            return 0;
    }

    if (day <= maxDays) {
        printf("Valid Date\n");
    } else {
        printf("Invalid Date\n");
    }

    return 0;
}


