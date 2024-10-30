#include<stdio.h>
float average(int,int,int);
float average(int num1, int num2, int num3)
{
    return (num1+num2+num3)/3;
}
int main()
{
    float avg=0;
    int num1,num2,num3;
    printf("enter a number: ");
    scanf("%d %d %d",&num1,&num2,&num3);
    avg=average(num1,num2,num3);
    printf("the average is %.2f",avg);
}