#include <stdio.h>
#include <stdlib.h>

/*Dado el vector {10, 20, 5, 15, 30, 20}
- Informar el vector de la forma: "Indice: X, Valor: Y".
- Totalizar el vector e informar el total.
- Informar el contenido de las posiciones impares.
- Informar las posiciones que contienen números impares.
- Informar el mayor número.
- Informar cuántas veces aparece el número 20.*/

void main()
{
    //Declaramos el array (vector) solicitado por el ejercicio
    int array[6] = {10, 20, 5, 15, 30, 20};
    //Declaramos variables a usar (sumatoria, cantidad impar, numero mayor, repeticion del 20)
    int sum, i, imp, may, rep;
    //Inicializamos las variables en 0 de ser necesario.
    sum=0;
    imp=0;
    rep=0;

    //como no es necesario hacer en orden... Primero la suma
    for(i=0; i<6;i++)
    {
        sum = sum+ array[i];
    }

    //Cantidad de impares vamos a usar modulo como tambien IF
    for (i=0;i<6;i++)
    {
        if(array[i]%2 != 0)
        {
            imp = imp + 1;
        }
    }

    //Cantidad de numeros iguales a 20, comparamos del mismo modo
    for (i=0;i<6;i++)
    {
        if(array[i]==20)
        {
            rep = rep + 1;
        }
    }

    printf("-La suma de los valores del array es %i \n", sum);
    printf("-La cantidad de los valores impares del array es %i \n", imp);
    printf("-La cantidad de veces que se repite 20 entre los valores del array es %i \n", rep);
    
    system("pause");
}