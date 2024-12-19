#include <stdio.h>
int strlen (char str[]);
int strlen (char str[])
{
    int i=0, count;
    char c = str[i];
    while(c!='\0'){
        c=str[i];
        i++;
    }
    count = i-1;
    return count;
}
int main()
{
    char str[]="22";
    int i=0, count;
    printf ("%d", strlen(str));
    return 0;
}