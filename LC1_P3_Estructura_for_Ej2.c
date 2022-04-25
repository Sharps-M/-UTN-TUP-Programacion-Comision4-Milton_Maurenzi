#include <stdio.h>
#include <stdlib.h>

/*2. Imprimir los números del 1 al 10 uno abajo del otro saltando de a dos*/

void main ()
{
    int i;
    printf("Los primeros n%cmeros pares del 1 al 10 son: \n",163);
    for (i=1; i<=10; i++)
    {
        if (i%2==0)
        {
            printf("%d \n", i);
        }else
        {
            //printf("\n");
    }
}
return 0;
}