//print the half triangle pattern with function
#include<stdio.h>
int pattern(int);
int pattern(int n)
{
    int i,j;
    for(i=0;i<n;i++)
    {
        for(j=0;j<2*i+1;j++)
        {
            printf("*");
        }
        printf("\n");
    }
}
int main()
{
    int n;
    printf("enter the no of lines: ");
    scanf("%d",&n);
    pattern(n);
}