//find the force 
#include<stdio.h>
float force(float,float);
float force( float m,float g )
{
    return m*g;
}
int main()
{
    float m,g=9.81,f;
    printf("enter the mass: ");
    scanf("%f",&m);
    f= force(m,g);
    printf("the force is %f",f);
}