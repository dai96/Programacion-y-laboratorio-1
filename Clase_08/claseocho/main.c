#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define T 2
#define LIBRE 0
#define OCUPADO 1

int i, indice;

typedef struct
{
    int estado;
    int legajo;
    char nombre [40];
    char sexo;
    float sueldoBruto;
    float sueldoNeto;
}eEmpleado;

void cargarEmpleado (eEmpleado[], int);
void getString(char mensaje [],char vector[]);
void validarString (char validar [], int tam, char solicita[]);
void mostrarLista (eEmpleado lista[], int tam);
void mostrarUno(eEmpleado lista[],int i);
void darBaja (eEmpleado lista[], int i);
void inicializarEmpleado (eEmpleado lista[], int tam);
int buscarLibre (eEmpleado lista[], int tam);


int main()
{
    eEmpleado lista[T];
    inicializarEmpleado(lista, T);
    indice=buscarLibre(lista,T);
    cargarEmpleado(lista,indice);
    mostrarLista(lista,T);

    return 0;
}

void cargarEmpleado(eEmpleado lista [], int indice)
{
    printf("Ingrese legajo: ");
    scanf("%d",&lista[i].legajo);
    getString("nombre",lista[i].nombre);
    printf("Ingrese sexo: ");
    scanf("%c",&lista[i].sexo);
    printf("Ingrese sueldo bruto: ");
    scanf("%f",&lista[i].sueldoBruto);
    lista[i].estado=OCUPADO;
    lista[i].sueldoNeto=lista[i].sueldoBruto*0.85;
}


void mostrarUno(eEmpleado lista[],int i)
{
    if (lista[i].estado==OCUPADO)
    printf("\n%d %s %c %.2f ",lista[i].legajo,lista[i].nombre,lista[i].sexo,lista[i].sueldoNeto);
}

void mostrarLista (eEmpleado lista[], int tam)
{
    for (i=0;i<tam;i++)
    {
        mostrarUno(lista, i);
    }
}
void getString(char mensaje [],char vector[])
{
    char aux [200];
    printf("Ingrese %s:",mensaje);
    fflush(stdin);
    gets(aux);
    validarString(aux,20,mensaje);
    strcpy(vector,aux);
}

void validarString (char validar [], int tam, char solicita[])
{
    while (strlen(validar)>tam)
    {
        printf("Error! reingrese %s:",solicita);
        fflush(stdin);
        gets(validar);
    }

}

void darBaja (eEmpleado lista[], int i)
{
    lista[i].estado=-1;
}

void inicializarEmpleado (eEmpleado lista[], int tam)
{
    for (i=0;i<tam;i++)
    {
        lista[i].estado=LIBRE;
    }
}

int buscarLibre (eEmpleado lista[], int tam)
{
    int aux=-1;
    for (i=0;i<tam;i++)
    {
        if (lista[i].estado==0)
        {
            aux=i;
            break;
        }
    }
    return aux;
}


