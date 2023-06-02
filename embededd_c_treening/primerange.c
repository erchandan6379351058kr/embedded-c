/*prime number range 1 to 500*/
#include<stdio.h>
void main()
{
    int i,num,c;
    for(num=1;num<=500;num++)
    {
        for(c=0,i=1;i<=num;i++)
        if(num%i==0)
        {
            c++;
        }
        if(c==2)
        printf(" %d",num);
    }
}