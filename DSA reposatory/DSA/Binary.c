#include<stdio.h>
void main()
{
    int a[100],n,i,num,first,last,mid;
    printf("enter the no of elements in array ");
    scanf("%d",&n);
    printf("enter the array elements");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("enter the element which want to be searched");
     scanf("%d",&num);
     first=0;
     last = n-1;
     mid = (first+last)/2;
     while(first<=last)
     {
        if(a[mid]<num)
        {
        first = mid+1;
        }
          else if(a[mid]==num)
          {
                printf("the elemnts is first %d at location %d",num,mid+1);
                break;
           }

        else{
           last = mid-1;
        }
           mid= (first+last)/2;
     }
           if(first>last)
           printf("elements is not found");
     }



