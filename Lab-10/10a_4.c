#include<stdio.h>
int main()
{
	int i,n,digit=0;
	printf("Enter a number:");
	scanf("%d",&n);
	while(n>0)
	{
		digit++;
		n=n/10;
	}
	printf("%d digits",digit);
}