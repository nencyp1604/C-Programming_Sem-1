#include<stdio.h>
int main()
{
	int num,sum=0,first_digit,last_digit;
	printf("Enter any number:");
	scanf("%d",&num);
	last_digit=num%10;
	first_digit=num;
	while(num>=10)
	{
		num=num/10;
	}
	first_digit=num;
	sum=first_digit+last_digit;
    printf("sum of first and last digit=%d",sum);
		
}