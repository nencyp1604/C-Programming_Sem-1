#include<stdio.h>
int a,b;            
void add(int,int);
int main()
{
   printf("Enter a value of a: ");
   scanf("%d",&a);
   printf("Enter a value of b: ");
   scanf("%d",&b);
   add(a,b);      
}
void add(int a,int b)
{
    printf("sum = %d",a+b);
}