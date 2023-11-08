#include <stdio.h>
int main()
 {
    int i,j,a=1;
    char alphabet='A';
    for (i=1;i<=5;i++) 
    {
        for (j=1;j<=5-i;j++) 
        {
            printf(" ");
        }
        for(j=1;j<=2*i-1;j++)
        {
            if(j%2==1)
            {
               if(i%2==1)
               {
                printf("%d",a);
                a++;
               }
               else
               {
                printf("%c",alphabet);
                alphabet++;
               }
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
    }
}