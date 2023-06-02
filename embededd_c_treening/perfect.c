/*To check perfect number */
#include<stdio.h>
void main()
{
    int i,num,sum;
    printf("Enter the number...\n");
    scanf("%d",&num);
    for(sum=0,i=1;i<num;i++)
    if(num%i==0)
    {
        sum=sum+i;
    }
    if(sum==num)
    printf("perfect number...\n");
    else
    printf("Not perfect number...\n");
}