//GIVEN A TIME BASED ON COLON SEPARTED VALUE CHECK WHETHER THE TIME IS VALID OR NOT CONSIDER RAILWAY TIME FORMAT

#include <stdio.h>

int main() {
    int hours, minutes, seconds;

    // Input from user
    printf("Enter hours (0-23): ");
    scanf("%d", &hours);

    printf("Enter minutes (0-59): ");
    scanf("%d", &minutes);

    printf("Enter seconds (0-59): ");
    scanf("%d", &seconds);

    // Check validity using conditional statements
    if (hours >= 0 && hours <= 23) {
        if (minutes >= 0 && minutes <= 59) {
            if (seconds >= 0 && seconds <= 59) {
                printf("Valid railway time format.\n");
            } else {
                printf("Invalid time: seconds out of range.\n");
            }
        } else {
            printf("Invalid time: minutes out of range.\n");
        }
    } else {
        printf("Invalid time: hours out of range.\n");
    }

    return 0;
}
