#include<stdio.h>
void main()
{
    int i,A[5],n;
    printf("enter the size of the array");
    scanf("%d",&n);
    printf("enter the array elements");
    for(i=1;i<=n;i++)
    {
          scanf("%d",&A[i]);
    }
    for(i=n;i>=1;i--)
    {
        printf("%d\n",A[i]);
    }
    
    
}