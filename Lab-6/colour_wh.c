#include<stdio.h>
int main()
{
    float R,B,G,R1,B1,G1;
    float wh,cy,mg,ye,bl;
    printf("Enter a value of R: ");
    scanf("%f",&R);
    printf("Enter a value of B: ");
    scanf("%f",&B);
    printf("Enter a value of G: ");
    scanf("%f",&G);
    R1=R/255.0;
    B1=B/255.0;
    G1=G/255.0;
    if(R1>B1 && R1>G1)
    {
        wh=R1;
    }
    else if(B1>R1 && B1>G1)
    {
        wh=B1;
    }
    else
    {
        wh=G1;
    }
    printf("%f",wh);
}