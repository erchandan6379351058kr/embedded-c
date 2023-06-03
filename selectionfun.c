/*selection short through through function*/
#include<stdio.h>
void selection_short(int*,int);
void main()
{
    int a[5];
    int ele,i;
    ele=sizeof(a)/sizeof(a[0]);
    printf("Enter the ele...\n");
    for(i=0;i<ele;i++)
    scanf("%d",&a[i]);
    selection_short(a,ele);
}
void selection_short(int*a,int ele)
{
    int i,j,t;
    for(i=0;i<ele-1;i++)
    {
        for(j=i+1;j<ele;j++)
        {
            if(a[i]>a[j])
            {
                t=a[i];
                a[i]=a[j];
                a[j]=t;
            }
        }

    }
    for(i=0;i<ele;i++)
    printf(" %d",a[i]);
}