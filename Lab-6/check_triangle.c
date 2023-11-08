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
    if(a==90 && b==45 && c==45)
    {
        printf("Triangle is isosceles.");
    }
    else if(a==60 && b==60 && c==60)
    {
        printf("Triangle is equilateral.");
    }
    else if(a==30 && b==60 && c==90)
    {
        printf("Triangle is scalene.");
    }
    else if(a==120 && b==30 && c==30)
    {
        printf("Triangle is right angled.");
    }
    else 
    {
        printf("It Is Not Triangle.");
    }
}