#include <stdio.h>
#include <stdlib.h>

int main()
{/**
    int* x= NULL;
    int v=10;

    x=&v;
    printf("\n%d",v);
    printf("\n%p",&v);                 //mostrar direccion de memoria de V
    printf("\n%p",&x);   //la dire de memoria de x
    printf("\n%p",x);                      //lo que guarda o el valor de x
    printf("\n%d",*x);  //el valor al que apunta x


    **/

    char letra;
    char* pLetra= &letra;

    printf("ingrese un caracter: ");
    fflush(stdin);
    scanf("%c",pLetra);//SIII....
    //scanf("%c",*pLetra);NOOO

   printf("%c",*pLetra);

   int p;
   int* q;
   int* r;

   p=10;
   q=&p;
   r=q;

   printf("\n%p",q); //"0x40"                    // 0x40    10   p
   printf("\n%p", r);  //"0x40"                  // 0x57   0x40  q
   printf("\n%d",*q); //"10"                     // 0x63   0x40  r
   printf("\n%d",*r); //"10"



    return 0;
}

/**
0x53      10    v
&v       v/*x

0x37     0x53   *x
&x        x



pedirle a un usuario que ingrese un caracter
variable tipo char puntero tipo char y pedir ese char a travez de un puntero*/
