//print 1 to 10 without 5
#include<stdio.h>
int main()
{
    int num=1;
    while (num<=10)
    {
        if(num==5)
        {
            num++;
            continue;
        }
        printf("\n %d",num);
        num++;
    }
    return 0;
}