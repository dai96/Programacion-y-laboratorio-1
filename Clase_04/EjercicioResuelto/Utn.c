#include <stdio.h>
#include <stdlib.h>
#include <time.h>




int getInt(char mensaje [])
{
    int aux;
    printf("%s",mensaje);
    scanf("%d", &aux);
    return aux;
}

float getFloat(char mensaje [])
{
    float aux;
    printf("%s",mensaje);
    scanf("%f", &aux);
    return aux;
}

char getChar(char mensaje [])
{
    char aux;
    printf("%s",mensaje);
    fflush(stdin);
    scanf("%c", &aux);
    return aux;
}

char getNumeroAleatorio(int desde , int hasta, int iniciar)
{
    if(iniciar)
        srand (time(NULL));
    return desde + (rand() % (hasta + 1 - desde)) ;
}
