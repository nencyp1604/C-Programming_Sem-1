#include<stdio.h>
int main()
{
    float units,total_bill;
    printf("Enter the Electricity Units consumed: ");
    scanf("%f",&units);
    if(units<=50)
    {
        total_bill=units*0.50;
    }
    else if(units<=150)
    {
        total_bill=50*0.50+(units-50)*0.75;
    }
     else if(units<=250)
    {
        total_bill=50*0.50+100*0.75+(units-150)*1.20;
    }
    else
    {
        total_bill=50*0.50+100*0.75+100*1.20+(units-250)*1.50;
    }
    total_bill*=1.20;
    printf("Total Electricity Bill: Rs.%.2f\n",total_bill);
}