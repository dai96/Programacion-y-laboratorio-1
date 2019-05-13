
#include <stdlib.h>
#include "peliculas.h"
#include "funciones.h"

#define T 1000
#define TA 10
#define TG 5


int menuDeOpciones(char[]);

int main()
{

    int indice,i,opcion;

    ePelicula lista[T];
    eActor listaActor[TA];
    eGenero listaGenero[TG];
    eFecha estreno[T];

    inicializarPeliculas(lista,T);

    hardcodearPeliculas(lista,21,estreno);
    hardcodearDatosGenero(listaGenero);
    hardcodearDatosActor(listaActor);

    do
    {
        system("cls");
        opcion = menuDeOpciones("\n1.Alta\n2.Baja\n3.Modificar\n4.Mostrar\n\n5.Salir\nElija una opcion: ");
        opcion=validarNumeros(opcion,1,5);
        switch(opcion)
        {
            case 1:
                altaPelicula(lista,  T);
                system("pause");
                break;
            case 2:
                mostrarListaPeliculas(lista, T, listaActor, 10,listaGenero,5,estreno);
                baja(lista, T, 3);
                system("pause");
                break;
            case 3:
                mostrarListaPeliculas(lista, T, listaActor, 10,listaGenero,5,estreno);
                modificar(lista, T);
                system("pause");
                break;
            case 4:
                mostrarListaPeliculas(lista, T, listaActor, 10,listaGenero,5,estreno);
                sortActores(listaActor,TA,2);
                mostrarListaDeActores(listaActor,TA);
                sortPeliculas(lista,T,1);
                mostrarListaPeliculas(lista, T, listaActor, 10,listaGenero,5,estreno);
                system("pause");
                break;

        }
    }while(opcion!=5);
    return 0;
}


