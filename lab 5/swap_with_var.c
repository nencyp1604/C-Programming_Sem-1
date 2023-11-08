#include<stdio.h>
int main()
{
    int a,b,c;
    printf("Enter a val of a: ");
    scanf("%d",&a);
    printf("Enter a val of b: ");
    scanf("%d",&b);
    c=b;
    b=a;
    a=c;
    printf("%d %d",a,b);
}