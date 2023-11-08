#include<stdio.h>
int main()
{
    int x,y,i=1,ans=1;
    printf("Enter a value of x: ");
    scanf("%d",&x);
    printf("Enter a value of y: ");
    scanf("%d",&y);
    while(y>=1)
    {
        ans=ans*x;
        y=y-1;
    }
    printf("%d",ans);
}