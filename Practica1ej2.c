#include <stdio.h>

int main(){
    int num1;
    int num2;
    int num3;
    int resultado;
    printf("ingresar el valor del primer numero a sumar \n");
    scanf ("%d", &num1);
    printf("ingresar el valor del segundo numero a sumar \n");
    scanf ("%d", &num2);
    printf("ingresar el valor del tercer numero a sumar \n");
    scanf ("%d", &num3);
    resultado = num1 + num2 + num3;
    printf("El resultado de la suma es: %d\n ", resultado);
    system("pause");
    return 0;
}