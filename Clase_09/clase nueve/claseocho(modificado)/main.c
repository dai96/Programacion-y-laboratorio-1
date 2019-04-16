#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define T 2
#define LIBRE 0
#define OCUPADO 1
#include "funciones.h"

int i, indice;



int main()
{
    eEmpleado lista[T];
    inicializarEmpleado(lista, T);
    indice=buscarLibre(lista,T);
    cargarEmpleado(lista,indice);
    mostrarLista(lista,T);

    return 0;
}
