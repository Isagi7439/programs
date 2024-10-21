#include<stdio.h>
int main()
{
    int i=1,n,num,max=0;
    printf("no: of entries: ");
    scanf("%d",&n);
    while(i<=n)
    {
        printf("\n enter no: ");
        scanf("%d",&num);
        max=max>num?max:num;
        i++;
    }
    printf("the biggest no is %d",max);
}