#include <stdio.h>
#include <stdlib.h>
#define T 5
/**
int main()
{
    int p;
    int* pNumero;

    pNumero= (int*) malloc(sizeof(int));
                //c    (sixeof)(int),1);
    printf("Heap pnumero: %d \n",pNumero);
    printf("Stack &pnumero: %d \n", &pNumero);

    if (pNumero!=NULL)
    {
        *pNumero=99;
        printf("Valor pNumero: %d\n",*pNumero);
        system("pause");
        printf("luego de hacer un free\n");
        free(pNumero);
        printf("Heap pnumero: %d \n",pNumero);
        printf("Stack &pnumero: %d \n", &pNumero);
        printf("Valor pNumero: %d\n",*pNumero);
    }

    return 0;
}*/

// Malloc y calloc
//free

int main()
{
   int* pNumeros;
   int i;
   pNumeros=(int*) malloc (sizeof(int)*T);

   if (pNumeros!=NULL)
   {
       for (i=0;i<T;i++)
       {
           //*(pNumeros+i)=i+1; hacerlo secuencial
           printf("ingrese un num; ");
           scanf("%d",pNumeros+i);
       }
       for (i=0;i<T;i++)
       {
           printf("%d\n", *(pNumeros+i));
       }

       pNumeros=(int*)realloc(pNumeros,sizeof(int)*10);
       for (i=T;i<10;i++)
       {
           //*(pNumeros+i)=i+1; hacerlo secuencial
           printf("ingrese un num; ");
           scanf("%d",pNumeros+i);
       }
       for (i=0;i<10;i++)
       {
           printf("%d\n", *(pNumeros+i));
       }
   }

   return 0;

}


