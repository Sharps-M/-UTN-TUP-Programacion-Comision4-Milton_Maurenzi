#include <stdio.h>
#include <stdlib.h>

/*Realizar un programa que calcule el promedio de las notas de los parciales de un curso.
Comenzar pidiendo al usuario la cantidad de alumnos del curso y la cantidad de
parciales que se tomaron durante el cuatrimestre. Calcular el promedio de notas de los
alumnos del curso. A medida que se ingresan las notas, validar que las mismas sean
mayores que 0 (cero) y menores que 10, en caso contrario requerir el ingreso de dicha
nota hasta que sea correcta. Mostrar el promedio de cada alumno a medida que se va
calculando y por último, el promedio general del curso.*/

void main()
{
    int cant_alum, sum_not, cant_parc, i;
    float prom_alum,prom_gral;
    i=0;

        printf("Ingrese la cantidad de alumnos con los que cuenta el curso: \n");
        scanf("%d", &cant_alum);
        printf("Ingrese cantidad de parciales a promediar: \n");
        scanf("%d", &cant_parc);
}