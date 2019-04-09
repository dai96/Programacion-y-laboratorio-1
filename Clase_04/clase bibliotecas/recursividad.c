#include "recursividad.h"

int factorial(int numero)
{
    int resultado;
    int valorAnterior;

    if(numero == 0 || numero == 1)
    {
        resultado = 1;
    }
    else
    {
        resultado = numero * factorial(numero - 1);
    }

    return resultado;
}
