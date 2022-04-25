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

    if (mes >= 1 &&(mes <=12)){
        if(mes == 1){
            printf("Enero ");
        }if (mes == 2){
            printf("Febrero ");
        }if (mes == 3){
            printf("Marzo ");
        }if (mes == 4){
            printf("Abril ");
        }if (mes == 5){
            printf("Mayo ");
        }if (mes == 6){
            printf("Junio ");
        }if (mes == 7){
            printf("Julio ");
        }if (mes == 8){
            printf("Agosto ");
        }if (mes == 9){
            printf("Septiembre ");
        }if (mes == 10){
            printf("Octubre ");
        }if (mes == 11){
            printf("Noviembre ");
        }if (mes == 12){
            printf("Diciembre ");
        }    
        }else{
            printf("Ud no ingreso un mes v%clido: ", 160);
        }
    system("pause");
    return 0;
}