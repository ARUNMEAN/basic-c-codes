#include<stdio.h>
int main()
{
    int a,b,n,su,sub,m,d;
    printf("\nenter two numbers");
    scanf("%d%d",&a,&b);
    printf("\npress 1 to perfrom addition\npress 2 to perform subtraction\npress 3 to perform multiplication\npress 4 to perfrom division");
    printf("\npress the number");
    scanf("%d",&n);
    if(n==1)
    {
        su=a+b;
        printf("\nsum is %d",su);
    }
    else if(n==2)
    {
        sub=a-b;
        printf("\ndifference is %d",sub);
    
    }
    else if(n==3)
    {
        m=a*b;
        printf("\nproduct is %d",m);
    }
    else if (n==4)
    {
        d=a/b;
        printf("\ndivided result is %d",d);
    }
    else
    {
        printf("\ninvalid input");
    }
    
    return 0;
}