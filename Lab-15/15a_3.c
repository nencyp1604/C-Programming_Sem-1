#include<stdio.h>
int main()
{
    int n;
    printf("Enter a size of array: ");
    scanf("%d",&n);
    int a[n],i,count=0;
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        if(a[i]%3==0)
        {
            count++;
        }
    }
    printf("number of divisible by 3 are:%d ",count);
}