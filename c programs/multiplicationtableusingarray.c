#include<stdio.h>
int main()
{
    int arr[10],i,n;
    printf("enter the number: ");
    scanf("%d",&n);
    for(i=0;i<10;i++)
    {
        arr[i]=n*(i+1);
    }
    for(i=0;i<10;i++)
    {
        printf("%d x %d=%d\n",n,i+1,arr[i]);
    }
}