/*decision makeing in switch case*/
#include<stdio.h>
void main()
{
    int x=23;
    switch(x)
    {
        case 3+3: printf("choice 1");
        break;
        case 3+4*5: printf("choice 2");
        break;
        default:printf("default");
        break;
    }
}