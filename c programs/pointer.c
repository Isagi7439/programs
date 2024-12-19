#include<stdio.h>
int main()
{
    int i=0;
    int* j=&i;
    int** k=&j;
    printf("%u",&i);
    printf("\n%d",j);
    printf("\n%d",*(&k));
}