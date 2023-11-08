#include<stdio.h>
int main()
{
    int n;
    printf("Enter a size of array: ");
    scanf("%d",&n);
    int arr[n],i,j,c_even=0,c_odd=0;
    for(i=1;i<=n;i++)
    {
        printf("Enter number[%d]: ",i);
        scanf("%d",&arr[i]);
    }
    if(arr[i]%2==0)
    {
        c_even++;
    }
    else
    {
        c_odd++;
    }
    for(i=1;i<=n;i++)
    {
        if(arr[i]%2==0)
        {
            c_even++;
        }
        else
        {
            c_odd++;
        }
    }
    printf("Even: %d\n and \nOdd: %d",c_even,c_odd);
}