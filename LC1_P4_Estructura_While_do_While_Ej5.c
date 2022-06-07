#include <stdio.h>
#include <stdlib.h>

/*Se tiene el dni de un alumno y una nota correspondiente a su parcial. Requerir al
usuario ingresar el dni del alumno. Evaluar si el dni ingresado es igual al que se tiene
almacenado. Permitir ingresar un dni incorrecto hasta 3 veces como máximo. Si el
usuario ingresa el dni de manera correcta, mostrar en la consola la nota del alumno.*/

void main()
{
    int dni = 38632584;
    float nota = 7;
    int dniIngresado = 0;
    int intentos = 1;
    int ingresaCorrectamente = 0;

    do
    {
        printf("Ingrese DNI del alumno \n");
        scanf("%d", &dniIngresado);
        printf("DNI Incorrecto \n");

        if (dni == dniIngresado)
        {
        printf("El alumno DNI %d tiene una nota de %0.2f", dni, nota);
        ingresaCorrectamente++;
        printf(" ingresa correctamente %d", ingresaCorrectamente);
        }
        if (intentos==3)
        {
            printf("Intentos maximos alcanzados \n");
            return 0;
        }
        //printf("*****El DNI ingresado es incorrecto***** \n");
        intentos++;
        
    } while (dni != dniIngresado);
}