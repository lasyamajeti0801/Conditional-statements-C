//11.GIVE A NUMBER FROM 1 TO 7 WHICH CORRESPONDS TO DAY OF THE WEEK PRINT THE CORRESPONDING DAY NAME
#include<stdio.h>
void main()
{
    int num;
    printf("Enter a number:");
    scanf("%d",&num);
    if(num==1)
    {
        printf("The day is Sunday");
    }
else if(num==2)
{
     printf("The day is Monday"); 
}
    else if(num==3)
    {
          printf("The day is Tuesday");
    }
    else if(num==4)
    {
          printf("The day is Wednesday");
    }
    else if(num==5)
    {
          printf("The day is Thrusday");
    }
    else if(num==6)
    {
          printf("The day is Friday");
    }
    else if(num==7)
    {
          printf("The day is Saturday");
    }
    else
    {
        printf("invalid day number");
    }
}   
