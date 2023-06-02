/*How many times will"Hello,World"be printed in the below program?*/
#include<stdio.h>
void main()
{
    int i=1024;
    for(;i;i>>=1)
    printf("Hello,World");

}