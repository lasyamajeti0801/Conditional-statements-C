#include <stdio.h>
int main()
{
    int year;
    printf("Enter year:");
    scanf("%d", &year);

    if (year % 4 == 0 || (year%4==0 && year%100!=0))
    {
      printf("LEAP YEAR");
    }
    else
    {
        printf("NON LEAP YEAR");
    }
    return 0;
}