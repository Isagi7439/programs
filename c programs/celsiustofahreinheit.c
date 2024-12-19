#include<stdio.h>
float c2f (float);
float c2f (float t)
{
    return ((9*t)/5)+32;
}
int main()
{
    float t;
    printf ("Enter the temperature");
    scanf ("%f",&t);
    printf ("%f", c2f(t));
    return 0;
}