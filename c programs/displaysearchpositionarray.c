//to display the elements in an array and also search for elements along with its position
#include<stdio.h>
int main()
{
int arr[10],n,i,s,f=0;
printf("Enter how many elements you want in the array: ");
scanf("%d",&n);
printf("\nEnter %d elements: ",n);
for(i=0;i<n;i++)
{
    printf("\nEnter element no %d: ",i+1);
    scanf("%d",&arr[i]);
}
printf("\nEnter which no. you want to search: ");
scanf("%d",&s);
printf("\nDisplaying the array\n");
for(i=0;i<n;i++)
printf("%d\t",arr[i]);
for(i=0;i<n;i++)
{
    if(arr[i]==s)
    {
        f++;
        break;
    }
}
if(f==1)
printf("\n%d is found in position %d",s,i+1);
else
printf("\n%d is not found in the array",s);
}