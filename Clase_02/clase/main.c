#include <stdio.h>
#include <stdlib.h>

int main()
{
    int unNumero, otroNumero, suma;
    float promedio;

    printf("Ingrese un numero:\n");
    scanf("%d",&unNumero);

    printf("Ingrese otro numero:\n");
    scanf("%d",&otroNumero);

    suma = unNumero+otroNumero;

    promedio = (float)suma/2;//casteo explicito

    printf("El promedio es: %.2f\n",promedio);


    char palabra[16];

    printf("Ingrese una palabra: \n");
    scanf("%s", palabra);//sin espacio por el scanf

    printf("Ud ingreso: %s\n",palabra);

    /*
    int i=0;

    while(i<10)
    {
        printf("%d-",i+1);
        i++;
    }

    */

    int i;
    for(i=0;i<10;i++)
    {
        printf("%d-",i+1);
    }



    return 0;
}
