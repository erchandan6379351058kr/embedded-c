/*How many times will "Neso"be printed on the screen*/
#include<stdio.h>
void main()
{
    int i=-5;
    while(i<=5)
    {
        if(i>=0)
        break;
        else
        {
            i++;
            continue;
        }
        printf("Neso");
        
    }
}