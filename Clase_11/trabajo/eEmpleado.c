#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include<strings.h>
#include<string.h>
#include <conio.h>
#include <ctype.h>
#include "funciones.h"
#include "eEmpleado.h"

#define LIBRE 0
#define OCUPADO 1

int menuDeOpciones (char mensaje [])
{
    int opcion;
    /*printf("-----------------------------\n\n\nBienvenido!");
    system(pause);
    system(clear);*/
    printf("Elija una opcion:\n");
    printf("%s", mensaje);
    scanf("%d",&opcion);

    return opcion;
}

void inicializarEmpleado (eEmpleado lista[], int T)
{
    int i;
    for (i=0;i<T;i++)
    {
        lista[i].estado=LIBRE;
    }
}


int idIncremental(eEmpleado lista[],int limite)
{
    int retorno = 0;
    int i;
    if(limite > 0 && lista != NULL)
    {
        for(i=0; i<limite; i++)
        {
            if(lista[i].estado == 1)///si el anterior esta ocupado
            {
                    if(lista[i].id>retorno)///y esa id sea mayor al retorno
                    {
                         retorno=lista[i].id;///devuelve esa id
                    }

            }
        }
    }

    return retorno+1;///y retorna el lugar siguiente
}

/*
void idSecuncial (eEmpleado lista[], int T, int i)
{
    int j=1;
    for (i=0;i<T,i++)
    {
        eEmpleado[i].id=j;
        j++;
    }
}
*/

void hardcodeEmpleados (eEmpleado lista [], int T)
{
    int i;
    char nombre[][50]={"Dai","Peds","xxx","zzz"};
    char sexo[]={'f','m','f','m'};
    float sueldoBruto[]={1000,2000,3000,4000};
    int sector[]={1,2,3,2};

    for (i=0;i<T;i++)
    {
        lista[i].id=idIncremental(lista,T);
        strcpy(lista[i].nombre, nombre[i]);
        lista[i].sexo = sexo[i];
        lista[i].sueldoBruto = sueldoBruto[i];
        lista[i].sueldoNeto = sueldoBruto[i] * 0.85;
        lista[i].estado = OCUPADO;
        lista[i].idSector = sector[i];
    }
}


int buscarLibre (eEmpleado lista[], int T)
{
    int i;
    int retorno=-1;
    for (i=0;i<T;i++)
    {
        if (lista[i].estado==LIBRE)
        {
            retorno=i;
            break;
        }
    }

    return retorno;
}


int altaEmpleado (eEmpleado lista[],int tam)
{
    int i, retorno=1;
    i=buscarLibre(lista,tam);
    if (i!=-1)
    {
        lista[i].id=idIncremental(lista,tam);
        getString("nombre",lista[i].nombre);
        lista[i].sexo=getCaracter("sexo");
        lista[i].sueldoBruto=getFloat("sueldo bruto");
        lista[i].sueldoNeto=lista[i].sueldoBruto*0.85;
        lista[i].estado=OCUPADO;
    }
    else
    {
        printf("No hay lugar!");
        retorno=0;
    }

    return retorno;
}

void mostrarUno(eEmpleado lista[],int i)
{
    if (lista[i].estado==OCUPADO)
        printf("\n%d %s %c %.2f ",lista[i].id,lista[i].nombre,lista[i].sexo,lista[i].sueldoNeto);
}

void mostrarLista (eEmpleado lista[], int tam)
{
    int i;
    for (i=0;i<tam;i++)
    {
        mostrarUno(lista, i);
    }
}
































int getInt (char mensaje []);

float getFloat (char mensaje []);


char getCaracter (char mensaje []);

void getString(char mensaje [],char vec[]);

void getNombres (char mensaje [], char vec[]);

void upperSegundoNombre (char vec []);

int esNumerico(char vec[]);

int esSoloLetras(char str[]);

void validarString (char validar [], int tam, char solicita[]);
