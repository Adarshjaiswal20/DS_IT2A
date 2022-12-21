//calculate average marks of students//
#include<stdio.h>
void main()
{
    int a,b,c,d,e,average;
    printf("enter the marks of frist subject");
    scanf("%d",&a);
    printf("enter the marks of second subject");
    scanf("%d",&b);
    printf("enter the marks of third subject");
    scanf("%d",&c);
    printf("enter the marks of fourth subject");
    scanf("%d",&d);
    printf("enter the marks of fifth subject");
    scanf("%d",&e);
    average = (a+b+c+d+e)/5;
    printf("the average is =%d",average);
}