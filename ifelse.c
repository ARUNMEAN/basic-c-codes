#include<stdio.h>
int main()
{
    int a;
    printf("enter the number");
    scanf("%d",&a);
    if(a<0)
    {
        printf("\nnumber is negative");
    }
    else
    {
        printf("\nnumber is positive");
    }
    return 0;
    
}