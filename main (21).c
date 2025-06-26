  /*GIVEN BASIC SALARY AS INPUT FIND THE TOTAL SALARY OF EMPLOYEE 
HA – house alavances
BS – basic salary
LA- leave alavences
10k<=bs<=15
ha =15%bs
la = 20%bs
15k<=bs <=50k
Ha= 30%bs
La=35%bs
Above 50k:
Ha=40%bs
La=45%bs*/

#include <stdio.h>

int main() {
    float bs, ha, la, total;

    printf("Enter Basic Salary: ");
    scanf("%f", &bs);

    if (bs >= 10000 && bs <= 15000) {
        ha = 0.15 * bs;
        la = 0.20 * bs;
    }
    else if (bs > 15000 && bs <= 50000) {
        ha = 0.30 * bs;
        la = 0.35 * bs;
    }
    else if (bs > 50000) {
        ha = 0.40 * bs;
        la = 0.45 * bs;
    }
    else {
        printf("Invalid Basic Salary! It should be at least 10,000.\n");
        return 0;
    }

    total = bs + ha + la;

    printf("House Allowance (HA): %.2f\n", ha);
    printf("Leave Allowance (LA): %.2f\n", la);
    printf("Total Salary: %.2f\n", total);

    return 0;
}
