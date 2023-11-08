#include<stdio.h>
int main()
{
	int n,i=1,a=0;
	printf("Enter any number n:");
	scanf("%d",&n);
	while(i<=n)
	{
		if(n%i==0)
		{
			a++;
		}
		i++;
	}
	if(a==2)
	{
		printf("n is prime number");
	}
	else
	{
		printf("n is not prime number");
	}
}