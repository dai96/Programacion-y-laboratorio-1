#include <stdio.h>
#include <stdlib.h>

#define T 3
typedef struct
{
int num;
char letra;
}
eDato;
int mostrarVector (eDato* dato, int tam);
int llenarVector (eDato* dato,int tam);
int main()
{
    int i;
    eDato unDato ={1,'x'};
    eDato muchosDatos [3]={{1,'c'},{2,'d'},{3,'x'}};
    eDato aux [3];
    eDato* pDato;
    eDato* pDatoA;
    eDato* pDatos;
    pDato=&unDato;
    pDatos=muchosDatos;
    pDatoA=aux;

    /*
    printf("\n%d     %c\n",(*pDato).num, (*pDato).letra);
    printf("\n%d      %c\n",pDato->num, pDato->letra);
    for (i=0;i<3;i++)
    {
      printf("\n%d-%c\n", (*(pDatos+i)).num, (*(pDatos+i)).letra);
      printf("\n%d-%c\n",(pDatos+i)->num, (pDatos+i)->letra);
    }*/
    llenarVector(pDatoA,T);
    burbujeo(pDatoA,T);
    mostrarVector(pDatoA,T);

    printf("\n%d", sizeof(unDato));


    return 0;
}

int mostrarVector (eDato* datos, int tam)
{
    int retorno=-1,i;
    if (datos!=NULL)
    {
       for (i=0;i<tam;i++)
        {
            printf("\n-----\n");
            printf("%d-%c",((datos+i)->num),(datos+i)->letra);
            retorno=1;
        }
    }
    return retorno;
}

int llenarVector (eDato* dato,int tam)
{
    int retorno=-1,i;
    if (dato!=NULL)
    {
       for (i=0;i<tam;i++)
        {
            printf("Ingrese num: ");
            fflush(stdin);
            scanf("%d",&((dato+i)->num));
            printf("Ingrese letra: ");
            fflush(stdin);
            scanf("%c",&((dato+i)->letra));
        }
    }
    return retorno;
}

int burbujeo (eDato* datos, int tam)
{
    int i, j;

    eDato aux;

    for (i=0;i<tam-1;i++)
    {
       for (j=i+1;j<tam;j++)
       {
           if ((datos+i)->letra>(datos+j)->letra)
           {
               aux=*(datos+i);
               *(datos+i)=*(datos+j);
               *(datos+j)=aux;
           }
       }
    }
}


int cargarArray(int* array,int tam)
{
    int retorno=0;
    int i;
    if(array!=NULL)
    {
        retorno=1;
        for(i=0; i<tam; i++)
        {
            printf("\nIngresa un numero: ");
            scanf("%d",array+i);
        }
    }
    return retorno;
}
