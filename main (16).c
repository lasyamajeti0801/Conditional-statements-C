//USING ONLY ONE IF STATEMENT
#include<stdio.h>
int main()
{
    int num1,num2;
    printf("Enter two numbers:");
    scanf("%d %d",&num1,&num2);
    int max=num1;
    if(num2>max){
    max=num2;
}
printf("%d is greatest",max);
}
