#include<stdio.h>
void main()
{
    int a[100],n,i,j,num,flag =0;
    printf("enter the elements");
    scanf("%d",&n);
    printf("enter the elements of array");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("enter the no which want to be search");
    scanf("%d",&num);
    for(i=0;i<n;i++)
    {
        if(a[i]==num)
        {
            flag=1;
            j= i+1;
        }
    }
    if(flag==1)
    printf("The elements is found %d at location %d",num,j);
    else
    printf("the element is not found");
}