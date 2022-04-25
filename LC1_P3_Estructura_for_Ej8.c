#include <stdio.h>
#include <stdlib.h>

/*Escriba un programa que lea un número n1, y escriba la tabla de multiplicar del
número*/

void main()
{
    int i;
    float num, prod;
    prod=1;
    printf("Escriba el n%cmero a multiplicar \n", 163);
    scanf("%f", &num);

    for(i=1; i<=10; i++)
    {
        prod=num*i;
        printf("%d: %0.2f \n",i, prod);
    }
}