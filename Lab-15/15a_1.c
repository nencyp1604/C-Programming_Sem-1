#include<stdio.h>
int main()
{
     int n;
     printf("Enter size of array: ");
     scanf("%d",&n);
     int a[n],b[n],i;
     for(i=0;i<n;i++)
     {
        scanf("%d",&a[i]);
     }
     for(i=0;i<n;i++)
     {
        b[i]=a[i];
     }
     for(i=0;i<n;i++)
     {
        printf("element in b[%d]: %d\n",i,b[i]);
     }
     return 0;
}