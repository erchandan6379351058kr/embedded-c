/*palindrome number range 1 to 999*/
#include<stdio.h>
void main()
{
    int num,temp,r,sum;
    for(num=1;num<=999;num++)
    {
        sum=0;
        temp=num;
        while(temp>0)
        {
            r=temp%10;
            sum=sum*10+r;
            temp=temp/10;

        }
        if(sum==num)
        printf(" %d",num);

        
    }
}