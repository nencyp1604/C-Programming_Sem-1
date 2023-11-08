#include<stdio.h>
int main()
{
    int i=1,n,ans=1;
    printf("Enter a value of n: ");
    scanf("%d",&n);
    while(i<=n)
    {
        ans=ans*i;
        i=i+1;
    }
    printf("%d",ans);
}