#include<stdio.h>
int main()
{
    int i,j,n,sum=0;
    printf("Enter a Positive Integer n: ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        int bracket_sum=0;
        for(j=1;j<=i;j++)
        {
            bracket_sum=bracket_sum+j;
        }
        sum=sum+bracket_sum;
    }
    printf("Sum of series: %d\n",sum);
}