//GIVE A YEAR CHECK WEATHER THE YEAR IS LEAP YEAR OR NOT
    
    #include <stdio.h>
int main()
{
    int year;
    printf("Enter year:");
    scanf("%d", &year);

    if (year % 4 == 0)
    {
        if (year % 100 == 0)
        {
            if (year % 400 == 0)
            {
                printf("LEAP YEAR");
            }
            else
            {
                printf("NON LEAP YEAR");
            }
        }
        else
        {
            printf("LEAP YEAR");
        }
    }
    else
    {
        printf("NON LEAP YEAR");
    }

    return 0;
}

