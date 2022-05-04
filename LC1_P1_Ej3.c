#include <stdio.h>
#include <stdlib.h>

/*Ingresar los lados de un triángulo calcular su perímetro e imprimirlo.*/

int main()
{
    int num1, num2, num3, val1, val2, val3, res;
    printf("ingresar el valor del primer lado del tri%cngulo: \n",160);
    scanf ("%d", &num1);
    printf("ingresar el valor del segundo lado del tri%cngulo: \n",160);
    scanf ("%d", &num2);
    printf("ingresar el valor del tercer lado del tri%cngulo: \n",160);
    scanf ("%d", &num3);
    val1 = num1+num2;
    val2 = num1+num3;
    val3 = num2+num3;
    res = num1 + num2 + num3;

    if(val1<num3 && val2<num2 && val3<num1)
    {
        printf("El per%cmetro del tri%cngulo es: %d\n ",161,160, res);
    }else
    {
        printf("\n");
        printf("La regla principal que da origen al tri%cngulo tiene que ver con la longitud de sus lados.\n",160);
        printf("Esta plantea que la suma de dos de sus lados debe ser mayor a la longitud del tercer lado\n");
    }
    system("pause");
    return 0;
}