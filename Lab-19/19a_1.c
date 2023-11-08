#include<stdio.h>
int fact(int n);
int main()
{
    int n;
    printf("Enter a Value Of n: ");
    scanf("%d",&n);
    int res=fact(n);
    printf("%d",res);
}
int fact(int n)
{
    if(n==1)
    {
        return 1;
    }
    else
    {
        return n*fact(n-1);
    }
    return 0;
}