
typedef struct
{
    int id;
    char nombre [20];
    char sexo;
    float sueldoNeto;
    float sueldoBruto;
    //int cantidadHoras;
    int idSector;
    int estado;

}eEmpleado;
/*
typedef struct
{
    int dia;
    int mes;
    int anio;

}eFecha;

typedef struct
{
    int idSector;
    char descripcion [20];
    float valor;

}eSector;

*/

int menuDeOpciones (char mensaje []);


void inicializarEmpleado (eEmpleado lista[], int T);


int idIncremental(eEmpleado lista[],int limite);


void hardcodeEmpleados (eEmpleado lista [], int T);



int buscarLibre (eEmpleado lista[], int tam);



int altaEmpleado (eEmpleado lista[],int tam);

void mostrarUno(eEmpleado lista[],int i);


void mostrarLista (eEmpleado lista[], int tam);




























int getInt (char mensaje []);

float getFloat (char mensaje []);


char getCaracter (char mensaje []);

void getString(char mensaje [],char vec[]);

void getNombres (char mensaje [], char vec[]);

void upperSegundoNombre (char vec []);

int esNumerico(char vec[]);

int esSoloLetras(char str[]);

void validarString (char validar [], int tam, char solicita[]);

