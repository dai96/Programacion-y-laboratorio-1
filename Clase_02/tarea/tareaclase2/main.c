#include <stdio.h>
#include <stdlib.h>



/*Crear un programa que se ingresen numeros enteros (no cero) hasta que el usuario quiera..
informar:
    a)Cantidad de números
    b)Cantidad de pares
    c)Suma de positivos
    d)Promedio de negativos
    f)De los positivos el más chico
    g)De los negativos el más grande
    h)Cantidad de números entre -10 y 50
    i)Promedio total

*/


int main()
{
    int nums;
    int minimo;
    int maximo;
    int par=0;
    float promedioNegativo;
    int positivo=0;
    int positivoMin;
    int contadorNegativo=0;
    int negativo=0;
    int negativoMax;
    int puntoH=0;
    int acumulador;
    float promedio;
    int veces;
    char letra='x';



     printf("Ingrese un numero: \n");
     scanf("%d", &nums);
     if (nums==0)
     {
         printf("Error, el numero no puede ser cero.\nIntente nuevamente: \n");
         scanf("%d",&nums);
     }

    minimo=nums;
    maximo=nums;

    if (nums%2==0)
        par++;

    if (nums>=1)
    {
        positivo=nums;
        positivoMin=nums;

    }
    else
    {
        negativo=nums;
        negativoMax=nums;
        contadorNegativo++;
    }

    acumulador=nums;
    if (nums>=-10 && nums<=50)
        puntoH++;
    veces=1;

    printf("Si quiere continuar ingrese x\n");
    letra=getche();

    while (letra=='x')
    {
      printf("\nIngrese un numero: \n");
      scanf("%d", &nums);

      if (nums==0)
      {
        printf("Error, el numero no puede ser cero.\nIntente nuevamente: \n");
        scanf("%d",&nums);
      }
        if (nums<minimo)
            minimo=nums;
        if (nums>maximo)
            maximo=nums;
        if (nums%2==0)
            par++;
        if (nums>=1)
     {
        if (positivo==0)
            positivoMin=nums;
        positivo=positivo+nums;
        if (nums<positivoMin)
            positivoMin=nums;
     }
     else
     {
         if (negativo==0)
            negativoMax=nums;
        negativo=negativo+nums;
        if (nums>negativoMax)
            negativoMax=nums;
        contadorNegativo++;
     }

     acumulador=acumulador+nums;
     if (nums>=-10 && nums<=50)
         puntoH++;
     veces++;

     printf("Si quiere continuar ingrese x\n");
     letra=getche();

     if (letra=='x')
        continue;
     else
        break;

    }
    /*
    promedio=acumulador/veces;
    promedioNegativo=negativo/contadorNegativo;*/

    printf("\nA)Cantidad de numeros: %d\n",veces);
    printf("B)Cantidad de pares: %d\n", par);
    printf("C)Suma de positivos: %d\n", positivo);
   /* printf("D)Promedio de negativos: %.2f\n", promedioNegativo);*/
    printf("E)Maximo: %d    Minimo: %d\n", maximo, minimo);
    printf("F)El mas chico de los positivos: %d\n", positivoMin);
    printf("G)El mas grande de los negativos: %d\n", negativoMax);
    printf("H)Cantidad de numeros entre -10 y 50: %d\n", puntoH);
  /*  printf("F)Promedio total: %f\n", promedio);*/


    return 0;
}
