#include <stdio.h>
#include <stdlib.h>

/*Deseamos realizar un programa que gestione las notas de una clase de 10 alumnos de los
cuales sabemos el DNI y la nota. El programa debe mostrar un menú con las siguientes
opciones a resolver:
1. Cargar Alumnos
2. Buscar un alumno
3. Modificar la nota de un alumno
4. Mostrar un listado de los 10 alumnos
5. Salir
Donde, la opción 1 permite cargar los 10 alumnos ingresando para cada uno: DNI y nota.
Validar que el DNI no sea menor que 1000000 ni mayor que 99999999. Validar que la nota sea
mayor a 0 y menor o igual que 10.
La opción 2 debe pedir el DNI de un alumno y mostrar en consola DNI y nota. Si el DNI
ingresado no existe, informar la situación con un mensaje “DNI inexistente”.
La opción 3 debe pedir el DNI del alumno al cual se desea cambiar la nota y la nueva nota. Si el
DNI ingresado no existe, informar la situación con un mensaje “DNI inexistente”, si el DNI si se
encuentra modificar la nota del alumno por la ingresada.
La opción 4 debe mostrar en la consola el listado de alumnos.
SÓLO se saldrá de la aplicación si se selecciona la opción 5*/

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

    //- Totalizar el vector e informar el total.
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