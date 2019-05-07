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
    char titulo[30];
    int fecha;
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
//void mostrarEmpleado(ePelicula, eSector[], int);

/** \brief Alta
 *
 * \param estructura
 * \param tamaño
 */
void altaPelicula(ePelicula[], int);

/** \brief mostrar la lista
 *
 * \param estructura 1 estructura 2
 * \param tamaño e1 tamaño e2
 */
//void mostrarListaEmpleados(ePelicula[], int, eSector[], int);

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
void hardcodearDatosEmpleados(ePelicula[], int,eFecha []);

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
void borrarEmpleado(ePelicula[], int, int);

/** \brief
 *
 * \param
 * \param
 * \return
 *
 */
float buscarSueldoMaximo(ePelicula[],int);

/** \brief
 *
 * \param
 * \param
 * \return
 *
 */
void mostrarEmpleadosSueldoMaximo(ePelicula[],int);

/** \brief
 *
 * \param
 * \param
 * \return
 *
 */
int contarCarlos(ePelicula[],int);

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
void mostrarUno(ePelicula lista[],int i);

/** \brief
 *
 * \param
 * \param
 * \return
 *
 */
void ordenarVectorAlfabeticamente(ePelicula lista [], int tam);



