#include <stdio.h>
#include <stdlib.h>

/*
----------------------------------------------------------------------------------Funcion recibe y devuelve
*/
//prototipo o firma de la funcion
int sumarNumeros(int,int);

int main()
{
    int numeroUno;
    int numeroDos;
    int resultado;

    printf("Ingrese un numero: ");
    scanf("%d",&numeroUno);

    printf("Ingrese otro numero: ");
    scanf("%d",&numeroDos);

    resultado = sumarNumeros(numeroUno,numeroDos);//llamado a la funcion

    printf("El resultado de la suma de %d y %d es: %d",numeroUno,numeroDos,resultado);

    return 0;
}

//desarrollo de la funcion
int sumarNumeros(int unNumero, int otroNumero)
{
    int resultado;

    resultado = unNumero+otroNumero;

    return resultado;
}



/*
-----------------------------------------------------------------------------------------------------Funcion si recibe no devuelve
*/
/**
//prototipo o firma de la funcion
void sumarNumeros(int,int);

int main()
{
    int numeroUno;
    int numeroDos;

    printf("Ingrese un numero: ");
    scanf("%d",&numeroUno);

    printf("Ingrese otro numero: ");
    scanf("%d",&numeroDos);

    sumarNumeros(numeroUno,numeroDos);//llamado a la funcion

    return 0;
}

//desarrollo de la funcion
void sumarNumeros(int unNumero, int otroNumero)
{
    int resultado;

    resultado = unNumero+otroNumero;

    printf("El resultado de la suma  es: %d",resultado);

}*/

/*
---------------------------------------------------------------------------------------------Funcion no recibe no devuelve
*/
/**
//prototipo o firma de la funcion
void sumarNumeros(void);

int main()
{
    sumarNumeros();
    return 0;
}

//desarrollo de la funcion
void sumarNumeros(void)
{
    int numeroUno;
    int numeroDos;
    int resultado;

    printf("Ingrese un numero: ");
    scanf("%d",&numeroUno);

    printf("Ingrese otro numero: ");
    scanf("%d",&numeroDos);

    resultado = numeroUno+numeroDos;

    printf("El resultado de la suma es: %d",resultado);
}
*/

/*
---------------------------------------------------------------------------------- funcion no recibe si devuelve
*/
/**
//prototipo o firma de la funcion
int sumarNumeros(void);

int main()
{
    int resultado;

    resultado = sumarNumeros();//llamado a la funcion

    printf("El resultado de la suma  es: %d",resultado);

    return 0;
}

//desarrollo de la funcion
int sumarNumeros(void)
{
    int resultado;
    int numeroUno;
    int numeroDos;

    printf("Ingrese un numero: ");
    scanf("%d",&numeroUno);

    printf("Ingrese otro numero: ");
    scanf("%d",&numeroDos);

    resultado = numeroUno+numeroDos;

    return resultado;
}
*/

