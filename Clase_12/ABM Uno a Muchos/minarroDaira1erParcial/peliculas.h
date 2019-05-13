#include <stdio.h>
#include "funciones.h"

#define LIBRE 0
#define OCUPADO 1

typedef struct
{
    int idGenero;
    char descripcion[20];

}eGenero;

typedef struct
{
    int dia;
    int mes;
    int anio;
}eFecha;

typedef struct
{
    int id;
    char titulo[51];
    int idGenero;
    int idActor;
    int estado;
    eFecha estrenos;
} ePelicula;

typedef struct
{
    int idActor;
    int nombre[20];
    char nacionalidad[20];

}eActor;


/** \brief Muestra los empleados
 *
 * \param estructura 1, estructura 2
 * \param tamaño de estructura 2
 */
void mostrarPelicula(ePelicula una, eActor actores[], int ta, eGenero generos[], int tg, eFecha estreno[]);

/** \brief Alta
 *
 * \param estructura
 * \param tamaño
 */
void altaPelicula(ePelicula lista[], int tam);

/** \brief mostrar la lista
 *
 * \param estructura 1 estructura 2
 * \param tamaño e1 tamaño e2
 */
void mostrarListaPeliculas(ePelicula lista[], int tam, eActor actores[], int ta, eGenero generos[],int tg, eFecha estreno[]);

/** \brief busca lugares en el array id
 *
 * \param estructura
 * \param entero
 * \return
 *
 */
int buscarLibre(ePelicula[], int);

/** \brief cambia estado en estructura a 0
 *
 * \param estructura
 * \param entero
 */
void inicializarPeliculas(ePelicula[], int);

/** \brief hardcodea datos de empleados
 *
 * \param estructura
 * \param entero tamaño
 */
void hardcodearPeliculas(ePelicula lista[], int tam, eFecha estrenos[]);

void hardcodearDatosGenero(eGenero lista[]);

void hardcodearDatosActor(eActor lista[]);

/** \brief modificas datos de estructura
 *
 * \param estructura
 * \param entero tamaño
 */
void modificar(ePelicula[], int);

/** \brief
 *
 * \param
 * \param
 * \return
 *
 */
int buscarLegajo(ePelicula[], int);

/** \brief
 *
 * \param
 * \param
 * \return
 *
 */
void baja(ePelicula[], int, int);

/** \brief
 *
 * \param
 * \param
 * \return
 *
 */

/** \brief
 *
 * \param
 * \param
 * \return
 *
 */

/** \brief
 *
 * \param
 * \param
 * \return
 *
 */


/** \brief
 *
 * \param
 * \param
 * \return
 *
 */
int idIncremental(ePelicula lista[],int limite);

/** \brief
 *
 * \param
 * \param
 * \return
 *
 */


/** \brief
 *
 * \param
 * \param
 * \return
 *
 */
void ordenarVectorAlfabeticamente(ePelicula lista [], int tam);

int sortActores(eActor list[], int len, int order);
void mostrarListaDeActores(eActor actores[],int ta);
int sortPeliculas(ePelicula list[], int len, int order);
void hardcodearFecha(eFecha estreno[], int tam, int indice);
