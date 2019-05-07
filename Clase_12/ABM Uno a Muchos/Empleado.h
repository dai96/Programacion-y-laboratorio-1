#include <stdio.h>
#include "funciones.h"

#define LIBRE 0
#define OCUPADO 1

typedef struct
{
    int dia;
    int mes;
    int anio;
}eFecha;

typedef struct
{
    int idSector;
    char descripcion[20];
    float valor;

}eSector;

typedef struct
{
    int legajo;
    char nombre[20];
    char sexo;
    int cantidadHoras;
    int idSector;
    float sueldoBruto;
    float sueldoNeto;

    int estado;

} eEmpleado;

typedef struct
{
    int idSector;
    char descripcion[20];
    float valor;

}eAux;

/** \brief Muestra los empleados
 *
 * \param estructura 1, estructura 2
 * \param tamaño de estructura 2
 */
void mostrarEmpleado(eEmpleado, eSector[], int);

/** \brief Alta
 *
 * \param estructura
 * \param tamaño
 */
void cargarEmpleado(eEmpleado[], int);

/** \brief mostrar la lista
 *
 * \param estructura 1 estructura 2
 * \param tamaño e1 tamaño e2
 */
void mostrarListaEmpleados(eEmpleado[], int, eSector[], int);

/** \brief busca lugares en el array id
 *
 * \param estructura
 * \param entero
 * \return
 *
 */
int buscarLibre(eEmpleado[], int);

/** \brief cambia estado en estructura a 0
 *
 * \param estructura
 * \param entero
 */
void inicializarEmpleados(eEmpleado[], int);

/** \brief hardcodea datos de empleados
 *
 * \param estructura
 * \param entero tamaño
 */
void hardcodearDatosEmpleados(eEmpleado[], int);

/** \brief modificas datos de estructura
 *
 * \param estructura
 * \param entero tamaño
 */
void modificar(eEmpleado[], int);

/** \brief
 *
 * \param
 * \param
 * \return
 *
 */
int buscarLegajo(eEmpleado[], int);

/** \brief
 *
 * \param
 * \param
 * \return
 *
 */
void borrarEmpleado(eEmpleado[], int, int);

/** \brief
 *
 * \param
 * \param
 * \return
 *
 */
float buscarSueldoMaximo(eEmpleado[],int);

/** \brief
 *
 * \param
 * \param
 * \return
 *
 */
void mostrarEmpleadosSueldoMaximo(eEmpleado[],int);

/** \brief
 *
 * \param
 * \param
 * \return
 *
 */
int contarCarlos(eEmpleado[],int);

/** \brief
 *
 * \param
 * \param
 * \return
 *
 */
int idIncremental(eEmpleado lista[],int limite);

/** \brief
 *
 * \param
 * \param
 * \return
 *
 */
void mostrarUno(eEmpleado lista[],int i);

/** \brief
 *
 * \param
 * \param
 * \return
 *
 */
void ordenarVectorAlfabeticamente(eEmpleado lista [], int tam);




