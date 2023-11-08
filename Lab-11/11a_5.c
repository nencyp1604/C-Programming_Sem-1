#include<stdio.h>
int main()
{
	int i,n,ans;
	printf("Enter n:");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		ans=ans*i;
	}
	printf("%d",ans);
}