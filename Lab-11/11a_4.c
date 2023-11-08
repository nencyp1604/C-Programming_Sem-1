#include<stdio.h>
int main()
{
	int x,y,i,ans=1;
	printf("Enter x:");
	scanf("%d",&x);
	printf("Enter y:");
	scanf("%d",&y);
	for(i=1;i<=x;i++)
	{
		ans=ans*x;
		y=y-1;
	}
	printf("%d",ans);
}