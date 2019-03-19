#include <stdio.h>
#include <stdlib.h>

int main()
{
    int numUno;
    int numDos;
    int suma;

    printf("Porfavor ingrese un numero ");
    scanf("%d", &numUno);
    printf("Ahora ingrese otro numero ");
    scanf("%d", &numDos);

    suma = numUno + numDos;
    printf("\nLa suma de ambos numeros da: %d \n", suma);

    return 0;
}
