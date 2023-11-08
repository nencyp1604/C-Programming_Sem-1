#include<stdio.h>
int main()
{
    char alphabet;
    alphabet='A';
    printf("Uppercase alphabets: \n");
    while(alphabet<='Z')
    {
        printf("%c ",alphabet);
        alphabet++;
    }
    alphabet='a';
    printf("\nLowercase alphabets: \n");
    while(alphabet<='z')
    {
        printf("%c ",alphabet);
        alphabet++;
    }
}