#include <stdio.h>
#include <stdlib.h>

/*Actualizar el saldo de una cuenta bancaria, a partir de un retiro. Verificar que el saldo
sea mayor o igual que el importe a retirar.*/

void main(){
    float sal, ret, act, verif;
    printf("Ingrese el saldo actual de la cuenta");
    scanf("%f", &sal);
    printf("ingrese el monto a retirar de la cuenta");
    scanf("%f", &ret);

    verif = sal - ret;

    if (verif >= 0){
        act = sal - ret;
        printf("Ud retiro de su cuenta %0.2f, dejandole un saldo de %0.2f \n", ret, act);
    }else {
        printf("ud no tiene fondos suficientes para concretar la operacion");
    }
    system("Pause");
    return 0;
}