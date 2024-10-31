//sum of product in multiplication table
#include<stdio.h>
int main()
{
    int i=1,n,mul=1,sum=0;;
    printf("enter the no: ");
    scanf("%d",&n);
    while(i<=10)
    {
        mul=n*i;
        sum=sum+mul;
        i++;
    }
    printf("the sum of the products is %d",sum);
}