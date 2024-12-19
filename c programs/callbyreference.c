#include <stdio.h>

void modify(int *ptr) 
{
    *ptr = *ptr * 10;  
}

int main() 
{
    int num = 5;  
    printf("Original value of num: %d\n", num);

    modify(&num);  

    printf("Value of num after modify: %d\n", num);

    return 0;
}