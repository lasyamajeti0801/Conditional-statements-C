//GIVEN A CHARACTER PRINT THE CORRESPONDING LOWER CASE VERSION OF CHACRACTER IRRESPECTIVE OF GIVEN CHARACTER
#include<stdio.h>
int main()
{
    char ch;
    scanf("%c",&ch);
    if( ch>='A' && ch<='Z')
    {
        ch+=32;
        printf("%c",ch);
        
    }
}
