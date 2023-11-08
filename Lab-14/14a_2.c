#include<stdio.h>
int main()
{
    int a[3][3],cn=0,cp=0,cz=0,i,j;
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
        printf("Enter array elements");
        scanf("%d",&a[i][j]);
       if(a[i][j]>0)
       {
        cn++;
       }
       else if(a[i][j]<0)
       {
        cp++;
       }
       else
       {
        cz++;
       }
       }
       printf("negative numbers: %d\n positive numbers: %d\n numbers of zero: %d\n",cn,cp,cz);
    }
    printf("\n");
    return 0;
}