#include <stdio.h>
#include <stdlib.h>

/*Declarar un array de tipo entero de 5 componentes, asignarles un valor, mostrar la
suma de sus componentes y el promedio.*/

void main()
{
    //Declaramos un array de tamaño invariable
    //int otroArray[5] = {10,22,3333,404,500};

    //Declaramos un array vacio que se llena con 5 elementos
    int array[] = {11,22,33,44,55};
    //Declaramos las variables que vamos a usar suma, i e promedio, inicializamos suma en 0.
    int i, sum;
    float prom;
    sum = 0;
    
    //utilizamos un ciclo for para sumar los elementos del array ya declarado
    for(i=0; i<5;i++)
    {
        sum = sum + array[i];
    }
    //realizamos el promedio por fuera del ciclo for que ya nos da la suma de los elementos del array
    prom = sum/5;
    //imprimimos las variables de suma y promedio
    printf("%i \n", sum);
    printf("%0.2f \n", prom);

    system("pause");
}