#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#define T 1


void pedirCadena(char mensaje[], char vec []);

int main()
{
    int legajos [T], i, j;
    float sueldoBruto [T];
    float sueldoNeto [T];
    char sexos[T];
    char nombres [T][20];
    int auxEntero;



    for (i=0;i<T;i++)
    {
        printf("ingrese legajo: ");
        scanf("%d",&legajos[i]);
        printf("ingrese sueldo bruto: ");
        scanf("%f",&sueldoBruto[i]);
        fflush(stdin);
        printf("Ingrese sexo f o m: ");
        scanf("%c",&sexos[i]);
        fflush(stdin);
        pedirCadena("nombre",nombres[i]);

        sueldoNeto[i]=sueldoBruto[i]-((sueldoBruto[i]*15)/100);
        //sueldobruto[i*0.85

    }


    for (i=0;i<T-1;i++)
    {
        for (j=i+1;j<T,j++)
        {
            if(legajos[i]>legajos[j])
            {
                auxEntero=legajos[i];
                legajos[i]=legajos[j];
                legajos[j]=auxEntero;
            }
        }
    }





    for (i=0;i<T;i++)
    {
        printf("--%d--%.2f--%C--%s--",legajos[i],sueldoNeto[i],sexos[i],nombres[i]);
    }


}



void pedirCadena(char mensaje[], char vector [])
{
    printf("Ingrese %s: ",mensaje);
    scanf("%s",vector);
    fflush(stdin);
}
