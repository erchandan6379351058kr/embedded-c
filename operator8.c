/*logical operator*/
#include<stdio.h>
void main()
{
    int a=5,b=3;
    int incr;
    incr=(a<b)&&(b++);
    printf(" %d\n",incr);
    printf(" %d",b);
}