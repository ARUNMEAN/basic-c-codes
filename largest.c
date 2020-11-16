#include<stdio.h>
int main()
{
    int a,b;
    printf("\nenter two numbers");
    scanf("%d%d",&a,&b);
    if(a>b)
    {
        printf("\n%d is larger",a);
    }
    else
    {
        printf("\n%d is larger",b);
    }
    return 0;
}