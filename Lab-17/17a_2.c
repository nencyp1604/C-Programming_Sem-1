#include <stdio.h>
void main()
{
    int num1=16; 
    int *ptri;
    ptri=&num1; 
    printf("Value of the variable: %d\n", *ptri);
    printf("Address of the variable: %d\n",ptri);
    float num2=16; 
    float *ptrf;
    ptrf=&num2; 
    printf("Value of the variable: %f\n", *ptrf);
    printf("Address of the variable: %d\n",ptrf);
    double num3=16; 
    double *ptrd;
    ptrd=&num3; 
    printf("Value of the variable: %lf\n", *ptrd);
    printf("Address of the variable: %d\n",ptrd);
    char word='N';
    char *ptrc;
    ptrc=&word; 
    printf("Value of the variable: %c\n", *ptrc);
    printf("Address of the variable: %d\n",ptrc);
}