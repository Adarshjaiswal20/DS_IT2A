//ADARSH JAISWAL//
//2100320130013//
//WAP IN C TO IMPLEMENT INSERTION SORT//
#include<stdio.h>
void main()
{
    int a[10],i,j,n,sto,u,min;
    printf("enter the no of elements");
    scanf("%d",&n);
    printf("enter the elements");
    for(i=0;i<n;i++)
    {
    scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        j=i;
        while(j>0&&a[j-1]>a[j])
        {
            sto = a[j];
            a[j]= a[j-1];
            a[j-1]= sto;
            j--;
        }
    }
    printf("the sorted array");
    for(i=0;i<n;i++)
        printf("%d",a[i]);
    
}