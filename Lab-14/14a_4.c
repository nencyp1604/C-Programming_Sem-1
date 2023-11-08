#include<stdio.h>
int main()
{
    int n;
    printf("Enter a size of array: ");
    scanf("%d",&n);
    int arr[n],i,min,sum=0;
    float avg=0;
    for(i=0;i<n;i++)
    {
      printf("Enter a number: ");
      scanf("%d\n",&arr[i]);
    }
    int max=arr[0];
    min=arr[0];
    
    for(i=0;i<n;i++)
    {  
      if(max<arr[i])
      {
        max=arr[i];
      }
    }
    printf("max num is:%d\n",max);
    for(i=0;i<n;i++)
    {
     if(min>arr[i])
     {
        min=arr[i];
     }
    }
    printf("min num is:%d\n",min);
    for(i=0;i<n;i++)
    {
        sum=sum+arr[i];
    }
    avg=sum/n;
    printf("sum=%d\n",sum);
    printf("avg=%f",avg);
}