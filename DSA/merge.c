#include<stdio.h>
void main()
{
    int a[10],b[10],i,j,temp,c[10],m,n,p;
  
    printf("enter the size of 1st array");
    scanf("%d",&m);
      printf("enter the elments of the 1st array");
    for(i=0;i<m;i++)
    {
        scanf("%d",&a[i]);
    }
       printf("enter the size of 2nd array");
    scanf("%d",&n);
    printf("enter the elements of 2nd array");
    for(i=0;i<n;i++)
    {
        scanf("%d",&b[i]);    
    }
    
p=m+n;

   
    for(i=0;i<m;i++)
    {
         c[i]=a[i];
    }
    for(i=0;i<n;i++)
    {
        c[i+m]=b[i];
    }
    printf("merged array");

for(i=0;i<p;i++)
{
printf("%d\n",c[i]);
}
for(i=0;i<p;i++)
{
    temp;
    for(j=i+1;j<p;j++)
    {
        if(c[i+1]=c[j])
        {
            temp=c[i];
            c[i]=c[j];
            c[j]=temp;
        }
    }
}
for(i=0;i<p;i++)
{
    printf("%d\n",c[i]);
}
}




