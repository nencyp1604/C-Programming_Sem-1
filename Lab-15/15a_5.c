#include<stdio.h>
int main()
{
    int i,length=0;
    char a[1000];
    printf(" Enter String-1: ");
    gets(a);
    for(i=0;a[i]!='\0';i++)
    {
        length++;
    }
    printf("Length of String: %d\n",length);
    printf("%s",a);
    return 0;
}