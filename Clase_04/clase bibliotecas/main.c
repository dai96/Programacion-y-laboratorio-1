//puedo incluir o no el stdio, pq ya esta incluido en el ingresos.c
#include <stdlib.h>
#include "ingresos.h"
#include "recursividad.h"


int valor = 71;//variable global, se desarrola en un ambito donde cualquier funcion puede ver esa variable.

int main()
{
    /*
    int edad;
    int legajo;
    int peso;

    edad = pedirEntero("Ingrese edad: ");
    legajo = pedirEntero("Ingrese legajo: ");
    peso = pedirEntero("Ingrese peso: ");
    */

    /*
    int numero = 5;
    //  los parametros que se le pasan a la funcion se llaman actuales, y los que tiene la funcion dento de ella para trabajarlos se llaman formales.
    int resultado = factorial(numero);//hardcodeo el factorial de 5
    printf("El factorial es: %d \n", resultado);
    */

    /**MENU DE OPCIONES**/

    int opcion;
    char seguir = 's';

    do
    {
        printf("\n1-Alta\n2-Baja\n3-Informar\n4-Salir\n Elija una opcion:");
        scanf("%d",&opcion);

        switch(opcion)
        {
        case 1:
            printf("\nEstoy dando de alta!\n");
            break;
        case 2:
            printf("\nEstoy dando de baja!\n");
            break;
        case 3:
            printf("\nEstoy informando!\n");
            break;
        case 4:
            printf("\nEstoy saliendo del programa!\n");
            seguir = 'n';
            break;
        default:
            printf("\nNo ingreseo una opcion valida!\n");
        }
        system("pause");//pausa el programa
        system("cls");//borra la pantalla
    }while(seguir == 's');

    return 0;
}

