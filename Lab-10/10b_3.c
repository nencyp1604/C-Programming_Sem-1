#include<stdio.h>
void main()
{
	int number,original_number,reverse_number=0;
	printf("Enter a number:");
	scanf("%d",&number);
	original_number=number;
	while(number!=0)
	{
		int digit=number%10;
		reverse_number=reverse_number*10+digit;
		number/=10;
	}
	if(original_number=reverse_number)
	{
		printf("%d is a palindrome.\n",original_number);
	}
	else
	{
		printf("%d is not a palindrome.",original_number);
	}
}