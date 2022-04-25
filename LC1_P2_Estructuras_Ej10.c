#include <stdio.h>
#include <stdlib.h>

/*Leer la nota de un alumno (numérica) y mostrar un mensaje diciendo: suspendido
(menor a 4) ,aprobado (4 0 5), notable (6 o 7), sobresaliente (8 o 9) o matrícula de
honor (10). Mostrar un mensaje si la nota es incorrecta. Este diagrama debe hacerse
de tres maneras diferentes, con: if secuenciales, if-else anidados y switch.*/

//Switch

void main (){
    int not;
    printf("Ingrese la nota del alumno: ");
    scanf("%d", &not);

    switch (not){
        case 1:
        printf("Suspendido ");
        break;

        case 2:
        printf("Suspendido ");
        break;

        case 3:
        printf("Suspendido ");
        break;

        case 4:
        printf("Aprobado ");
        break;

        case 5:
        printf("Aprobado ");
        break;

        case 6:
        printf("Notable ");
        break;

        case 7:
        printf("Notable ");
        break;

        case 8:
        printf("Sobresaliente ");
        break;

        case 9:
        printf("Sobresaliente ");
        break;

        case 10:
        printf("Matricula de Honor ");
        break;

        default:
        printf("el valor ingresado %d No es una nota valida... ", not);
    }
    system("pause");
    return 0;
}