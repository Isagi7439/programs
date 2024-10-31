//check if a number is prime
#include<stdio.h>
int main()
{
    int n,i=2,c;
    printf("enter the no:");
    scanf("%d",&n);
    while(i<n)
    {
        if(n%i==0)
        {
            c++;
            break;
        }
        i++;
    }
    if(c==1)
    printf("not prime number");
    else
    printf("prime number");
}