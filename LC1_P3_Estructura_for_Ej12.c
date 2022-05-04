#include <stdio.h>
#include <stdlib.h>

/*. Imprimir por consola 10 renglones, de manera que se visualice la siguiente salida:
@
@@
@@@
@@@@
...
*/

void main ()
{
    int i,j;
    for(i=1;i<=10;i++)
    {
        for(j=1;j<=i;j++)
        {
            printf("%c",64);
        }
        printf("\n");
    }
    system("pause");
}