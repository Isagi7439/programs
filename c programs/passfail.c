/*check whether a student has passed or failed
Conditions= Has to get total percentage 40+ and individual subjects 33+, total marks in each sub=100*/
#include<stdio.h>
int main()
{
    float a,b,c,sum,percentage;
    printf("enter the marks:");
    scanf("%f%f%f",&a,&b,&c);
    sum=a+b+c;
    percentage=(sum/300)*100;
    if(percentage>40&&a>33&&b>33&c>33)
    printf("the student has passed");
    else
    printf("the student has not passed");
    return 0;
}