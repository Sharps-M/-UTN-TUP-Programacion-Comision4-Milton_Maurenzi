#include <stdio.h>
#include <stdlib.h>

/*Escriba un programa que escriba la tabla de multiplicar del 1, 2,....,9*/

void main ()
{
    int i,j,prod;
    prod=1;
    for(i=1;i<=10;i++)
    {
       // printf("%d \n",i);
        for(j=1;j<=10;j++)
        {
            prod=j*i;
            printf("%d por %d = %d \n",i,j,prod);       
        }
    }    
}