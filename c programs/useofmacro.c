#include<stdio.h>
#define func(y) y+5
#define m 10
int main()
{
    int a=5,s;
    s=a+func(3)*m;
    printf("%d",s);
}