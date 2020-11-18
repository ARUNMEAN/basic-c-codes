#include<stdio.h>
void main()
{
    int n;
    printf("\n1-Biriyani\n2-fried rice\n3-Dosa\n4-porotta\nenter your choice\n");
    scanf("%d",&n);
    switch(n)
    {
        case 1:
        printf("\nyou selected Biriyani");
        break;
        case 2:
        printf("\nyou selected fried rice");
        break;
        case 3:
        printf("\nyou selected Dosa");
        break;
        case 4:
        printf("\nyou selected porotta");
        break;
        default:
        printf("\ninvalid choice");
        break;
    }
  
}