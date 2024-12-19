#include<stdio.h>
int main()
{
    int a[]= {5,10,15,20,25,30,35,40,45,50};/*or we can use, a[10];
    for (int i= 1; i<=10; i++)
    a=5*i++;*/ 
    int *ptr= a;
    int m=5;
    for (int i= 1; i<=10; i++)
    {
        printf ("%dX%d=%d\n", m, i, *(ptr));
        ptr++;
    }
        return 0;
}