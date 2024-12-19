#include<stdio.h>

void sumavg(int a, int b, int *ptr, float *ptr1)
{
    *ptr = a + b;         // Calculate the sum and store it in the variable pointed to by ptr
    *ptr1 = (float)*ptr / 2; // Calculate the average and store it in the variable pointed to by ptr1
}

int main()
{
    int num1, num2, sum; 
    float avg;

    printf("Enter the numbers:\n");
    scanf("%d %d", &num1, &num2);

    sumavg(num1, num2, &sum, &avg);

    printf("The sum is %d\n", sum);
    printf("The average is %.2f\n", avg);

    return 0;
}