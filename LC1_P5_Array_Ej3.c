#include <stdio.h>
#include <stdlib.h>

/*Declarar un array de tipo entero de 5 componentes, asignarles un valor por consola,
mostrar cuántas veces se repite el número 5.*/

void main()
{
    //Declaramos un array de tamaño invariable
    //int otroArray[5] = {10,22,3333,404,500};

    //Declaramos un array vacio a llenar en un bucle for
    int array[5];
    //Declaramos las variables que vamos a usar, repeticiones del nro 5 e indice.
    int i, rep;
    rep = 0;
    //Ya sabemos que el array tiene 5 elementos
    //Utilizamos un bucle for para grabar todos los elementos en el array
    for(i=0; i<5;i++)
    {
        printf("Ingrese un numero en el array: \n");
        scanf("%d", &array[i]);
    }
    //Nuestro array ya tiene valores
    //Leemos los valores ingresados en el array, usamos un acumulador para declarar las veces que se repita el numero 5
    for(i=0; i<5 ;i++)
    {
        //SI dentro del array hay un numero IGUAL a 5, se suma 1 al acumulador rep.
        if(array[i]==5)
        {
            rep += 1;
        }
    }
    printf("el numero 5 en su array se repite %d veces \n", rep);
    system("pause");
}