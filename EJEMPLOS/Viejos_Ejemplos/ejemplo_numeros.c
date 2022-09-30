#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define N 10
#define MAX 25
#define MIN 0
#define AVG(x,y) ((float)x/y)

int es_mayor(int nums[N]);
int es_minimo(int nums[N]);
void es_min_max(int nums[N], int* min, int* max);
float cal_promedio(int nums[N]);

int main() {
    srand(time(NULL));

    int i = 0, numeros[N];
    int max_val = -1, min_val = -1;
    float promedio = 0;

    for(i = 0; i < N; i++) {
        numeros[i] = (rand()% MAX) - MIN;
        printf("%d", numeros[i]);
        if(i+1 < N) printf(" - ");
    }

    printf("\n");
    max_val = es_mayor(numeros);
    min_val = es_minimo(numeros);
    /*Paso dirección de memoria de min_val y max_val
    Esto me va a permitir retornar ambos valores
    de la funcion es_min_max()*/
    es_min_max(numeros, &min_val, &max_val);
    promedio = cal_promedio(numeros);
    printf("\nEl Valor Maximo es: %d", max_val);
    printf("\nEl Valor Minimo es: %d", min_val);
    printf("\nMinimo [ %d ] - Maximo [ %d ]", min_val, max_val);
    printf("\nEl Valor Promedio es: %.2f", promedio);

    return 0;
}

/**
* Función: es_maximo
*--------------------
* Retorna el valor maximo
* nums: arreglo de numeros tamaño N
* Return: int
*/
int es_mayor(int nums[N]) {
    int i = 0, maximo = -1;

    if(maximo == -1) maximo = nums[i];
    for(i = 0; i < N; i++) {
        if(nums[i] > maximo)
            maximo = nums[i];
    }

    return maximo;
}

/**
* Función: es_minimo
*--------------------
* Retorna el valor minimo
* nums: arreglo de numeros tamaño N
* Return: int
*/
int es_minimo(int nums[N]) {
    int i = 0, minimo = -1;

    if(minimo == -1) minimo = nums[i];
    for(i = 0; i < N; i++) {
        if(nums[i] < minimo)
            minimo = nums[i];
    }

    return minimo;
}

/**
* Función: es_min_max
*--------------------
* Retorna los valores minimos y máximos como PUNTEROS
*
* nums: arreglo de numeros tamaño N
* min: valor puntero y retorna como puntero
* max: valor puntero y retorna como puntero
*
* Return: void, y Minimo/Máximo via punteros
*/
void es_min_max(int nums[N], int* min, int* max) {
    int i = 0, min_ = -1, max_ = -1;

    {
        max = nums[i];
        min = nums[i];
    }

    for(i = 1; i < N; i++) {
        if(nums[i] > max)
            max = nums[i];
        if(nums[i] < min)
            min = nums[i];
    }
}

/**
* Función: cal_promedio
*--------------------
* Retorna el retorna el promedio del array dado
* nums: arreglo de numeros tamaño N
* Return: float
*/
float cal_promedio(int nums[N]) {
    int i = 0, suma = 0;

    for(i = 0; i < N; i++)
        suma += nums[i];

    return AVG(suma, (i+1));
}
