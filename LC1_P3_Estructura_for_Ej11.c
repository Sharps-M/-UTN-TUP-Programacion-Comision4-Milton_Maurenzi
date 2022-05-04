#include <stdio.h>
#include <stdlib.h>

/*. Imprimir por consola 10 veces el carácter @, de manera que se visualice la siguiente
salida:
@
@@
@@
...
*/
void main()
{
    int i;
    float num;
    for(i=1;i<=10;i++)
    {
        printf("%c %c\n",64,64);   
        num=i%2;
        if (num<=1)
        {
            printf("%c \n",64); 
        }
    }
    system("Pause");
}