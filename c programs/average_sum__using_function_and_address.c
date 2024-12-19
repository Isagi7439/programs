#include<stdio.h>
int* sum(int a, int b)
{
    int s;
    s=a+b;
    int* ptr= &s;
    printf("the sum of a & b is %d\n",s);
    return ptr;
}
float* avg(int a, int b)
{
    float ag;
    ag=(a+b)/2;
    float* ptr= &ag;
    printf("the average of a & b is %f\n",ag);
    return ptr;
}
int main()
{
    int a=5,b=10;
    int* ptr1;
    float* ptr2;
    ptr1=sum(a,b);
    ptr2=avg(a,b);
    printf("the address of sum is %u and average is %u",ptr1,ptr2);
}