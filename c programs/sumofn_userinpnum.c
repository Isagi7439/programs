//sum of n  natural numbers given by user
#include<stdio.h>
int main()
{
    int sum=0,n1,n2,i;
    printf("enter the no of entruies:");
    scanf("%d",&n1);
    for(i=1;i<=n1;i++)
    {
        printf("enter the  no:");
        scanf("%d",&n2);
        sum=sum+n2;
    }
    printf("%d",sum);
    return 0;
}