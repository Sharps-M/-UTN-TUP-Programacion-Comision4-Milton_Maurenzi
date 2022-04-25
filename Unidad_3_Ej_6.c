#include <stdio.h>
#include <stdlib.h>

/*Ingresar los resultados del parcial para los 20 alumnos de un curso y al finalizar informar el promedio*/

void main()
{
    int i,acum,cant;
    i=1;
    acum=0;
    float prom, not;
    printf("***Ingrese la cantidad de alumnos a promediar: \n");
    scanf("%d", &cant);
    for(i<=1; i<=cant; i++)
    {
        printf("Ingrese la nota del alumno: %d \n", i);
        scanf("%f", &not);
        acum = acum+not;
        prom=acum/cant;
    }
    //printf("%d \n %0.2f \n %d ", acum, prom, cant);
    printf("******* El promedio sobre un total de %d Alumnos fue de %0.2f *******\n",cant, prom);
}