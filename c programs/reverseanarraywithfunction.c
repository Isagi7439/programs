#include<stdio.h>
int original(int array[], int n)
{
    int i;
    for(i=0;i<n;i++)
    {
        printf("%d\t",array[i]);
    }
    printf("\n");
}
int reverse(int array[],int n)
{
    int i,j=0,rev[n];
    for(i=n-1;i>=0;i--)
    {
        rev[j]=array[i];
        j++;
    }
    for(i=0;i<n;i++)
    {
        printf("%d\t",rev[i]);
    }
}
int main()
{
    int arr[]={10,20,30,40,50,60};
    original(arr,6);
    reverse(arr,6);
    return 0;
}