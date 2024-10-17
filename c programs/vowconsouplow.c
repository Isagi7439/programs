#include<stdio.h>
int main()
{
    char a;
    printf("enter the characters:");
    scanf("%c",&a);
    if(a>=65&&a<=90)
    {
        if(a==65||a==69||a==73||a==79||a==85)
        printf("its an uppercase vowel");
        else
        printf("its an uppercase consonant");
    }
    else if(a>=97&&a<=122)
    {
        if(a==97||a==101||a==105||a==111||a==117)
        printf("its a lowercase vowel");
        else
        printf("its a lowercase consonant");
    }
    else
    printf("its not a letter");
    return 0;
}