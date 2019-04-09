#include <stdio.h>
#include "ingresos.h"

//en el .c va el desarrollo de las funciones

int pedirEntero(char mensaje[])
{
    int unEntero;

    printf("%s",mensaje);
    scanf("%d",&unEntero);

    return unEntero;
}
