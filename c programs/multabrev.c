#include<stdio.h>
int main()
{
    int n,i=10;
    printf("enter a no: ");
    scanf("%d",&n);
    while (i>=1)
    {
        printf("\n%d*%d=%d",n,i,n*i);
        i--;
    }
    
}