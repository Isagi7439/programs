#include<stdio.h>
int main()
{
    int large,a,b;
    printf("\nenter the first number:");
    scanf("%d",&a);
    printf("\nenter the 2nd number:");
    scanf("%d",&b);
    large=(a>b)?a:b;
    printf("the larger no is %d",large);
}