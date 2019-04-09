#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define T 1024

int main()
{
    char palabra [T]="Hola", otrapalabra[T];
    int len, comp;

    //printf("Ingrese una palabra ");
    //gets(palabra);

    strcpy(palabra,otrapalabra);//copiar
    len=strlen(palabra);//longitud de la palabra
    otrapalabra=strlwr(palabra);

    comp=stricmp(palabra,"Hola");

    printf("\n%d", comp);

    printf("\npalabra %s de largo %d", palabra, len);

    strcat()...





    return 0;
}





