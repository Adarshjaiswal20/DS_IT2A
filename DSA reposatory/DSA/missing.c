#include<stdio.h>
void main()
{
    int i,n,sum=0,m ,a[n-1];
    //m=missing number;
    printf("enter the size of the array");
    scanf("%d",&n);
    
    printf("enter the array elemnts:");
    for(i=0;i<n-1;i++)
    {
      scanf("%d",&a[i]);
      sum=sum+a[i];
    }
    m=(n*(n+1))/2 -sum;
    printf("missing number=%d",m);