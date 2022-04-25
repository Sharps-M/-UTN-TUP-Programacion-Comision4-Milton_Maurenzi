#include <stdio.h>
#include <stdlib.h>

/*Leer la nota de un alumno (numérica) y mostrar un mensaje diciendo: suspendido
(menor a 4) ,aprobado (4 0 5), notable (6 o 7), sobresaliente (8 o 9) o matrícula de
honor (10). Mostrar un mensaje si la nota es incorrecta. Este diagrama debe hacerse
de tres maneras diferentes, con: if secuenciales, if-else anidados y switch.*/

//vamos a hacerlo con un if secuencia

void main (){
    int not;
    printf("Ingrese la Nota del alumno: ");
    scanf("%d", &not);
    
    if (not = 0 && (not = 4)){
        printf("Suspendido... ");
    }else if (not = 4 && (not = 5)){
        printf("Aprobado... ");
    }else if (not = 6 && (not = 7)){
        printf("Notable... ");
    }else if(not = 8 && (not = 9)){
        printf("Sobresaliente... ");
    }else if(not = 10){
        printf("Cuadro de honor... ");
    }else{
        printf("Ingrese una nota valida (1-10)");
    }

system("pause");
return 0;    
}