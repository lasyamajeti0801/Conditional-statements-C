//GIVEN TWO TIMES COLON SEPARATED VALUED PRINT THE DIFFERENCE B/W TIMES AS HOURS MIN SECONDS

#include <stdio.h>

int main() {
    int h1, m1, s1;
    int h2, m2, s2;
    int diffH, diffM, diffS;

    printf("Enter first time (hh:mm:ss): ");
    scanf("%d:%d:%d", &h1, &m1, &s1);

    printf("Enter second time (hh:mm:ss): ");
    scanf("%d:%d:%d", &h2, &m2, &s2);

    // Handle seconds difference
    if (s2 < s1) {
        s2 += 60;
        m2 -= 1;
    }
    diffS = s2 - s1;

    // Handle minutes difference
    if (m2 < m1) {
        m2 += 60;
        h2 -= 1;
    }
    diffM = m2 - m1;

    // Handle hours difference
    diffH = h2 - h1;

    // If diffH is negative, swap times or show absolute difference
    if (diffH < 0) {
        printf("First time is greater than second time, swapping...\n");

        // Swap times and recalculate
        int tempH = h1, tempM = m1, tempS = s1;
        h1 = h2; m1 = m2; s1 = s2;
        h2 = tempH; m2 = tempM; s2 = tempS;

        // Repeat calculations
        if (s2 < s1) {
            s2 += 60;
            m2 -= 1;
        }
        diffS = s2 - s1;

        if (m2 < m1) {
            m2 += 60;
            h2 -= 1;
        }
        diffM = m2 - m1;

        diffH = h2 - h1;
    }

    printf("Time difference: %d hours %d minutes %d seconds\n", diffH, diffM, diffS);

    return 0;
}
