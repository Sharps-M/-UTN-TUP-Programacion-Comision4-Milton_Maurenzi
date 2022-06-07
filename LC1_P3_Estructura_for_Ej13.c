#include <stdio.h>
#include <stdlib.h>

/* 13. Imprimir por consola 10 renglones, de manera que se visualice la siguiente salida:
@@@@
@@@
@@
@
...
*/

void main ()
{
    int i,j,a;
    for(i=1;i<=10;i++)
    {
        for(j=10;j>=i;j--)
        {
            printf("%c",64);
        }
        printf("\n");
    }
    system("pause");
}