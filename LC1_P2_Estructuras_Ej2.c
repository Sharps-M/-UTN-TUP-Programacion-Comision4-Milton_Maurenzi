#include <stdio.h>
#include <stdlib.h>

/* Ingresar por teclado dos números, determinar cuál es el mayor y visualizarlo en
pantalla. Informar también si los números son iguales. */

void main(){
    float num1,num2;

    printf("Ingrese el valor del primer numero: ");
    scanf("%f", &num1);

    printf("Ingrese el valor del segundo numero: ");
    scanf("%f", &num2);
       
    if (num1 > num2){
        printf("El numero ingresado primero  es el mayor %f \n ", num1);
        }else if (num1 < num2){
            printf("El Segundo ingresado es mayor %f \n ", num2);
            }else{
                printf("Ambos numeros son iguales %0.2f ");
            }
    system("pause");
    return(0);
    }
    