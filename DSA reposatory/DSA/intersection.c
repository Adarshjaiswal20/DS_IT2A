
#include<stdio.h>
void main()
{
    int a[10],b[10],c[10],m,i,n,j,o=0;
    printf("ADARSH JAISWAL IT A\n");
    printf("enter the size of set A\n");
    scanf("%d",&m);
    printf("enter the value of set A\n");
    for(i=0;i<m;i++);
    {
        for(i=0;i<m;i++){
        scanf("%d",&a[i]);
    }}
    printf("enter the size of set B\n");
    scanf("%d",&n);
    printf("enter the values of set B\n");
    for(i=0;i<n;i++){
        scanf("%d",&b[i]);
    }
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
      if(a[i]==b[j])
      {
       c[o]=b[j];o++;
      }}}
        printf("INTERSECTION OF SET ");
        for(i=0;i<o;i++){
            printf("%d ",c[i]);
        }}



    
    