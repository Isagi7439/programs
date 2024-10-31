//sum of digits ofa number
#include<stdio.h>
int main()
{
    int sum=0,n,rm;
    printf("enter a no: ");
    scanf("%d",&n);
    while(n!=0)
    {
        rm=n%10;
        sum=sum+rm;
        n=n/10;
    }
    printf("the sum of the digits is %d",sum);
}