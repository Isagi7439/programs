//check whether the number is armstrong or not
#include<stdio.h>
#include<math.h>
int main()
{
    int n,i=0,sum=0,og,og1,rm;
    printf("enter no: ");
    scanf("%d",&n);
    og=n;
    og1=n;
    while(og!=0)
    {
        og=og/10;
        i++;
    }
    while(og1!=0)
    {
        rm=og1%10;
        sum=sum+pow(rm,i);
        og1=og1/10;
    }
    if(sum==n)
    printf("armstrong");
    else
    printf("not armstrong");
}