//12.GIVEN MARKS PRINT THE GRADE OF THE STUDENT THE MARKS ARE B/W 92 TO 100 PRINT THE GRADE AS O(OUTSTANDING)IF THE MARKS ARE B/W 82 TO 91 THE GRADE IS S(SUPERIIOR)IF THE MARKS ARE B/W 72 TO 81 THEN IT IS CONSIDERED AS A GRADE REMANING BELOW 72 ARE FAIL
#include<stdio.h>
void main()
{
    int mar;
    printf("Enter marks:");
    scanf("%d",&mar);
    if(mar<=100 & mar>=92)
    {
        printf("O(outstanding)");
    }
    else if(mar<=91 & mar>=82)
    {
        printf("S(superior)");
    }
    else if(mar<=81 & mar>=72)
    {
        printf("A");
    }
   else
   {
       printf("FAIL");
   }
}   
  
