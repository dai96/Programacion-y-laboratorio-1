/******************************************************************
* Programa: Ejemplo Clase 4
*
* Objetivo:
*   A-  Desarrollar una biblioteca "utn.h" que posea funciones para
*       pedirle al usuario el ingreso de datos
*           - getInt()
*           - getFloat()
*           - getChar()
*
*   B-  Diseñar un programa para jugar a adivinar un número entre 0 y 100.
*       El juego tiene que dar pistas de si el número introducido por el
*       jugador está por encima o por debajo. El juego termina cuando se
*       adivina el número o se decide terminar de jugar ingresando un número
*       negativo. Permitir jugar tantas veces como lo desee el jugador y al
*       salir mostrar su mejor puntuación. Utilizar la biblioteca del punto 1.
*
* Aspectos a destacar:
*   -Se practica la declaración de funciones y se muestra como crear una
*    biblioteca propia y utilizarla en un programa.
*
* Version: 0.1 del 29 diciembre de 2015
* Autor: Mauricio Dávila
* Revisión: Ernesto Gigliotti
*
* *******************************************************************/

#include <stdio.h>
#include <stdlib.h>
#include "utn.h"


int num, numeroAleatorio, jugar;
char seguir;



main()
{

    printf("--------------------Bienvenido al adivinador de tu numero!!!----------------------");
    getchar();
    system("cls");
    seguir='s';
    while (seguir=='s')
    {
        printf("\n\n-->Se generara un numero aleatorio del 1 al 100 \n-->Siempre ingresa numeros positivos para jugar y numero negativos para terminar");

        numeroAleatorio=getNumeroAleatorio(1,100,1);

        printf("\n--------------------------------------");
        printf("\n\nEl numero fue generado!");
        printf("\n--------------------------------------\n\n");
        system("pause");
        jugar=1;
        system("cls");

        while (jugar)
        {
            num=getInt("\nIngrese un numero: ");
            if (num<0)
                jugar=0;
            else if (num==0)
                printf("\nEl numero no puede ser 0\n");
            else if (num<numeroAleatorio)
                printf("\nIntanta con un numero mas grande\n");
            else if (num>numeroAleatorio)
                printf("\nIntanta con un numero mas chico\n");
            else if (num==numeroAleatorio)
            {
                printf("\nfelicidades, ganaste, el numero era %d\n",numeroAleatorio);
                jugar=0;
            }
        }

        seguir=getChar("Quieres volver a jugar? s/n : ");
        while (seguir!='s' && seguir!='n')
        {
            printf("Error! ingresa s o n");
            seguir=getChar("\nQuieres volver a jugar? s/n : ");
        }
    }
        return 0;
}
