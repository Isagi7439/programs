//find the greatest among 3 using conditional operator
#include<stdio.h>
int main()
{
    int a,b,c;
    printf("enter the number:");
    scanf("%d%d%d",&a,&b,&c);
    printf("the largest number is %d",a>b&&a>c?a:b>c?b:c);
    return 0;
}