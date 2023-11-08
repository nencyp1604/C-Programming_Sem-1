#include<stdio.h>
int main()
{
    int i=1,n,sum=0,a=0;
    printf("Sum of series is: ");
    scanf("%d",&n);
    while(i<=n)
    {
        a=i*i;
        sum=sum+a;
        i++;
    }
    printf("\n%d",sum); 
}