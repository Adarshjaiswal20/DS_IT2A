//ADARSH JAISWAL//
//2100320130013//
//WAP IN C TO IMPLEMENT BUBBLE SORT ARRAY//
#include<stdio.h>
void main()
{
    int a[100],n,i,j,temp;
    printf("how many elements");
    scanf("%d",&n);
    printf("enter the elements of array");
    for(i=0;i<=n-1;i++)
    {
        scanf("%d",&a[i]);
    }
        for(j=0;j<=n-1-i;j++)
        {
            if (a[j]>a[j+1])
            {
                temp= a[j];
                a[j]= a[j+1];
                a[j+1]= temp;
            }
        }
    
    printf("the sorted array");
    for(i=0;i<=n;i++)
        printf("%d",a[i]);
    
}
    
