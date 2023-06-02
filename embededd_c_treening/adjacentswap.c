/*Adjecent swapping*/
#include<stdio.h>
void main()
{
    int a[6];
    int ele,i,j,t;
    ele=sizeof(a)/sizeof(a[0]);
    printf("Enter the ele...\n");
    for(i=0;i<ele;i++)
    scanf("%d",&a[i]);
    for(i=0;i<ele;i=i+2)
    {
        t=a[i];
        a[i]=a[i+1];
        a[i+1]=t;
    }
    for(i=0;i<ele;i++)
    printf(" %d",a[i]);
}