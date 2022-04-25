#include <stdio.h>
#include <stdlib.h>

/*Ingresar el valor de una venta y aplicar el 15% de descuento si el valor es >= 100000 y
un 10% si es menor.
*/

void main(){
    float vent, desc, tot;
    printf("Ingrese el valor de la venta ");
    scanf("%f", &vent);

    if (vent >= 10000){
        desc = (vent*15) / 100;
        tot = vent - desc;
        printf("El valor total de la cuenta asciende a %0.2f", tot);
    } else{
        desc = (vent*10) / 100;
        tot = vent - desc;
        printf("El valor total de la cuenta asciende a %0.2f", tot);
    }
    system("Pause");
    return 0;
} 