#include<stdio.h>
int main()
{
    int a,b,c;
    printf("Enter a value of a: ");
    scanf("%d",&a);
    printf("Enter a value of b: ");
    scanf("%d",&b);
    printf("Enter a value of c: ");
    scanf("%d",&c);
    if(a>b)
    {
        if(a>c)
        {
            printf("c is sec largest.");
        }
        else
        {
            printf("a is sec largest.");
        }
    }
    else
    {
        if(b>c)
        {
            printf("c is sec largest.");
        }
        else
        {
            printf("b is sec largest.");
        }
    }
}