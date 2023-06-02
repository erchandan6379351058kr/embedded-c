#include<stdio.h>
void main()
{
    int i;
    for(i=0;i<20;i++)
    {
        switch(i)
        {
            case 0:i+=5;
            case 1:i+=2;
            case 2:i+=5;
            case 3:i+=4;
        }
    }
}