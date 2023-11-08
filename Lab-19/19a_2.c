#include<stdio.h>
int main()
{
    int n;
    printf("enter a value of array: ");
    scanf("%d",&n);
    int a[n],b[n],i;
    for(i=0;i<n;i++)
    {
        printf("enter element into a[%d]: ",i);
        scanf("%d",&a[i]);  
    }
    for(i=0;i<n;i++)
    {
        printf("enter element into b[%d]: ",i);
        scanf("%d",&b[i]);  
    }
    a[i]=a[i];
    b[i]=b[i];
    for(i=0;i<n;i++)
    {
        printf("element in a[%d]: %d\n",i,a[i]);
        printf("element in b[%d]: %d\n",i,b[i]);
    }
}