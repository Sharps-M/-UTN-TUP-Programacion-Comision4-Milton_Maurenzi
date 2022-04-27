#include <stdio.h>
#include <stdlib.h>

void main()
{
    int clas, pas, hor, pasa;
    printf("Ingrese la opcion correspondiente al vehiculo: \n");
    printf("-[1]-Para Automoviles \n");
    printf("-[2]-Para Camiones: \n");
    printf("-[3]-Para Motos: \n");
    scanf("%d", &clas);

    if (clas>0 & clas<=3 )
    {
        switch(clas)
        {
            case 1:
            printf("**Ingrese la opcion de horario ALTA o BAJA**: \n");
            printf("[1] -Para Horas en ALTA\n");
            printf("[2] -Para horas en BAJA\n");
            scanf("%d", &hor);
            if (hor>0 & hor<=2)
            {
                printf("%d", hor);
            }else
            {
                printf("Opcion Horaria no valida");
            }
        }
    }else
    {
        printf("Opcion no valida");
    }
}