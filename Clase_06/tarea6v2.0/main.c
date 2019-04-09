#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#define T 200

/*
pedir al user el nombre y apellido en variables aparte
una tercer variable apellidonombre donde concatenaremos apellido y nombre

miñarro, daira
y las primeras m y d en mayus
:O :O :O :O

*/

void upperSegundoNombre (char vec [], int tam);

int main()
{
    char nombre [T], apellido [T], apellidoNombre [T];
    int comp, len, i;

    printf("Ingrese su nombre: ");
    gets(nombre);
    strlwr(nombre);

    nombre[0]=toupper(nombre[0]);

    upperSegundoNombre(nombre,T);


    printf("\nIngrese su apellido: ");
    gets(apellido);
    strlwr(apellido);//todo bien acá pero con la ñ no funciona :C

    apellido[0]=toupper(apellido[0]);

    strcpy(apellidoNombre,apellido);
    strcat(apellidoNombre, ", ");
    strcat(apellidoNombre,nombre);

    printf("----------------------------");
    printf("\n%s",apellidoNombre);

    return 0;
}




void upperSegundoNombre (char vec [], int tam)
{
    int i;


    for (i=0;vec[i]!='\0';i++)
    {
        if (vec[i]==' ')
        {
            i++;
            vec[i]=toupper(vec[i]);
            i--;
        }
    }

}

