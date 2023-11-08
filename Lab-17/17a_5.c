#include<stdio.h>
int main()
{
    int n;
    printf("Enter a size of array: ");
    scanf("%d",&n);
    int arr[n],i;
    int *ptr;
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    ptr = &arr;
    for(i=0;i<n;i++)
    {
        printf("%d \n",*(ptr+i));
    }  
}