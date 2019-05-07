
#include <stdlib.h>
#include "Empleado.h"
#include "funciones.h"

#define T 10


int menuDeOpciones(char[]);
/*
Informes:

1- EL/LOS Empleados con mayor sueldo.
2- Cantidad de empleados que se llamen carlos y ganen mas de 20000
*/
int main()
{

    int indice,i;
    int opcion;

    eEmpleado lista[T];
    eSector listaSector[T];
    inicializarEmpleados(lista,T);


    hardcodearDatosEmpleados(lista,6);
    hardcodearDatosSector(listaSector);

    do
    {
        opcion = menuDeOpciones("1.Alta\n2.Baja\n3.Modificar\n4.Mostrar\n5.Informar\n10.Salir\nElija una opcion: ");
        switch(opcion)
        {
            case 1:
                cargarEmpleado(lista,  T);

            break;
            case 2:
                borrarEmpleado(lista, T, 3);
                break;
            case 3:

                modificar(lista, T);
            break;

            case 4:
                //ordenarVectorAlfabeticamente(lista,T);
                mostrarListaEmpleados(lista, T, listaSector, 3);
                break;
            case 5:

                mostrarEmpleadosSueldoMaximo(lista,T);
                printf("La cantidad de carlos es: %d\n", contarCarlos(lista,T));

                break;


        }
    }while(opcion!=10);



    //inicializarEmpleados(lista, T);




    return 0;
}

int menuDeOpciones(char mensaje[])
{
    int opcion;
    printf("%s", mensaje);
    scanf("%d", &opcion);

    return opcion;
}
