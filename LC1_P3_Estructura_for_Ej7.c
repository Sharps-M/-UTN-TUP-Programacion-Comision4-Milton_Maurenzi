#include <stdio.h>
#include <stdlib.h>

/*Diseñe un algoritmo que sume los 20 primeros números impares.*/

void main()
{
    
    int i,acum;
    acum=0;
    for(i=1; i<=20;i+=2)
    {
        acum=acum+i;
    }
    printf("\nLa suma de los primeros numeros impares es: %d \n \n",acum);
    system("pause");
}