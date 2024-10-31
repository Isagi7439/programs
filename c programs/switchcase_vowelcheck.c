//check if a character is vowel or consonant using switch case
#include<stdio.h>
int main()
{
    char c;
    printf("enter a character: ");
    scanf("%c",&c);
    switch(c)
    {
        case 'a':
        case 'A':
        case 'e':
        case 'E':
        case 'i':
        case 'I':
        case 'o':
        case 'O':
        case 'u':
        case 'U':
            printf("the character is vowel");
            break;
        default:
            printf("the character is not vowel");
    }
}