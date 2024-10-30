//find the factorial of a number
#include<stdio.h>
int main()
{
    int a,i,fact=1;
    printf("enter the number:");
    scanf("%d",&a);
    for(i=1;i<=a;i++)
    {
        fact=fact*i;
    }
    printf("the factorial is %d",fact);
    return 0;
}