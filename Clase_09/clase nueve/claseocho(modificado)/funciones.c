#include "funciones.h"

int i;

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


void mostrarUno(eEmpleado empleado)
{
    if (empleado.estado==OCUPADO)
    printf("\n%d %s %c %.2f ",empleado.legajo,empleado.nombre,empleado.sexo,empleado.sueldoNeto);
}

void mostrarLista (eEmpleado lista[], int tam)
{
    for (i=0;i<tam;i++)
    {
        mostrarUno(lista[i]);
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
        if (lista[i].estado==LIBRE)
        {
            aux=i;
            break;
        }
    }
    return aux;
}

int generarLegajo (eEmpleado unempleado)
{



}

