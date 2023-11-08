#include<stdio.h>
int main()
{
    int a,b,d;
    char c;
    printf("Enter Your Choice(+,-,*,/): ");
    scanf("%c",&c);
    printf("Enter a value of a: ");
    scanf("%d",&a);
    printf("Enter a value of b: ");
    scanf("%d",&b);
    if(c=='+')
    {
        d=a+b;
        printf("Sum is a+b=%d",d);
    }
     if(c=='-')
    {
        d=a-b;
        printf("Substraction is a-b=%d",d);
    }
     if(c=='*')
    {
        d=a*b;
        printf("Multiplication is a*b=%d",d);
    }
     if(c=='/')
    {
        d=a/b;
        if(b!=0)
        {
        printf("Division is a/b=%d",d);
        }
        else
        {
            printf("Enter Valid b.");
        }
    }
    return 0;
}