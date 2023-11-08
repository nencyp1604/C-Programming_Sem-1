#include<stdio.h>
int main()
{
    int a,b,x,y,t,lcm,hcf;
    printf("Enter a value of x: ");
    scanf("%d",&x);
    printf("Enter a value of y: ");
    scanf("%d",&y);
    a=x;
    b=y;
    while(b!=0)
    {
        t=b;
        b=a%b;
        a=t;
    }
    hcf=a;
    lcm=(x*y)/hcf;
    printf("HCF of %d and %d is %d\n",x,y,hcf);
    printf("LCM of %d and %d is %d\n",x,y,lcm);
}