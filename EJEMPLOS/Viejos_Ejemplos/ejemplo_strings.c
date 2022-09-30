#include <stdlib.h>
#include <stdio.h>
#include <conio.h>
#include <string.h>

#define FIN '\n'
#define N	  15
#define BLK   4

enum booleano { VERDADERO, FALSO };
enum vocales  { A, E, I, O, U };

//Typedef permite llamar algo con otro nombre
//Ejemplo: typedef int entero;
typedef enum booleano eBool;
typedef enum vocales eVocal;

char* nuevo_string(int tam);
void anyadir_texto(char* string_, int tam);
eBool string_comparacion(char* str_izq, char* str_der);
eBool es_vocal(char caracter, int vocal_cont[5]);
void contar_vocales(char* string_, int vocal_cont[5]);

int main()
{
    const char ejemplo[N] = "Hola_Mundo";
    int tam_String = 0, vocal_cont[5] = { 0 };
    char* string_ = NULL; //Inicializar punteros con NULL

    //Obtenemos la longitud del string ejemplo
    tam_String = (int)strlen(ejemplo);

    //nuevo_string crea un char*
    //y se lo devuelve a string_
    string_ = nuevo_string(tam_String);

    //⚠️⚠️ SIEMPRE verificar que al crear
    //un puntero, el mismo no sea NULL
    if (string_ == NULL)
        return 0;

    //Copio el texto de ejemplo a string_
    strcpy(string_, ejemplo);
    printf("Pre Texto: %s\n", string_);

    anyadir_texto(string_, tam_String);
    printf("Post Texto: %s\n", string_);

    //Imprime el texto y la dirección en memoria
        printf("Texto: %s [0x%x]\n", string_, &string_);

    //Contamos e Imprimimos la canitdad de vocales
    //que hay en el string
    //Bonus track: reemplazamos las vocales por '_'
    contar_vocales(string_, vocal_cont);
    printf("Vocal\nA [%d] - E [%d] - I [%d] - O [%d] - U [%d]\nString vocales cambiada por _: \n%s", vocal_cont[A], vocal_cont[E], vocal_cont[I], vocal_cont[O], vocal_cont[U], string_);

    /*⚠️⚠️ IMPORANTE: SIEMPRE liberar la memoria usada
    antes de cerrar programa o al dejar de usarla*/
    free(string_);

    return 0;
}
/**
* Función: nuevo_string
*----------------------
* Retorna un puntero a char
*
* tam: valor int que contiene longitud array
*
* Return: char*
*/
char* nuevo_string(int tam)
{
    char* aux = NULL;
    aux = (char*)malloc(tam * sizeof(char));

    //Esta es otra forma de crear arreglos o arrays
    //aux = (char*)calloc(tam, sizeof(char));

    return aux;
    //Info de Calloc
    //https://programmerclick.com/article/17381785102/
}

/**
* Función: anyadir_texto
*-----------------------
* Retorna por puntero una concanetción entre string_ y
* un texto ingresado de forma dinámica
*
* string_: puntero tipo char*
* tam: valor int que contiene longitud array
*
* Return: void
*/
void anyadir_texto(char* string_, int tam)
{
    char* texto_in = NULL;
    char lectura;
    int i = 0;

    texto_in = nuevo_string(1);
    if (texto_in == NULL)
        return;
    *texto_in = '\0';

    printf("Ingrese un string [Terminar con ENTER]: ");

    do
    {
        /*Si el tamaño es igual o mayor a la longitud,
        redimensionamos el arreglo de texto_in*/
        if (i >= strlen(texto_in))
            texto_in = (char*)realloc(texto_in, (i + BLK) * sizeof(char));

        scanf("%c", &lectura);
        //fflush(stdin);
        if (lectura != FIN) {
            texto_in[i] = lectura;
            i++;
        }
    }
    while (lectura != FIN);
    *(texto_in + i) = '\0';

    if(string_comparacion(string_, texto_in) == FALSO)
        strcat(string_, texto_in);
    else
        printf("\nNo se puedo concatenar, son el mismo string");

    /*⚠️⚠️ IMPORANTE: SIEMPRE liberar la memoria usada
    antes de cerrar programa o al dejar de usarla*/
    free(texto_in);
}

/**
* Función: string_comparacion
*----------------------------
* Retorna un booleano del tipo enum según
* el resutado lanzado por strcmp entre
* el str_izq y str_der
*
* str_izq: char* que contiene un string
* str_der: char* que contiene un string
*
* Return: enum booleano
*/
eBool string_comparacion(char* str_izq, char* str_der) {
    if(strcmp(str_izq, str_der) == 0)
        return VERDADERO;

    /*Retorno FALSO en el caso que:
        -strcmp(str_izq, str_der) < 0
        -strcmp(str_izq, str_der) > 0
    */
    return FALSO;

    //Info de strcmp()
    //https://www.programiz.com/c-programming/library-function/string.h/strcmp
}

/**
* Función: es_vocal
*----------------------------
* Retorna un booleano del tipo enum si
* el caracter pasado es vocal o no, e incrementa
* en el arreglo el contador de la vocal pasada
*
* caracter: char que contiene caracter a revisar (vocal o no)
* vocales: int* que contiene los contadores de la vocales
*
* Return: enum booleano y Contadores de vocales como puntero
*/
eBool es_vocal(char caracter, int vocal_cont[5]) {
    switch(caracter) {
    case 'A':
    case 'a': {
        vocal_cont[A]++;
        break;
    }
    case 'E':
    case 'e': {
        vocal_cont[E]++;
        break;
    }
    case 'I':
    case 'i': {
        vocal_cont[I]++;
        break;
    }
    case 'O':
    case 'o': {
        vocal_cont[O]++;
        break;
    }
    case 'U':
    case 'u': {
        vocal_cont[U]++;
        break;
    }
    default:
        return FALSO;
    }
    return VERDADERO;
}

/**
* Función: contar_vocales
*----------------------------
* Retorna por puntero, los contadores de
* las vocales
*
* string_: char* que contiene el string a analizar
* vocales: int* que contiene los contadores de la vocales
*
* Return: void y Contadores de vocales como puntero
*/
void contar_vocales(char* string_, int vocal_cont[5]) {
    int i, long_string;
    long_string = (int)strlen(string_);
    for(i = 0; i < long_string; i++) {
        if(es_vocal(*(string_ + i), vocal_cont) == VERDADERO)
            *(string_ + i) = '_';
    }
}
