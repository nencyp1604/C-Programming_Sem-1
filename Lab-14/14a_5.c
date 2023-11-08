#include<stdio.h>
int main()
{
    int i,height[5],weight[5],count=0;
    for(i=1;i<6;i++)
    {
        printf("person: %d\n",i);
        printf("\nEnter Height: ");
        scanf("%d",&height[i]);
        printf("\nEnter weight: ");
        scanf("%d",&weight[i]);
        if(height[i]>170 && weight[i]<50)
        {
            count++;
        }
        printf("height>170 & weight<50\n%d",count);
    }
}