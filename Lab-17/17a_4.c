#include<stdio.h>
int main()
{
    int a,b;
    int *ptr1,*ptr2;
    int temp;
    printf("Original Number-a: ");
    scanf("%d",&a);
    printf("Original Number-b: ");
    scanf("%d",&b);
    ptr1=&a;
    ptr2=&b;
    temp=*ptr2;
    *ptr2=*ptr1;
    *ptr1=temp;
    printf("swap number-a: %d\n",a);
    printf("swap number-b: %d",b);
}