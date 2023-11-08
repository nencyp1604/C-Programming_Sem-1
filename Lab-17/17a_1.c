#include <stdio.h>
int main()
{
    int number = 42; 
    int *ptr;
    ptr=&number; 
    printf("Value of the variable: %d\n", *ptr);
    printf("Address of the variable: %d\n",ptr);
    return 0;
}