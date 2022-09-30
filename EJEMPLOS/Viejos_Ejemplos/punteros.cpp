#include <stdlib.h>
#include <stdio.h>
#include <iostream>
#include <time.h>
#include <windows.h>

#define N 5

int* crear_fila(int a) {
    return (int*)calloc(a, sizeof(int));
}

int main() {

    //int matrix[2][2];
    int** Matriz_enteros = NULL;

    srand(time(NULL));

    Matriz_enteros = (int**)malloc(sizeof(int*)*N);

    /*for(int i = 0; i < 5; i++)
        Matriz_enteros[i] =  crear_fila();*/
    *(Matriz_enteros+0) =  /* *crear_fila */crear_fila(6);
    Matriz_enteros[1] =  crear_fila(2);
    Matriz_enteros[2] =  crear_fila(10);
    Matriz_enteros[3] =  crear_fila(7);
    Matriz_enteros[4] =  crear_fila(0);

    for(int i = 0; i < N; i++){
        switch(i){
            case 0: {

                Sleep(500);
                for(int j = 0; j < 6; j++)
                Matriz_enteros[i][j] = rand() % 2;
                break;
            }
            case 1: {
                Sleep(500);
                for(int j = 0; j < 2; j++)
                Matriz_enteros[i][j] = rand() % 2;
                break;
            }
            case 2: {
                Sleep(500);
                for(int j = 0; j < 10; j++)
                Matriz_enteros[i][j] = rand() % 2;
                break;
            }
            case 3: {
                Sleep(500);
                for(int j = 0; j < 7; j++)
                Matriz_enteros[i][j] = rand() % 2;
                break;
            }
            case 4: {
                Sleep(500);
                for(int j = 0; j < 0; j++)
                Matriz_enteros[i][j] = rand() % 2;
                break;
            }
        }
    }


    for(int i = 0; i < N; i++) {
        switch(i){
            case 0: {
                for(int j = 0; j < 6; j++)
            printf("[%d][%d] = %d\t", i,j, Matriz_enteros[i][j]);
                break;
            }
            case 1: {
                for(int j = 0; j < 2; j++)
            printf("[%d][%d] = %d\t", i,j, Matriz_enteros[i][j]);
                break;
            }
            case 2: {
                for(int j = 0; j < 10; j++)
            printf("[%d][%d] = %d\t", i,j, Matriz_enteros[i][j]);
                break;
            }
            case 3: {
                for(int j = 0; j < 7; j++)
            printf("[%d][%d] = %d\t", i,j, Matriz_enteros[i][j]);
                break;
            }
            case 4: {
                for(int j = 0; j < 0; j++)
            printf("[%d][%d] = %d\t", i,j, Matriz_enteros[i][j]);
                break;
            }
        }
        printf("\n");
    }

    system("pause");
    for(int i = 0; i < 5; i++)
        free(Matriz_enteros[i]);
    free(Matriz_enteros);

    return 0;
}
