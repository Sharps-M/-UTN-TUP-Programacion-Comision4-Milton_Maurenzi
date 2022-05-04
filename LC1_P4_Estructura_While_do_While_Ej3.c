#include <stdio.h>
#include <stdlib.h>

/*Pedir al usuario que ingrese 10 números reales, validar que los mismos sean valores
positivos, si el usuario ingresa un número negativo o nulo, pedir reingresar el número
(repetir el ingreso de dicho número mientras el número no sea correcto). Informar al
usuario la suma de los 10 números ingresados.*/

void main()
{
    int num, sum, i;
    sum = 0;
    i=0;
    do
    {
        printf("Ingrese un valor: \n");
        scanf("%d", &num);
        sum = sum + num;
        i=i+1;
        if (i==10)
        {
            printf("La suma de los numeros ingresados es: %d", sum);
        }if (num < 0)
        {
            printf("No se permiten valores menores a 0 \n");
        }/*if (num%2!>=0)
        {
            printf("Solo numeros reales \n");
        }*/
    }while (i<10);
    system("pause");
}