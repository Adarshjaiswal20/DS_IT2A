//WAP  IN  C  TO  CREATE  TO  SETS  AND  PERFORM  UNIUN  OPERATION  ON  SETS
#include<stdio.h>
int main()
{
    int a[10],b[10],c[20],m,n,i,n1,n2,j,k=0;
    printf("ADARSH JAISWAL\n");
    printf("enter the size of set A\n");
    scanf("%d",&n1);
    printf("enter the value of set A\n");
    for(i=0;i<n1;i++){
    scanf("%d",&a[i]);
}
printf("enter the size of setB\n");
scanf("%d",&n2);
printf("enter the value of set B\n");
for(i=0;i<n2;i++){
    scanf("%d",&b[i]);
}
for(i=0;i<n1;i++){
    for(j=0;j<k;j++){
    if(c[j]==a[i])
    break;
}
if(j==k){
    c[k]=a[i];
    k++;
    }}
for(i=0;i<n2;i++){
    for(j=0;j<k;j++){
        if(c[j]==b[i])
        break;
    }
    if(j==k){
        c[k]=b[i];
        k++;
        }}
printf("A U B is:\n");
for(i=0;i<k;i++){
    printf("%d\t",c[i]);
}
return 0;
}