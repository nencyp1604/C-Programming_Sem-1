#include<stdio.h>
int main()
{
    int month;
    printf("Enter a Month Number(1-12): ");
    scanf("%d",&month);
    switch(month)
    {
        case 1:case 3:case 5:case 7:case 8:case 10:case 12:
        printf("The Month Has 31 Days.");
        break;
        case 4:case 6:case 9:case 11:
        printf("The Month Has 30 Days.");
        break;
        case 2:
        printf("The Month Either 28 or 29 Days.(depends on leap year)");
        break;
        default:
        printf("Invalid Month, Enter The Number(1-12).");
    }
}