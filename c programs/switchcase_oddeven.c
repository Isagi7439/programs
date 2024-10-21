#include<stdio.h>
int main()
{
    int num,rem;
    printf("enter a no:");
    scanf("%d",&num);
    rem=num%2;
    switch(rem)
    {
        case 0:
            printf("the no is even");
            break;
        case 1:
            printf("the no is odd");
            break;
    }
}