
#include <stdlib.h>
#include "peliculas.h"
#include "funciones.h"

#define T 100


int menuDeOpciones(char[]);

int main()
{

    int indice,i;
    int opcion;

    ePelicula lista[T];
    eActor listaActor[10];
    eGenero listaGenero[5];
    eFecha estreno[T];

    inicializarPeliculas(lista,T);

    hardcodearPeliculas(lista,20,estreno);
    hardcodearDatosGenero(listaGenero,5);
    hardcodearDatosActor(listaActor,10);
    //hardcodearFecha(estreno,20);

    do
    {
        opcion = menuDeOpciones("\n1.Alta\n2.Baja\n3.Modificar\n4.Mostrar\n\n10.Salir\nElija una opcion: ");
        switch(opcion)
        {
            case 1:
                altaPelicula(lista,  T);

            break;
            case 2:
                borrarEmpleado(lista, T, 3);
                break;
            case 3:

                modificar(lista, T);
            break;

            case 4:
                //ordenarVectorAlfabeticamente(lista,T);
                mostrarListaEmpleados(lista, T, listaActor, 10,listaGenero,5,estreno);
                break;

        }
    }while(opcion!=10);



    //inicializarPeliculas(lista, T);




    return 0;
}

int menuDeOpciones(char mensaje[])
{
    int opcion;
    printf("%s", mensaje);
    scanf("%d", &opcion);

    return opcion;
}
