#include<stdio.h>
int sum(int);
int sum(int n)
{
    if(n==1)
    {
        return 1;
    }
    else
    {
        return n+sum(n-1);      //sum=sum+n
    }
}
int main()
{
    int n,sum1=0;
    printf("enter the no of terms: ");
    scanf("%d",&n);
    sum1=sum(n);
    printf("the sum of %d natural numbers is %d",n,sum1);
}
