/******************************************************************
* Programa: Ejemplo Clase 3
*
* Objetivo:
*   -Crear una función que permita ingresar un numero al usuario y lo retorne.
*   -Crear una función que reciba el radio de un círculo y retorne su área
*   -Utilizar las funciones de los puntos 1 y 2 para hacer un programa que calcule
*    el área de un círculo cuyo radio es ingresado por el usuario
*   -Documentar las funciones al estilo Doxygen
*
* Aspectos a destacar:
*   -Declaración de funciones que devuelven y reciben valores
*   -Hacer notar que el uso de funciones evita el código repetido y ayuda a que
*    el mismo sea mas legible
*   -La función debería comenzar indicando el objetivo que persigue y el
*    significado de sus parámetros.
*
* Version: 0.1 del 29 diciembre de 2015
* Autor: Mauricio Dávila
* Revisión: Ernesto Gigliotti
*
* *******************************************************************/


#include <stdio.h>
#include <stdlib.h>


float pedirNumero ();
float calcularArea (float radio);
float num;
float area;


int main ()
{
    float auxNum;
    float auxRad;

    auxNum = pedirNumero();
    auxRad = calcularArea(auxNum);

    printf("\nEl area del circulo es: %.2f\n",auxRad);

}

/**
 * \brief Pide un numero al usuario y lo devuelve
 * \return Numero que pide
 *
 */

float pedirNumero ()
{
    printf("Ingrese un numero: ");
    scanf("%f", &num);
    return num;
}

/**
 * \brief Recibe el radio y calcula el área del círculo
 * \param Radio correspondiente al radio del círculo
 * \return El área del círculo
 *
 */

float calcularArea (float radio)
{
    area=num*3.1416*num;
    return area;
}
