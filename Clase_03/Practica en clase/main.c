#include <stdio.h>
#include <stdlib.h>

int pedirNota(void);//va a pedir un numero, si no esta entre 0 y 10 lo retorna.
float sacarPromedio(int suma, int cantidad);//saca promeio
int aprobarMateria(int notaMinima, int nota);//0 si desaprobo - 1 si aprobo

void ejercicioUno(void);

int main()
{
    /*
    int valor;
    valor = pedirNota();

    printf("\nNota ingresada: %d\n",valor);
    */

    /*
    float promedio;
    promedio = sacarPromedio(15,2);
    printf("Promedio: %.1f",promedio);
    */

/*
    int valorUno;
    int valorDos;
    valorUno = aprobarMateria(6,2);// 0
    valorDos = aprobarMateria(6,8);// 1

    printf("%d",valorUno);
    printf("\n%d",valorDos);
*/

    ejercicioUno();

}


int pedirNota(void)
{
    int nota;

    do
    {
        printf("\nIngrese una nota entre 0 y 10: ");
        scanf("%d",&nota);

    }while(nota<0 || nota>10);

    return nota;
}

float sacarPromedio(int suma, int cantidad)
{
    float resultado;

    resultado = (float)suma/cantidad;//casteo

    return resultado;
}

//    0 no aprobo -    1 si aprobo
int aprobarMateria(int notaMinima, int nota)
{
    int retorno;

    if(nota>=notaMinima)
    {
        retorno = 1;
    }
    else
    {
        retorno = 0;
    }
    return retorno;
}

/* Ejercicio: Una funcion que pida 5 notas y nos informe
cantidad de aprobados
promedio de notas de aprobados
promedio de notas de no aprobados
*/


void ejercicioUno(void)
{
    int uno,dos,tres,cuatro,cinco, notaMinima=6, acumuladorA=0, acumuladorD=0, notasAprovadas=0, notasDesaprobadas=0;
    float promedioA, promedioD;

    uno=pedirNota();
    dos=pedirNota();
    tres=pedirNota();
    cuatro=pedirNota();
    cinco=pedirNota();

    if (aprobarMateria(notaMinima,uno))
    {
        acumuladorA++;
        notasAprovadas=notasAprovadas+uno;
    }
    else
    {
        notasDesaprobadas=notasDesaprobadas+uno;
        acumuladorD++;
    }
    if (aprobarMateria(notaMinima,dos))
    {
        acumuladorA++;
        notasAprovadas=notasAprovadas+dos;
    }
    else
        {
            notasDesaprobadas=notasDesaprobadas+dos;
            acumuladorD++;
        }
    if (aprobarMateria(notaMinima,tres))
    {
        acumuladorA++;
        notasAprovadas=notasAprovadas+tres;
    }
    else
        {
            notasDesaprobadas=notasDesaprobadas+tres;
            acumuladorD++;
        }
    if (aprobarMateria(notaMinima,cuatro))
    {
        acumuladorA++;
        notasAprovadas=notasAprovadas+cuatro;
    }
    else
        {
            notasDesaprobadas=notasDesaprobadas+cuatro;
            acumuladorD++;
        }

    if (aprobarMateria(notaMinima,cinco))
    {
        acumuladorA++;
        notasAprovadas=notasAprovadas+cinco;
    }
    else
        {
            notasDesaprobadas=notasDesaprobadas+cinco;
            acumuladorD++;
        }


     promedioA=sacarPromedio(notasAprovadas,acumuladorA);
     promedioD=sacarPromedio(notasDesaprobadas,acumuladorD);

    system("cls");
    printf("\nLa cantidad de alumnos aprovados: %d",acumuladorA);
    printf("\nEl promedio de notas aprovadas: %.1f",promedioA);
    printf("\nEl promedio de notas desaprovadas: %.1f",promedioD);

}
