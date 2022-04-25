#include <stdio.h>
#include <stdlib.h>


/*Escriba un programa que pida ingresar un número y a continuación escriba en la
consola si el mismo es par o impar.
*/

void main(){
    int num1, mod, par;
    printf("Ingrese el n%cmero para saber si es par o impar ", 163);
    scanf("%d", &num1);
    par = 2;
    mod = num1 % par;
    if (mod == 0){
        printf("El n%cmero %d es par \n",163, num1);
    }else{
        printf("El n%cmero %d es impar \n",163, num1);
    }
    system("pause");
    return 0;
} 