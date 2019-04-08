#include <stdio.h>
#include <stdlib.h>
#define T 10


int numero [T];
int indice, i, buscado;

void ordenarVector (int [], int);

int main()
{
    cargaSecuencial(numero,T);
    mostrarvector(numero,T);
    printf("\nEl numero maximo es: %d",buscarMax(numero,T));
    printf("\nEl numero minimo es: %d",buscarMin(numero,T));

    printf("\n\n---------Busca un numero en el vector---------\n\n");
    printf("ingrese un numero: ");
    scanf("%d", &indice);

    buscado=buscarInt(numero,T,indice);
    if (buscado==-1)
    {
        printf("No se encontro su numero en el array");
    }
    else
    {
        printf("Su numero se encuentra en la posicion: %d",buscado);

    }

    ordenarVector(numero, T);
    mostrarvector(numero,T);

    return 0;
}

void ordenarVector(int numeros [], int tam)//Burbugeo
{
    int i,j, aux;

    for (i=0;i<tam-1;i++)
    {
        for (j=i+1;j<tam;j++)
        {
            if(numeros[i]>numeros[j])//criterio
            {
                aux=numeros[i];

                numeros[i]=numeros[j];

                numeros[j]=aux;
            }
        }
    }



}
