//GIVEN  3 NUMBERS PRINT THE LARGEST 

#include <stdio.h>
void main()
{
    int a,b,c;
    printf("Enter 3 numbers:");
    scanf("%d %d %d",&a,&b,&c);
    if(a>b)
    {
        if(a>c)
        {
            printf("%d is largest",a);
        }
    }
    else if(b>a)
    {
        if(b>c)
        {
            printf("%d is lastgest",b);
        }
    }
    else{
    printf("%d is largest",c);
}
}
