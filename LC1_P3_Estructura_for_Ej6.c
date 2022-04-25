#include <stdio.h>
#include <stdlib.h>

/*Suma de los 10 primeros números múltiplos de tres*/

void main ()
{
    int i, sum;
    sum=0;
    for(i=1;i<=30;i++)
    {
        if(i%3==0)
        {
            sum=sum+i;
        }
    }
    printf("%d \n",sum);
}