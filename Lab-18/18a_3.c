#include <stdio.h>
void interest(float p,float r,float n);
int main() 
{
    float p,r,n;
    printf("Enter a value of p: ");
    scanf("%f", &p);
    printf("Enter a value of r: ");
    scanf("%f", &r);
    printf("Enter a value of n: ");
    scanf("%f", &n);
    interest(p,r,n);
}
void interest(float p,float r,float n)
{
    float res;
    res=(p*r*n)/100;
    printf("interest= %f",res);
}