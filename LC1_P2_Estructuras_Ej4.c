#include <stdio.h>
#include <stdlib.h>

/* Ingresar por teclado tres números, determinar cuál es el mayor y visualizarlo en
pantalla. */

void main(){
    float num1, num2, num3;
    printf("Ingrese el PRIMERO de los TRES numeros a determinar ");
    scanf("%f", &num1);
    printf("Ingrese el SEGUNDO de los numeros a determinar ");
    scanf("%f", &num2);
    printf("Ingrese el TERCERO de los numeros a determinar ");
    scanf("%f", &num3);
    if (num1 == num2 && num2 == num3){
        printf("Los numeros son Iguales %f \n ", num1);
    }else{
        if (num2 > num1 && num2 > num3){
            printf("El SEGUNDO numero ingresado es el mayor %f \n ", num2);
        }else {
            if(num1 > num2 && num1 > num3){
                printf("El PRIMER numero ingresado es el mayor %f \n ", num1);
            }
        }
        printf("El TERCER numero ingresado es el mayor %f \n ", num3);
    }
    system("pause");
    return 0;
}