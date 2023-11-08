#include<stdio.h>
void main()
{
	int n,p=0,temp;
	printf("Enter a number:");
	scanf("%d",&n);
    temp = n;
    while (n > 0) 
	{
        int rem = n % 10;
        p = (p) + (rem * rem * rem);
        n = n / 10;
    }
    if (temp == p) 
	{
        printf("It is Armstrong Number.");
    }
    else
    {
        printf("It is not an Armstrong Number.");
    }
}