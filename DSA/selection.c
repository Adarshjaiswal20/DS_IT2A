//ADARSH JAISWAL//
//2100320130013//
//WAP IN C TO IMPLEMENT SELECTION SORT//
#include<stdio.h>
void main()
{
    int i,j,n,a[10],temp,min,p;
    printf("enter the elements");
    scanf("%d",&n);
    printf("enter the elements");
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    for(i=0;i<n-1;i++)
    {
        min =i;
        for(j=i+1;j<n;j++)
        {
            if(a[j]<a[min])
              min= j;
        }
        temp= a[min];
        a[min]= a[i];
        a[i]= temp;
    }
    printf("the sorted array");
    for(i=0;i<n;i++)
     printf("%d  ",a[i]);
    
}