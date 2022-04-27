#include <stdio.h>
#include <stdlib.h>

/*. Se desea leer las calificaciones de 5 alumnos, por cada alumno se leen 3 calificaciones.
Mostrar el promedio por alumno y el promedio general*/

void main()
{
    int alum, i, j, acum, not;
    float prom_1, prom_2, prom_3, prom_gen;
    prom_1=0;
    prom_2=0;
    prom_3=0;
    acum = 0;
    not=0;
    i=1;
    j=1;
    //printf("Hola");
     for(i=1; i<=5; i++)
    {
        //printf("%d \n %d \n", i,j);
        if(i=1)
        {
            for(j=1; j<=3;j++)
            {
                printf("Alumno %d: ",i);
                printf("Ingrese la %d nota: \n", j);
                scanf("%d", &not);
                acum = acum+not;
                prom_1 = acum/j;
            }
        }if (i=2)
        {
            for(j=1; j<=3;j++)
            {
                printf("Alumno %d: ",i);
                printf("Ingrese la %d nota: \n", j);
                scanf("%d", &not);
                acum = acum+not;
                prom_2 = acum/j;
            }
        }if (i=3)
        {
            for(j=1; j<=3;j++)
            {
                printf("Alumno %d: ",i);
                printf("Ingrese la %d nota: \n", j);
                scanf("%d", &not);
                acum = acum+not;
                prom_2 = acum/j;
            }
        }
        i=i+1;
    }
}