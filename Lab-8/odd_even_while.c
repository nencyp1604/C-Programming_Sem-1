#include<stdio.h>
int main()
{
    int i=0,n,odd=0,even=0;
    printf("Enter a valye of n: ");
    scanf("%d",&n);
    while(i<=10)
    {
        scanf("%d",&n);
        if(n%2==0)
        {
            even++;
        }
        else
        {
            odd++;
        }
        i++;
    }
    printf("odd: %d\n",odd);
    printf("even: %d",even);
}