#include "Empleado.h"
void cargarEmpleado(eEmpleado lista[], int tam)
{
    int i;
    char aceptar;

    i = buscarLibre(lista, tam);
    if(i!=-1)
    {
        lista[i].legajo=idIncremental(lista,tam);
        getNombres("nombre",lista[i].nombre);
        lista[i].sexo=getCaracter("sexo, F o M");
        lista[i].sexo=toupper(lista[i].sexo);
        lista[i].sueldoBruto=getInt("sueldo bruto");
        lista[i].sueldoNeto =lista[i].sueldoBruto*0.85;
        lista[i].idSector=getInt("sector \n\n1-Cont\n2-Sist\n3-rrhh\n");
        printf("Está seguro que desea agregar estos datos?");
        mostrarUno(lista,i);
        aceptar=getCaracter("s/n");
        if (aceptar=='s')
        {
            lista[i].estado = OCUPADO;
            printf("Dato cargado!");
        }
    }
    else
    {
        printf("No hay espacio");
    }

}
void mostrarListaEmpleados(eEmpleado lista[], int tam, eSector sectores[], int ts)
{
    int i;
    for(i=0; i<tam; i++)
    {
        if(lista[i].estado!=LIBRE)
        {
            mostrarEmpleado(lista[i], sectores, ts);
        }

    }
}
void mostrarEmpleado(eEmpleado unEmpleado, eSector sectores[], int ts)
{

    char descripcionSector[20];
    int i;

    for(i=0; i<ts; i++)
    {
        if(unEmpleado.idSector==sectores[i].idSector)
        {
            strcpy(descripcionSector, sectores[i].descripcion);
            break;
        }
    }

    printf("%4d %10s %c %4f %4f   %s\n", unEmpleado.legajo,unEmpleado.nombre, unEmpleado.sexo, unEmpleado.sueldoBruto,unEmpleado.sueldoNeto,descripcionSector);






}
int buscarLibre(eEmpleado lista[], int tam)
{
    int i;
    int index=-1;
    for(i=0; i<tam; i++)
    {
        if(lista[i].estado==LIBRE)
        {
            index = i;
            break;
        }
    }
    return index;
}
void inicializarEmpleados(eEmpleado lista[], int tam)
{
    int i;
    for(i=0; i<tam; i++)
    {
        lista[i].estado = LIBRE;
    }
}
void hardcodearDatosEmpleados(eEmpleado lista[], int tam)
{
    int i;
    int legajos[]= {1,8,9,7,2,4};
    char nombres[][50]= {"Carlos","Maria","Carlos","Pedro","Carlos","Mateo"};
    char sexo[]= {'M','F','M','M','M','M'};
    float sueldosBruto[]= {22000,22000,15000,4000,21000,6000};
    int sector[]={1,2,3,1,2,2};

    eFecha unaFecha = {22,04,2019};

    for(i=0; i<tam; i++)
    {
        lista[i].legajo = legajos[i];
        strcpy(lista[i].nombre, nombres[i]);
        lista[i].sexo = sexo[i];
        lista[i].sueldoBruto = sueldosBruto[i];
        lista[i].sueldoNeto = sueldosBruto[i] * 0.85;
        lista[i].estado = OCUPADO;
        lista[i].idSector = sector[i];
    }

}
void hardcodearDatosSector(eSector lista[])//, int tam)
{
    int i, sector[]={1,2,3};
    char descripcion[][50]={"Contabilidad","Sistemas","RRHH"};
    float valor[]= {100,200,150};


    for(i=0; i<3/*tam*/;i++)
    {
        strcpy(lista[i].descripcion,descripcion[i]);
        lista[i].idSector = sector[i];
        lista[i].valor = valor[i];
    }
}
void modificar(eEmpleado lista[], int tam)
{
    int index;

    index=buscarLegajo(lista,tam);

    if (index!=-1)
    {
        printf("Ingrese un nuevo sueldo bruto: ");
        scanf("%f", &lista[index].sueldoBruto);

        lista[index].sueldoNeto = lista[index].sueldoBruto*0.85;

    }
    else
        printf("Error, legajo no existe\n");

}
void borrarEmpleado(eEmpleado lista[], int tam, int legajo)
{

    int i;
    int loEncontro = 0;
    printf("Ingrese legajo: ");
    scanf("%d", &legajo);

    for(i=0; i<tam; i++)
    {
        if(legajo == lista[i].legajo)
        {

            lista[i].estado = LIBRE;


            loEncontro = 1;
            break;//modifcar
        }

    }

    if(loEncontro==0)
    {
        printf("El dato no existe");
    }

}
float buscarSueldoMaximo(eEmpleado lista[], int tam)
{
    float maximo;
    int flag = 0;
    int i;

    for(i=0; i<tam; i++)
    {
        if(lista[i].estado==OCUPADO)
        {
            if(flag==0 || lista[i].sueldoBruto>maximo)
            {
                maximo = lista[i].sueldoBruto;
                flag = 1;
            }
        }

    }



    return maximo;

}
void mostrarEmpleadosSueldoMaximo(eEmpleado lista[], int tam)
{
    float maximo;
    int i;

    maximo = buscarSueldoMaximo(lista, tam);

    for(i=0; i<tam; i++)
    {
        if(lista[i].estado==OCUPADO && maximo == lista[i].sueldoBruto)
        {
            //mostrarEmpleado(lista[i]);

        }
    }

}
int contarCarlos(eEmpleado lista[], int tam)
{
    int contadorCarlos = 0;
    int i;

    for(i=0; i<tam; i++)
    {
        if(lista[i].estado==OCUPADO)
        {
            if(stricmp(lista[i].nombre,"carlos")==0 && lista[i].sueldoBruto>20000)
            {
                contadorCarlos++;
            }
        }
    }

    return contadorCarlos;
}
int buscarLegajo(eEmpleado lista[], int tam)
{
    int aux,i,retorno=-1;
    aux=getInt("legajo a buscar:");
    for (i=0;i<tam;i++)
    {
        if (lista[i].legajo==aux)
            retorno=i;
            break;
    }
    return retorno;
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
                    if(lista[i].legajo>retorno)///y esa id sea mayor al retorno
                    {
                         retorno=lista[i].legajo;///devuelve esa id
                    }

            }
        }
    }

    return retorno+1;///y retorna el lugar siguiente
}

/*
buscarSectorConMas (eSector sector[],eEmpleado empleado[],ts,te,eAux aux[])
{
    int i,j, flag;

    for (i=0;i<ts;i++)
    {
        for (j=0;j<te;j++)
        {
            if (aux[i].idSector==empleado[j])
            {
                aux[i].contadorEmpleado++;
            }
        }
    }
    for (i=0;i<ts;i++)
    {
        if (flag==0 || aux[i].contadorEmpleados>maximo)
        {
            maximo=aux[i].contadorEmpleados;
            flag=1;
        }
    }
}
*/

void mostrarUno(eEmpleado lista[],int i)
{
    //if (lista[i].estado==OCUPADO)
        printf("\n%d %s %c %.2f ",lista[i].legajo,lista[i].nombre,lista[i].sexo,lista[i].sueldoNeto);
}
