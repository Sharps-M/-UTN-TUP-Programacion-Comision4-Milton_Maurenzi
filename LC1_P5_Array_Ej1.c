#include <stdio.h>
#include <stdlib.h>

/*Declarar un array de tipo entero de 5 elementos, asignarles un valor, mostrar de la
forma: “Índice: X, Valor: Y” en el orden ingresado y de atrás hacia adelante.*/

void main()
{
    //Declaramos un array vacio que se llena con 5 elementos
    int array[] = {11,22,33,44,55};
    //Declaramos un array de tamaño invariable
    int otroArray[5] = {10,22,3333,404,500};

    printf("Posicion 1 == %d \n", array[0]);
    printf("Posicion 2 == %d \n", array[1]);
    printf("Posicion 3 == %d \n", array[2]);
    printf("Posicion 4 == %d \n", array[3]);
    printf("Posicion 5 == %d \n", array[4]);
    printf("******************************\n");
    printf("******************************\n");
    printf("Posicion 1 == %d \n", otroArray[0]);
    printf("Posicion 2 == %d \n", otroArray[1]);
    printf("Posicion 3 == %d \n", otroArray[2]);
    printf("Posicion 4 == %d \n", otroArray[3]);
    printf("Posicion 5 == %d \n", otroArray[4]);
    printf("Posicion 6? == %d \n", otroArray[5]);
    system("pause");
}