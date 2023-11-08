#include<stdio.h>      
void max_min(int a,int b);
void main()
{
   int a,b;      
   printf("Enter a value of a: ");
   scanf("%d",&a);
   printf("Enter a value of b: ");
   scanf("%d",&b);
   max_min(a,b);      
}

void max_min(int a,int b)
{
    if(a>b)
    {
      printf("a is grater than b.");
    }
    else
    {
      printf("b is grater than a."); 
    }
}
