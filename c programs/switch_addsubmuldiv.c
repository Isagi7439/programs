//find addition,subtraction,multiplication and division result using switch case
#include<stdio.h>
int main()
{
    int a,b,A,sum,sub,mul,div;
    printf("enter the no: ");
    scanf("%d %d",&a,&b);
    printf("press 1 for addition\npress 2 for subtraction\npress 3 for multiplication\npress 4 for division\n");
    scanf("%d",&A);
    switch (A)
    {
    case 1:
        sum=a+b;
        printf("%d+%d=%d",a,b,sum);
        break;
    case 2:
        sub=a-b;
        printf("%d-%d=%d",a,b,sub);
        break;
    case 3:
        mul=a*b;
        printf("%d*%d=%d",a,b,mul);
        break;
    case 4:
        div=a/b;
        printf("%d/%d=%d",a,b,div);
        break;
    default:
        printf("wrong input");
        break;
    }
}