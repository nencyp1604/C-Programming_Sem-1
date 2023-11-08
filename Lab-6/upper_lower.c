#include<stdio.h>
int main()
{
    char ch;
    printf("Enter a character: ");
    scanf("%c",&ch);
    if(ch>='A' && ch<='Z')
    {
        printf("character in lower case.");
    }
    else if(ch>='A' && ch<='Z')
    {
        printf("character in upper case.");
    }
    else if(ch>='0' && ch<='9')
    {
        printf("character is digit.");
    }
    else
    {
        printf("character is special symbol.");
    }
    return 0;
}