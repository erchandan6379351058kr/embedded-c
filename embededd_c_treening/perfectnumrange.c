/*perfect number range 1 to 500*/
#include<stdio.h>
void main()
{
    int i,num,sum;
    {
        for(num=1;num<=500;num++)
        {
            for(sum=0,i=1;i<num;i++)
            if(num%i==0)
            {
                sum=sum+i;
            }
            if(sum==num)
            printf(" %d",num);
        }
    }
}