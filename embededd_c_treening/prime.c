/*To check prime number*/
#include<stdio.h>
void main()
{
    int i,num,c;
    printf("Enter the number...\n");
    scanf("%d",&num);
    for(c=0,i=1;i<=num;i++);
    if(num%i==0)
    {
        c++;
    }
    if(c==2)
    printf("prime number...\n");
    else
    printf("Not prime number...\n");
}