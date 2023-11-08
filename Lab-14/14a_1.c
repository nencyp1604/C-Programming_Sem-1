#include<stdio.h>
int main()
{
    int n;
    printf("Enter a size of array: ");
    scanf("%d",&n);
    int arr[n],i;
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=n-1;i>0;i--)
    {
        printf("arr[%d]:%d\n",i,arr[i]);
    }
    return 0;
}