#include <stdio.h>
#include <stdlib.h>
#include <time.h>


void cargaSecuencial (int vec[], int tam)
{
    int i;
    for (i=0;i<tam;i++)
    {
        printf("Ingrese un numero: ");
        scanf("%d", &vec[i]);
    }

}

void mostrarvector (int vec [], int tam)
{
    int i;
    printf("\n\n--------Ingresaste---------\n\n");
    for (i=0;i<tam;i++)
    {
        printf("%d|",vec[i]);
    }
}

int buscarMax (int vec [], int tam)
{
    int i;
    int flag=0,max;
    for (i=0;i<tam;i++)
    {
        if (flag==0||max<vec[i])
        {
            max=vec[i];
            flag=1;
        }
    }
    return max;
}

int buscarMin (int vec [], int tam)
{
    int i;
    int flag=0,min;
    for (i=0;i<tam;i++)
    {
        if (flag==0||min>vec[i])
        {
            min=vec[i];
            flag=1;
        }
    }
    return min;
}

int buscarInt (int vec [], int tam, int indice)
{
    int i;
    int indiceAux=-1;

    for (i=0;i<tam;i++)
    {
        if (indice==vec[i])
        {
            indiceAux=i;
        }
    }

   return indiceAux;

}

