#include<stdio.h>
int main()
{
    int a,b,c,max;
    printf("Enter a val of a: ");
    scanf("%d",&a);
    printf("Enter a val of b: ");
    scanf("%d",&b);
    printf("Enter a val of c: ");
    scanf("%d",&c);
    max=(a>b)?((a>c)?a:c):((b>c)?b:c);
    printf("Max Value is %d",max);
}