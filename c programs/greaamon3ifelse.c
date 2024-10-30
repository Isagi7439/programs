//find the greatest among 3 numbers using if else
#include<stdio.h>
int main()
{
    int a,b,c;
    printf("enter the no:");
    scanf("%d %d %d",&a,&b,&c);
    if(a>b)
    {
        if(a>c)
        printf("the largest no is %d",a);
        else
        printf("the largest no is %d",c);
    }
    else if(b>c)
    printf("the largest no is %d",b);
    else
    printf("the largest no is %d",c);
    return 0;
}