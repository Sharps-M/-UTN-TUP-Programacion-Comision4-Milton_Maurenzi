#include <stdio.h>
#include <stdlib.h>

/*Imprimir la suma de los números impares que se encuentran entre los números 1 y 10.*/

void main()
{
    int i, sum;
    sum=0;
    printf("Imprimir la suma de los n%cmeros impares que se encuentran entre los n%cmeros 1 y 10.\n", 163, 163);
    for(i=1; i<=10; i++)
    {
        if(i%2!=0)
        {
            sum=sum+i;
            //printf("%d \n ***********\n",i);
        }
    }
    printf("%d \n",sum);
}