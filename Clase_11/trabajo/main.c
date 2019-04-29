#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include<strings.h>
#include <conio.h>
#include <ctype.h>
#include "funciones.h"
#include "eEmpleado.h"
#define T 10

void hardcodearDatosEmpleados(eEmpleado lista[], int tam);


int main()
{
    int opcion, i;

    eEmpleado lista [T];
    inicializarEmpleado(lista,T);

    for (i=0;i<T;i++)
    {
        printf("%d",lista[i].estado);
    }


    opcion=menuDeOpciones("1.Alta\n2.Mostar\n\n3.Salir\n----------------\nElija una opcion:");
    do
    {
        switch (opcion)
        {
            case 1:
                //altaEmpleado(lista,T);
                //hardcodeEmpleados(lista,T);
                hardcodearDatosEmpleados(lista,T);
                break;
            case 2:
                mostrarLista(lista,T);
                break;
        }

    }while (opcion!=3);

    return 0;

}


void hardcodearDatosEmpleados(eEmpleado lista[], int tam)
{
    int i;
    int legajos[]= {1,8,9,7,2,4};
    char nombres[][50]= {"Carlos","Maria","Carlos","Pedro","Carlos","Mateo"};
    char sexo[]= {'M','F','M','M','M','M'};
    float sueldosBruto[]= {22000,22000,15000,4000,21000,6000};
    int sector[]={1,2,3,1,2,2};

    //eFecha unaFecha = {22,04,2019};

    for(i=0; i<tam; i++)
    {
        lista[i].id = legajos[i];
        strcpy(lista[i].nombre, nombres[i]);
        lista[i].sexo = sexo[i];
        lista[i].sueldoBruto = sueldosBruto[i];
        lista[i].sueldoNeto = sueldosBruto[i] * 0.85;
        lista[i].estado = 1;
        printf("funciona");
        //lista[i].idSector = sector[i];
    }

}
