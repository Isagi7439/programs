//1st 50 even numbers
#include<stdio.h>
int main()
{
    int a=1;
    while(a<=50)
    {
        if(a%2==0)
        printf("%d\n",a);
        a++;
    }
    return 0;
}