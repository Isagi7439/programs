#include<stdio.h>
int main()
{
    int n,original,reversed=0,remainder;
    printf("enter an integer: ");
    scanf("%d",&n);
    original=n;
    while(n!=0)
    {
        remainder=n%10;
        reversed=reversed*10+remainder;
        n=n/10;
    }
    if(original==reversed)
    printf("%d is a palindrome number",original);
    else
    printf("%d is not a palindrome number",original);
    return 0;
}