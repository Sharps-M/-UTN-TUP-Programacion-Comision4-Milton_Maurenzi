#include <stdio.h>
#include <stdlib.h>

/* Dado un número introducido por el usuario, indicar si este es positivo, negativo o nulo */
void main(){
    float num;
    printf("Ingrese un valor numerico a definir ");
    scanf("%f", &num);

    if (num > 0){
        printf("El numero ingresado es POSITIVO %f \n ");
    }else if (num < 0){
        printf("El numero ingresado es NEGATIVO %f \n ");
    }else{
        printf("El numero es ingresado es CERO %f \n ");
    }
    system("pause");
}