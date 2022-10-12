#include<stdio.h>
void main()
{
    int n,x;
    printf("enter the three digit number");
    scanf("%d",&n);
    x= digit(n);
    printf("the sum of digit is %d",x);
}
int digit(int a)
{
    if (a==0)
    return 0;
    else 
    return(a%10+ digit(a/10));
}