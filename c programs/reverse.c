//reverse a number
#include<stdio.h>
int main()
{
    int n,rv=0,rm;
    printf("enter no: ");
    scanf("%d",&n);
    while(n!=0)
    {
        rm=n%10;
        rv=rv*10+rm;
        n=n/10;
    }
    printf("the reversed no is %d",rv);
}