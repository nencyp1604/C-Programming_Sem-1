#include<stdio.h>
int main()
{
	int n,sum=0,i=0,value;
	printf("Enter a number:");
	scanf("%d",&n);
	while(i<n)
	{
		printf("Enter    %d",i+1);
		scanf("%d",&value);
	    sum=sum+value;
	    i++;
	}
	    printf("\n sum=%d",sum);
        printf("\n average=%f",((float)sum)/n);
}