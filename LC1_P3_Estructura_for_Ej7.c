#include <stdio.h>
#include <stdlib.h>

/*Diseñe un algoritmo que sume los 20 primeros números impares.*/

void main()
{
    
    int i,acum;
    acum=1;
    for(i=1; i<=20;i+=2)
    {
        acum=acum+i;
    }
    printf("%d \n", acum);
    
}