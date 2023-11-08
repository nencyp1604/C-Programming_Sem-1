#include <stdio.h>
#include <string.h>
int find_Character(const char *str, char target)
 {
    int length=strlen(str);
    for (int i=0;i<length;i++) 
    {
        if (str[i]==target) 
        {
            return i;  
        }
    }
}
int main() 
{
    char input_String[100];
    char target_Char;
    printf("Enter a string: ");
    scanf("%s", input_String);
    printf("Enter the character to find: ");
    scanf(" %c", &target_Char);
    int index = find_Character(input_String,target_Char);
    if (index!=-1) 
    {
        printf("Character '%c' found at index %d in the string.\n", target_Char,index);
    } 
    else 
    {
        printf("Character '%c' not found at index %d in the string.", target_Char,index);
    }
    return 0;
}