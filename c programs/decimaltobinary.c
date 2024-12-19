#include<stdio.h>
int main()
{
    int n,rem=0,i=0,j=0,k=0,arr[50],bin[50];
    printf("enter the decimal number: ");
    scanf("%d",&n);
    while(n!=0)
    {
        rem=n%2;
        arr[i]=rem;
        n=n/2;
        i++;
    }
    for(j=i-1;j>=0;j--)
    {
        bin[k]=arr[j];
        k++;
    }
    for(i=0;i<k;i++)
    {
        printf("%d",bin[i]);
    }
}