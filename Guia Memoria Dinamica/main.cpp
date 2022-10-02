/**
 * @file main.cpp
 * @author IRI
 * @brief Resolución de ejercicios de la guia de Memoria Dinámica
 * 
 */

#include <iostream>
#include <ctime>

#include "ejercicio_10.hpp"

int main() {
    srand(time(NULL));

    // Ejercicio 10
    {
        // Ejemplo sin pasaje de tamaño ni dirección del último Nodo
        // Solo se sabe que se termina con nullptr
        // ⚠️ >> Para usar el método de nullptr, hay que solicitar la memoria de la siguiente forma:
        // >>>> int* numeros = new (nothrow) int[tam + 1];
        {
            int tam = rand() % (Maximo - Minimo) + Minimo,
            Max, Min;
            int* numeros = new int[tam + 1];
            int* last_node = numeros + tam;
            *last_node = NULL;

            for(int i = 0; i < tam; i++)
                numeros[i] = rand() % ((Maximo - Minimo) + Minimo)*3;

            if(fnMaxMin(numeros, Max, Min))
                std::cout << "ERROR";
            else
                std::cout << "Ejemplo >> sin pasaje de tamaño ni dirección del último Nodo" <<
                             std::endl << "Maximo:: " << Max << " -  Minimo:: " << Min;
            delete[] numeros;
        }

        std::cout << std::endl << std::endl;

        // Ejemplo sin pasaje de tamaño pero con dirección del ultimo nodo
        // ⚠️ >> No se olvide de hacer tam-1, sino accederemos a una dirección de memoria INCORRECTA
        {
            int tam = rand() % (Maximo - Minimo) + Minimo,
            Max, Min;

            int* numeros = new int[tam];
            int* endNode = numeros + tam - 1;

            for(int i = 0; i < tam - 1; i++)
                numeros[i] = rand() % ((Maximo - Minimo) + Minimo)*3;

            if(fnMaxMin(numeros, endNode, Max, Min))
                std::cout << "ERROR";
            else
                std::cout << "Ejemplo >> sin pasaje de tamaño pero con dirección del ultimo nodo" <<
                             std::endl << "Maximo:: " << Max << " -  Minimo:: " << Min;
            delete[] numeros;
        }
    }

    return EXIT_SUCCESS;
}