#include <stdio.h>
#include <stdlib.h>

/*Se desea escribir un algoritmo que pida la altura de una persona, si la altura es menor
o igual a 150 cm envíe el mensaje: “Persona de altura por debajo de la media”; si la
altura está entre 151 y 170 escriba el mensaje: “Persona de altura media” y si la altura
es mayor al 171 escriba el mensaje: “Persona de altura por arriba de la media”*/

void main (){
    float alt;
    printf("Ingrese la altura de la persona: ");
    scanf("%f", &alt);

    if (alt >= 151 && (alt <= 170)){
        printf("Persona de Altura media. ");
    } else if ( alt > 171 ){
        printf("Persona de altura por arriba de la media ");
    }else {
        printf("Persona por debajo de la media ");
    }
    system("pause");
    return 0;
}