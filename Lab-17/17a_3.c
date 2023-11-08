#include<stdio.h>
int main()
{
    int a,b;
    int *ptr1,*ptr2;
    int sum;
    printf("Enter a value of a: ");
    scanf("%d",&a);
    printf("Enter a value of b: ");
    scanf("%d",&b);
    ptr1=&a;
    ptr2=&b;
    sum=*ptr1+*ptr2;
    printf("sum is= %d",sum);
    return 0;
}