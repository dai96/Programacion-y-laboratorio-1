
#include <stdlib.h>
#include "peliculas.h"
#include "funciones.h"

#define T 1000
#define TA 10
#define TG 5


int menuDeOpciones(char[]);

int main()
{

    int indice,i,opcion,opcionInforme;

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
        opcion = menuDeOpciones("\n1.Alta\n2.Baja\n3.Modificar\n4.Mostrar\n5.Informar\n\n6.Salir\nElija una opcion: ");
        opcion=validarNumeros(opcion,1,5);
        switch(opcion)
        {
            case 1:
                altaPelicula(lista,  T);
                system("pause");
                break;
            case 2:
                mostrarListaPeliculas(lista, T, listaActor, TA,listaGenero,TG,estreno);
                baja(lista, T, 3);
                system("pause");
                break;
            case 3:
                mostrarListaPeliculas(lista, T, listaActor, TA,listaGenero,TG,estreno);
                modificar(lista, T);
                system("pause");
                break;
            case 4:
                mostrarListaPeliculas(lista, T, listaActor, TA,listaGenero,TG,estreno);
                sortActores(listaActor,TA,1);
                mostrarListaDeActores(listaActor,TA);
                sortPeliculas(lista,T,1);
                mostrarListaPeliculas(lista, T, listaActor, TA,listaGenero,TG,estreno);
                system("pause");
                break;
            case 5:
                opcionInforme=menuDeOpciones("\n1-lista\n2-USA\n3-Generos\n\n");
                opcionInforme=validarNumeros(opcionInforme,1,3);
                switch (opcionInforme)
                {
                    case 1:
                        mostrarListaPeliculas(lista, T, listaActor, TA,listaGenero,TG,estreno);
                        break;
                     case 2:

                    mostrarUSA(lista,T,listaActor,TA);
                    printf("\n");
                    break;
                     case 3:
                        mostarGenero(lista,T,listaGenero,TG);
                        break;
                }

                system("pause");

                break;

        }
    }while(opcion!=6);
    return 0;
}


