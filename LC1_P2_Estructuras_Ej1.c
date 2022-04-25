#include <stdio.h>
#include <stdlib.h>

/*  1- Ingresar por teclado dos números, determinar cuál es el mayor y visualizarlo en
pantalla. */
void main()
{
    float num1, num2;

    printf("1- Ingresar por teclado dos n%cmeros, determinar cu%cl es el mayor y visualizarlo en pantalla.\n\n",163,160);
    printf("Ingrese el valor del primer n%cmero ",163);
    scanf  ("%f", &num1);

    printf("Ingrese el valor del Segundo n%cmero ",163);
    scanf("%f", &num2);
    if (num1 > num2){
        printf("El n%cmero ingresado primero es el mayor %0.2f \n => ",163, num1);
    }else{
        printf("El n%cmero ingresado segundo es el mayor %0.2f \n => ",163, num2);
    }
    system("pause");
}