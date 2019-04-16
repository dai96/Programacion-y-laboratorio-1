#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define T 2
#define LIBRE 0
#define OCUPADO 1

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
void mostrarUno(eEmpleado empleado);
void darBaja (eEmpleado lista[], int i);
void inicializarEmpleado (eEmpleado lista[], int tam);
int buscarLibre (eEmpleado lista[], int tam);

