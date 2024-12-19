#include<stdio.h>
int positive(int arr[],int n)
{
    int i;
    for(i=0;i<n;i++)
    {
        if(arr[i]>0)
        {
            printf("%d  ",arr[i]);
        }
    }
}
int main()
{
    int arr[50],i,n;
    printf("enter the number of elements: ");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("\nenter element number %d: ",i+1);
        scanf("%d",&arr[i]);
    }
    positive(arr,n);
}