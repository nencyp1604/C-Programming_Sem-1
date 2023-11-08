#include<stdio.h>
int main()
{
    int i,n;
    double e=1.0;
    printf("Enter the number: ");
    scanf("%d",&n);
    double term=1.0;
    for(i=1;i<=n;i++)
    {
        term=term/i;
        e=e+term;
    }
    printf("Estimated value of e with %d terms: %lf\n",n,e);
}