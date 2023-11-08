#include<stdio.h>
struct Employee
{
    int employee_ID;
    char name[50];
    float salary;
};

int main()
{
    struct Employee e1;
    printf("Enter a employee's name: ");
    scanf("%s",&e1.name);
    printf("Enter employee's ID: ");
    scanf("%d",&e1.employee_ID);
    printf("Enter employee's salary: ");
    scanf("%f",&e1.salary);
    printf("Name: %s\n",e1.name);
    printf("Employee's ID: %d\n",e1.employee_ID);
    printf("Salary: %f\n",e1.salary);
}