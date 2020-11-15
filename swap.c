#include<stdio.h>
int main()
{
    int a,b,t=0;
    printf("enter two numbers");
    scanf("%d%d",&a,&b);
    printf("a is %d",a);
    printf("\nb is %d",b);
    t=a;
    a=b;
    b=t;
    printf("\nswapped\na is %d",a);
    printf("\nb is %d",b);
    return 0;

}