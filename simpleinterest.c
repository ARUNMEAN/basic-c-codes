#include<stdio.h>
void main()
{
    int p;
    float r,n,si;
    printf("\nenter the principle amount,interest rate and number of years\n");
    scanf("%d%f%f",&p,&r,&n);
    si=(p*r*n)/100;
    printf("\nsimple interst is %f",si);
}