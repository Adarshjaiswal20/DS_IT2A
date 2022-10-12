//largest elements in array//
#include<stdio.h>
void main()
{
    int n,i,max,a[10];
    printf("enter array size");
    scanf("%d",&n);
    printf("enter the array elements");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    max=a[0];
    for(i=0;i<n;i++)
    {
        if(max<a[i])
        {
            max=a[i];
        }
    }
    printf("the largest number in array is =%d",max);
}