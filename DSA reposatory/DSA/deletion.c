#include<stdio.h>
void main()
{
    int i,pos,key,n;
    int a[5]={1,6,5,4,8};
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);

    }
    printf("enter the element to be deleted");
    scanf("%d",&key);
    pos=-1;
    for(i=0;i<n;i++){
        if(a[i]==key)
        {
            pos=i;
            break;
        }
    }
    if(pos== -1){
        printf("element is not present=%d",key);
    }
    else{
    printf("element is present at position=%d",key,pos);
    for(i=pos;i<n-1;i++){
    a[i]=a[i+1];
    
    }
     printf(" new array is:");
     for(i=0;i<n-1;i++){
        printf("%d",a[i]);
     }
   }
}