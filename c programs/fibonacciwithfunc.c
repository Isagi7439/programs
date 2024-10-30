#include<stdio.h>
int fibo(int);
int fibo(int a)
// fibo (n)= fibo(n-1th element)+fibo(n-2nd element)....... 0 1 1 2 3 5.....

{
    if (a==1||a==2)
    {
    return a-1 ;
}
return fibo(a-1)+fibo(a-2);
}
int main()
{
    int a;
    printf ("enter the number: ");
    scanf ("%d",&a);
    printf ("%d", fibo(a));
    return 0;
}