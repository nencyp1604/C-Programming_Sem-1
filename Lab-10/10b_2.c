#include<stdio.h>
void main()
{
	int i=2,n,flag=0;
	printf("Enter a positive integer:");
	scanf("%d",&n);
	while(i<=n/2)
	{
		if(n%i==0)
		{
		flag=1;
		break;
	    }
	    i++;
	}
	if(flag==0)
		{
		    printf("%d is Prime Number.",n);
		}
	else
	{
		printf("%d is not Prime Number.",n);
	}
}