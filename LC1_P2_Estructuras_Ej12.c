#include <stdio.h>
#include <stdlib.h>

/*
Realizar un programa que permita registrar los datos para una venta de $4600. Para
ello, se le pedirá al usuario que ingrese su DNI, validar que dicho número no sea menor
que 1000000 ni mayor que 99999999. Luego, requerir al usuario que seleccione el
medio de pago: 
1-Efectivo, 
2-Tarjeta de crédito, si selecciona tarjeta, pedir que ingrese
una opción de las siguientes: 
1-Visa, 
2-American Express, 
3-Mercado Pago, 
4-Cabal.
Además, requerir la cantidad de cuotas en las que abonará (1, 3, 6 o 12). El interés por
pagar en cuotas será de: 0 interés para efectivo o 1 cuota, 4% para 3 cuotas y 8% para
6 y 12 cuotas. Validar que todos los datos ingresados por el usuario sean correctos, en
caso contrario informar la situación y finalizar programa. Por último, presentar un
resumen de la operación, por ejemplo:

DNI: 38.456.123
Medio de pago: Tarjeta de crédito
Tarjeta: Cabal
Cuotas: 3
Total: $4784
*/

void main (){
    int op_pago, op_tar, cant_cuo, doc;
    float vent, inter, tot;
    printf("************************************************************\n");
    printf("Por favor ingrese su n%cmero de documento \n",163);
    scanf("%d", &doc);
    //se Hardcodea el monto de la venta, se puede probar un monto habilitando las instrucciones de abajo
    //printf("Ingrese el valor de la venta: \n");
    //scanf("%f", &vent);
    vent = 4600;


    if (doc>1000000 && (doc<99999999))
    {
        //printf("*****Ingreso a anidado*****\n");
        printf("Seleccione m%ctodo de pago:\n",130);
        printf("1. Efectivo\n");
        printf("2. Tarjeta de cr%cdito \n",130);
        scanf("%d", &op_pago);
        //printf("%d \n", op_pago);

        if (op_pago == 1)
        {
            //printf("Efectivo\n");
            printf("Cliente: %d \n", doc);
            printf("Medio de pago: Efectivo\n");
            printf("Tarjeta: (No Aplica)\n");
            printf("Cuotas: (No Aplica)\n");
            printf("Total: $%.2f \n", vent);

        }else if (op_pago ==2)
        {
            //printf("Tarjeta\n");
            printf("Seleccione Tarjeta con la cual se abona:\n");
            printf("1-Visa\n2-American Express\n3-Mercado Pago\n4-Cabal\n");
            scanf("%d", &op_tar);
            printf("************************************************************\n");
            
            switch (op_tar)
            {
                case 1:
                printf("DNI: %d \n",doc);
                printf("Medio de pago: Tarjeta de cr%cdito \n",130);
                printf("Tarjeta: Visa\n");
                break;

                case 2:
                printf("DNI: %d \n",doc);
                printf("Medio de pago: Tarjeta de cr%cdito \n",130);
                printf("Tarjeta: American Express\n");
                break;

                case 3:
                printf("DNI: %d \n",doc);
                printf("Medio de pago: Tarjeta de cr%cdito \n",130);
                printf("Tarjeta: Mercado Pago\n");
                break;

                case 4:
                printf("DNI: %d \n",doc);
                printf("Medio de pago: Tarjeta de cr%cdito \n",130);
                printf("Tarjeta: Cabal\n");
                break;
            }

            if (op_tar>=1 &&(op_tar<=4))
            {
                //printf("%d \n", op_tar);
                printf("Ingrese cantidad de cuotas: ");
                scanf("%d", &cant_cuo);
                if (cant_cuo == 1 || (cant_cuo == 3) || (cant_cuo == 6) || (cant_cuo == 12) )
                {
                    //printf("%d \n", cant_cuo);

                        switch (cant_cuo)
                        {
                            case 1:
                            printf("Cuotas: %d \n",1);
                            printf("Total: $%.2f \n", vent);
                            printf("************************************************************\n");
                            break;

                            case 3:
                            vent = vent +(vent*0.04);
                            printf("Cuotas: %d \n",3);
                            printf("Total: $%.2f \n", vent);
                            printf("************************************************************\n");
                            break;

                            case 6:
                            vent = vent +(vent*0.08);
                            printf("Cuotas: %d \n",6);
                            printf("Total: $%.2f \n", vent);
                            printf("************************************************************\n");
                            break;

                            case 12:
                            vent = vent +(vent*0.08);
                            printf("Cuotas: %d \n",12);
                            printf("Total: $%.2f \n", vent);
                            printf("************************************************************\n");
                            break;

                            default:
                            printf("Cantidad de cuotas erroneo\n ");
                        }
                }else
                {
                    printf("Monto de cuotas erroneo ");
                }
            }else
            {
                printf("Opcion no valida %d \n", op_tar);
            }

        }else
        {
            printf("Metodo de pago no valido \n");
        }
        
    }else
    {
        printf("El DNI INGRESADO NO ES VALIDO %d", doc);
    }
    system("pause");
    return 0;
}