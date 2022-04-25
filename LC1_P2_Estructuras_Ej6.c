#include <stdio.h>
#include <stdlib.h>

/*Leer una nota de un alumno por consola e informar la condición del mismo. (menor
que 4: Reprobado, menor que 6: Regular, mayor o igual que 6: Promocionado)
*/

void main(){
    int not;
    printf("ingrese la calificacion del alumno ");
    scanf("%d", &not);

    if (not < 4){
        printf("Alumno reprobado");
    }else if ( not >= 4 && (not <= 6)){
        printf("Alumno Regular ");
    }else{
        printf("Promocionado ");
    }
    system("pause");
    return 0;
}