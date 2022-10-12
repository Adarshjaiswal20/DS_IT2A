#include<stdio.h>
int factorial (int);
void main()
{
    int n,fact,a;
    printf("enter a no for factorial");
    scanf("%d",&n);
    fact = factorial (n);
    printf("the factorial is %d",fact);
}
    int factorial (int a)
    {
        if (a==1)
        return 1;
        else 
        return(a*factorial(a-1));
     }
    


