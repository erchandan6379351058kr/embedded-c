/*To check palindrome number*/
#include<stdio.h>
void main()
{
    int num,temp,r,sum=0;
    printf("Enter the number...\n");
    scanf("%d",&num);
    temp=num;
    while(num>0)
    {
        r=num%10;
        sum=sum*10+r;
        num=num/10;
    }
    if(temp==sum)
    printf("palindrome Number...\n");
    else
    printf("Not palindrome Number...\n");
}