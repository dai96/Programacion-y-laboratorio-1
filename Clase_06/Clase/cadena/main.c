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

    strcpy(palabra,otrapalabra);
    len=strlen(palabra);
    otrapalabra=strlwr(palabra);

    comp=stricmp(palabra,"Hola");

    printf("\n%d", comp);

    printf("\npalabra %s de largo %d", palabra, len);

    strcat()...





    return 0;
}




par amañana pedir al user el nombre y apellido en variables aparte
y una tercer variable apellidonombre donde concatenare apellido y nombre

miñarro, daira
y las primeras m y d en mayus
:O :O :O :O
