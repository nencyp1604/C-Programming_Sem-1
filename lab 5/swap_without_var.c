#include<stdio.h>
int main()
{
    int a,b,c;
    printf("Enter a val of a: ");
    scanf("%d",&a);
    printf("Enter a val of b: ");
    scanf("%d",&b);
    a=a+b;
    b=a-b;
    a=a-b;
    printf("%d %d",a,b);
}