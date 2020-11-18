#include<stdio.h>
int main()
{
    int n,i,s=0;
    printf("\nenter the number");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        s=s+i;
    }
    printf("\nsum of numbers till %d is",n);
    printf("\n%d",s);
    return 0;
}