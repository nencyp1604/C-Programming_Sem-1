#include<stdio.h>
int main()
{
    int i,j,k,n=1;
    for(i=0;i<5;i++)
    {
        for(k=1;k<=5-i;k++)
        {
            printf("  ");
        }
            for(j=0;j<=i;j++)
            {
                if(j==0 || i==0)
                {
                    n=1;
                }
                else
                {
                    n=n*(i-j+1)/j;
                }
                printf("%4d",n);
            }
            printf("\n");
    }
}