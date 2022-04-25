#include <stdio.h>
#include <stdlib.h>

/*- Pedir al usuario que ingrese dos números (permitir ingresar número con decimales).
Luego presentar el siguiente menú:
1. Informar su suma
2. Informar su resta
3. Informar su multiplicación
4. Informar su división
5. Salir
Seleccione una operación:
Mostrar el resultado de la operación seleccionada. Si el usuario ingresa la opción 5 el
programa debe terminar.
*/

void main (){
    float num1, num2, sum, rest, mult, div;
    int opc;
    printf("Ingrese el valor del primer numero: \n");
    scanf("%f", &num1);
    printf("Ingrese el valor del segundo numero: \n");
    scanf("%f", &num2);
    do{
        printf("1. Informar su suma \n");
        printf("2. Informar su resta \n");
        printf("3. Informar su multiplicacion \n");
        printf("4. Informar su division \n");
        printf("5. Salir \n");
        scanf("%d", &opc);

        switch (opc){
            case 1:
            sum = num1+num2;
            printf("la suma de ambos numeros ingresados es %f \n", sum);
            break;

            case 2:
            rest = num1 - num2;
            printf("El resultado de la resta entre ambos numeros es %f \n", rest);
            break;

            case 3:
            mult = num1*num2;
            printf("la multiplicacion entre ambos es %f \n", mult);
            break;

            case 4:
            div = num1/num2;
            printf("la division entre ambos es de %f \n", div);
            break;

            default:
            printf("Ingrese una opcion valida");
        }
    }while  (opc !=5);
    return 0;
}