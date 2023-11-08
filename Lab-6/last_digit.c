#include<stdio.h>
int main()
{
    int num;
    printf("Enter a Number: ");
    scanf("%d",&num);
    int last_digit=num%10;
    if(last_digit%2==0)
    {
        printf("last digit %d is even.",last_digit);
    }
    else
    {
        printf("last digit %d is odd.",last_digit);
    }
}