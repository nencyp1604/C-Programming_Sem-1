#include <stdio.h>
#include <string.h>
int replace_Character(char *str,char target,char replace)
{
    for (int i=0;str[i]!='\0';i++) 
    {
        if (str[i] == target) 
        {
           str[i]=replace;
        }
    }
}
int main() 
{
    char input_String[100];
    char target,replace;
    printf("Enter a string: ");
    scanf("%s", input_String);
    printf("Enter the character to replace: ");
    scanf(" %c", &target);
    printf("Enter the replace character: ");
    scanf(" %c", &replace);
    replace_Character(input_String,target,replace);
    printf("Modify String: %s\n",input_String);
}
