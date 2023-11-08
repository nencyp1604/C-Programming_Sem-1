#include<stdio.h>
int main()
{
    int n;
    printf("Enter a size of array: ");
    scanf("%d",&n);
    int a[n],i,temp;
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Enter element to search: ");
    scanf("%d",&temp);
    for(i=0;i<n;i++)
    {
        if(temp==a[i])
        {
            printf("%d",i);
        }
    }
    printf("Element not found.");
    return 0;   
}