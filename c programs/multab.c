//print the multiplication table of a number
#include<stdio.h>
int main()
{
    int n,i=1;
    printf("enter a no: ");
    scanf("%d",&n);
    while(i<=10)
    {
        printf("\n%d*%d=%d",n,i,n*i);
        i++;
    }
}