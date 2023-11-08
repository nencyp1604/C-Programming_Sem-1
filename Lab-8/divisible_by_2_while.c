#include<stdio.h>
int main()
{
    int first,second;
    printf("Enter a first number: ");
    scanf("%d",&first);
    printf("Enter a second number: ");
    scanf("%d",&second);
    if(first%2!=0)
    {
        first++;
    }
    printf("Divisible by 2 numbers between first & second numbers are: \n");
    while(first<=second)
    {
        printf("%d\n",first);
        first+=2;
    }
    printf("\n");
}