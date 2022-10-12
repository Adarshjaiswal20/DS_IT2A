// WAP in C to transpose of 2D array//
//ADARSH JAISWAL
//2100320130013
#include<stdio.h>
void main()
{
    int i,j,k,a[3][3],b[3][3],c[3][3];
    printf("enter the elements of Matrix A");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    printf("enter the elements of matrix B");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            b[i][j]=a[j][i];
            printf("%d\t",b[i][j]);
        }
    }
}