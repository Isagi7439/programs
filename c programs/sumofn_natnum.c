//sum of first n natural numbers
#include<stdio.h>
int main()
{
    int n,s;
    printf("enter the limit:");
    scanf("%d",&n);
    s=n*(n+1)/2;
    printf("the sum of %d natural numbers is %d",n,s);
    return 0;
}