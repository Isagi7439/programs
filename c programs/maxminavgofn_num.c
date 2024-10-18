#include<stdio.h>
int main()
{
    int i=1,n,num,max=0,min,sum=0,avg=0;
    printf("no of entries:");
    scanf("%d",&n);
    while (i<=n)
    {
        printf("enter no:");
        scanf("%d",&num);
        max=max>num?max:num;
        min=min<num?min:num;
        sum=sum+num;
        avg=sum/n;
        i++;
    }
    printf("max=%d,min=%d,avg=%d",max,min,avg);
    return 0;
}