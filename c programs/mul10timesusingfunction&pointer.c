#include <stdio.h>
void multiplyByTen(int *ptr);
void multiplyByTen(int *ptr) 
{
    *ptr = *ptr * 10;  
}

int main() 
{
    int num ;  
    printf("Original value of num:\n");
    scanf ("%d",&num);

    multiplyByTen(&num);  

    printf("Value of num after multiplying by 10: %d\n", num);

    return 0;
}