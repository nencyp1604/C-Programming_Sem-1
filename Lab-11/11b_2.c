#include<stdio.h>
int main()
{
	int i=0,digit,n=0;
	printf("Enter a number: ");
	scanf("%d",&n);
	int arr[10]={0};
	while(n!=0)
	{
		digit=n%10;
		arr[digit]++;
		n/=10;
	}
	for(i=0;i<10;i++)
	{
		printf("%d %d\n",i,arr[i]);
	}
}