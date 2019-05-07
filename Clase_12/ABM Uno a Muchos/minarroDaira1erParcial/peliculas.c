#include "peliculas.h"

void altaPelicula(ePelicula lista[], int tam)
{
    int i;
    int opcion;
    char aceptar;

    int id;
    char titulo[30];
    char actor [30];
    int fecha;
    int idGenero;
    int estado;

    eFecha aux;

    i = buscarLibre(lista, tam);
    if(i!=-1)
    {
        lista[i].id=idIncremental(lista,tam);
        getString("titulo",lista[i].titulo);
        lista[i].fecha=getInt("fechaworkinprogress");
        lista[i].idGenero=getInt("seleccione genero \n\n1-Accion\n2-Comedia\n3-Drama\n4-Romance\n5-Terror\n\n");
        lista[i].idActor=getInt("seleccione actor \n\n1-Scarlett Johansson\n2-Robert  Downey Jr\n3-Mark Ruffalo\n4-Chris Evans\n5-Chris Hemsworth\n6-Samuel Jackson\n7-Gwyneth Paltrow\n8-Paul Rudd\n9-Bradley Cooper\n10-Josh Brolin\n\n");
        aux.dia=getInt("dia");
        aux.dia=getInt("mes");
        aux.dia=getInt("anio");
        lista[i].estrenos=aux;
        printf("Esta seguro que desea agregar estos datos?\n");
        //mostrarUno(lista,i);
        aceptar=son();
        if (aceptar=='S')
        {
            lista[i].estado = OCUPADO;
            printf("Dato cargado!");
        }
        else
            printf("Dato desestimado");
    }
    else
    {
        printf("No hay espacio");
    }

}

void mostrarListaEmpleados(ePelicula lista[], int tam, eActor actores[], int ta, eGenero generos[],int tg, eFecha estreno[])
{
    int i;
    for(i=0; i<tam; i++)
    {
        if(lista[i].estado!=LIBRE)
        {
            mostrarEmpleado(lista[i], actores, ta,generos,tg,estreno );
        }

    }
}
void mostrarEmpleado(ePelicula una, eActor actores[], int ta, eGenero generos[], int tg, eFecha estreno[])
{

    char nombres[20];
    char nacionalidad[20];
    char genero[20];
    int dia;
    int mes;
    int anio;
    int i;

    for(i=0; i<ta; i++)
    {
        if(una.idActor==actores[i].idActor)
        {
            strcpy(nombres, actores[i].nombre);
            strcpy(nacionalidad, actores[i].nacionalidad);
            break;
        }
    }

    for(i=0; i<tg; i++)
    {
        if(una.idGenero==generos[i].idGenero)
        {
            strcpy(genero, generos[i].descripcion);
            break;
        }
    }
    for (i=0;i<ta;i++)
    {
        dia=estreno[i].dia;
        mes=estreno[i].mes;
        anio=estreno[i].anio;
    }
    if (una.estado==OCUPADO)
    {
        printf("%d %s %s %s %d %d %d\n", una.id,una.titulo, nombres, genero,dia,mes,anio);
    }


}

int buscarLibre(ePelicula lista[], int tam)
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

void inicializarPeliculas(ePelicula lista[], int tam)
{
    int i;
    for(i=0; i<tam; i++)
    {
        lista[i].estado = LIBRE;
    }
}


void hardcodearPeliculas(ePelicula lista[], int tam, eFecha estrenos[])
{
    int i;
    int id[]= {1000,1001,1002,1003,1004,1005,1006,1007,1008,1009,1010,1011,1012,1013,1014,1015,1016,1017,1018,1019,1020};
    char titulo[][30]= {"Avengers EndGame","Thor","Cellular","Men in black 4","IronMan","13 Goin on 13","Lucy","Nace una estrella","dime cuentos?","Guardianes de la galaxia","a perfect murder","la isla","que paso ayer","home alone 3","deadpool","sherlock holmes","men in black3","avengers infinity war","grandes esperanzas","SWAT","XxX"};
    int actor[]={2,5,4,5,2,3,1,9,4,9,7,1,9,1,10,2,10,10,7,6,6};
    int genero[]={1,1,1,1,1,4,1,4,4,1,3,3,2,2,1,1,1,1,4,1,1};

    hardcodearFecha(estrenos,tam);

    for(i=0; i<tam; i++)
    {
        lista[i].id = id[i];
        strcpy(lista[i].titulo, titulo[i]);
        lista[i].estado = OCUPADO;
        lista[i].idActor = actor[i];
        lista[i].idGenero = actor[i];
        lista[i].estrenos=estrenos[i];
    }
}

void hardcodearFecha(eFecha estreno[], int tam)
{
    int i;
    int dia[]={20,10,2,10,5,7,9,8,4,20,6,3,5,6,7,5,2,6,8,20,11};
    int mes[]={4,6,5,7,9,5,2,3,4,5,8,10,2,10,2,10,12,6,5,4,12,2,5};
    int anio[]={2019,2013,2004,2019,2012,2004,2014,2018,2010,2014,1995,2005,2013,1997,2015,2011,2010,2017,1995,1998,1992};

    for (i=0;i<tam;i++)
    {
        estreno[i].dia=dia[i];
        estreno[i].mes=mes[i];
        estreno[i].anio=anio[i];
    }
}

void hardcodearDatosGenero(eGenero lista[])
{
    int i, idGenero[]={1,2,3,4,5};
    char descripcion[][50]={"Accion","Comedia","Drama","Romance","Terror"};

    for(i=0; i<5;i++)
    {
        strcpy(lista[i].descripcion,descripcion[i]);
        lista[i].idGenero = idGenero[i];
    }
}
void hardcodearDatosActor(eActor lista[])
{
    int i, idActor[]={1,2,3,4,5,6,7,8,9,10};
    char nombre[][20]={"Scarlett Johansson","Robert  Downey Jr","Mark Ruffalo","Chris Evans","Chris Hemsworth","Samuel Jackson","Gwyneth Paltrow","Paul Rudd","Bradley Cooper","Josh Brolin"};
    char nacionalidad[][30]={"Argentina","EEUU","Canada","EEUU","Argentina","EEUU","Canada","Argentina","EEUU","Canada"};

    for(i=0; i<10;i++)
    {
        strcpy(lista[i].nombre,nombre[i]);
        strcpy(lista[i].nacionalidad,nacionalidad[i]);
        lista[i].idActor = idActor[i];
    }
}

void modificar(ePelicula lista[], int tam)
{
    int i,opcion;
    eFecha aux;

    i=buscarLegajo(lista,tam);

    if (i!=-1)
    {
        opcion=getInt("1-Titulo\n2-Actor\n3-estreno");

        if (opcion==1)
        {
            getString("ingrese nuevo titulo",lista[i].titulo);
        }
        if (opcion==2)
        {
            lista[i].idActor=getInt("ingrese id de actor");
        }
        if (opcion==3)
        {
            aux.dia=getInt("ingrese dia");
            aux.mes=getInt("ingrese mes");
            aux.anio=getInt("ingrese anio");
            lista[i].estrenos=aux;

        }
    }
    else
        printf("Error, legajo no existe\n");
}

void borrarEmpleado(ePelicula lista[], int tam, int legajo)
{

    int i,index;
    char opcion;
    index=buscarLegajo(lista,tam);


    if (index!=-1)
    {
        printf("Esta seguro que quiere borrar el dato?");
        opcion=getCaracter("S/N: ");

        if (opcion=='s');
            {
                lista[index].estado=LIBRE;
            }
    }
    else
        printf("Error el legajo no existe");

}

int buscarLegajo(ePelicula lista[], int tam)
{
    int aux,i,retorno=-1;
    aux=getInt("id a buscar");
    for (i=0;i<tam;i++)
    {
        if (lista[i].id==aux)
        {
            retorno=i;
            break;
        }

    }
    return retorno;
}

int idIncremental(ePelicula lista[],int limite)
{
    int retorno = 1000;
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

