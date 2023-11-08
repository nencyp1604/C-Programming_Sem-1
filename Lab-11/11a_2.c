#include<stdio.h>
int main()
{
    int i,n,sum=0;
    printf("Enter a value of n: ");
    scanf("%d",&n);
    for(i=0;i<=n;i++)
    {
        sum=sum+i;
    }
    printf("Sum is = %d",sum);
}