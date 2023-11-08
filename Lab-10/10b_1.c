#include<stdio.h>
void main()
{
	int number,i=1,result=0;
	printf("Enter a number:");
	scanf("%d",&number);
	while(i<number)
	{
		if(number%i==0)
		{
			result=result+i;
		}
		i++;
	}
	if(result==number)
	{
		printf("It is perfect.");
	}
	else
	{
		printf("It is not perfect.");
	}
}