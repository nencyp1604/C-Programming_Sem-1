#include<stdio.h>
int main()
{
    int i=1,sum=0,n;
    printf("Enter a value of n:");
    scanf("%d",&n);
    while(i<=n)
    {
        if(i%2==0)
        {
            sum=sum-i;
        }
        else
        {
            sum=sum+i;
        }
        i++;
    }
    printf("%d\n",sum);
}