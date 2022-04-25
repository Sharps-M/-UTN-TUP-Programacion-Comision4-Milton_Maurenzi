#include <stdio.h>
#include <stdlib.h>

/*
Pedir al usuario que ingrese un número del 1 al 12 e indicar a qué mes corresponde
dicho número (por ejemplo: si ingresa el número 2 se deberá mostrar febrero en la
consola, si ingresa el 8, agosto, etc.) (realizar el ejercicio primero utilizando estructura
if y luego estructura switch).
*/

void main(){
    int mes;
    printf("Ingrese un mes v%clido: ", 160);
    scanf("%d", &mes);

    switch (mes){

        case 1 :
        printf("Enero ");
        break;

        case 2 :
        printf("Febrero ");
        break;

        case 3 :
        printf("Marzo ");
        break;

        case 4 :
        printf("Abril ");
        break;

        case 5 :
        printf("Mayo ");
        break;

        case 6 :
        printf("Junio ");
        break;

        case 7 :
        printf("Julio ");
        break;

        case 8 :
        printf("Agosto ");
        break;

        case 9 :
        printf("Septiembre ");
        break;

        case 10 :
        printf("Octubre ");
        break;

        case 11 :
        printf("Noviembre ");
        break;

        case 12 :
        printf("Diciembre ");
        break;

        default :
        printf("el mes %d ingresado no es v%clido ", mes,160);
    }
    system("pause");
    return 0;
}