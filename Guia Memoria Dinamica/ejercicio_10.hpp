/**
 * @file ejercicio_10.hpp
 * @brief Resolución ejercicio 10 de la guía de Memoria Dinámica
 * @date 2022-09-30
 * 
 * @copyright Copyright (c) 2022
 * 
 */

#define Maximo 15
#define Minimo 5

bool fnMaxMin(int* Arr, int Tamanio, int& Max, int& Min);
bool fnMaxMin(int* Arr, int* EndNode, int& Max, int& Min);
bool fnMaxMin(int* _Arr, int& Max, int& Min);

/**
 * @brief Recorremos array hasta el tamaño indicado
 * 
 * @param Arr Array
 * @param Tamanio Tamaño del Array
 * @param Max Retorno del Maximo
 * @param Min Retorno del Minimo
 * @return true 
 * @return false 
 */
bool fnMaxMin(int* Arr, int Tamanio, int& Max, int& Min) {
    if (Arr == nullptr || Tamanio <= 0)
        return true;

    int i = 0;

    Max = Arr[i];
    Min = Arr[i];

    i++;

    while(i < Tamanio) {
        if(Max < Arr[i])
            Max = Arr[i];
        else if (Min > Arr[i])
            Min = Arr[i];
        i++;
    }
    return false;
}

/**
 * @brief Recorremos array hasta llegar a la dirección de memoria indicada
 * 
 * @param Arr Array
 * @param EndNode Dirección de memoria del último nodo
 * @param Max Retorno del Maximo
 * @param Min Retorno del Minimo
 * @return true 
 * @return false 
 */
bool fnMaxMin(int* Arr, int* EndNode, int& Max, int& Min) {
    if (Arr == nullptr || EndNode == nullptr)
        return true;

    int* Node = Arr;

    Max = *Node;
    Min = *Node;

    do {

        Node++;

        if(Max < *Node) 
            Max = *Node;
        else if(Min > *Node)
            Min = *Node;

    } while(Node != EndNode);

    return false;
}

/**
 * @brief Recorremos array hasta llegar al nullptr
 * 
 * @param _Arr Array
 * @param Max Retorno del Maximo
 * @param Min Retorno del Minimo
 * @return false 
 * @return true 
 */
bool fnMaxMin(int* _Arr, int& Max, int& Min) {
    if(_Arr == nullptr)
        return true;

    int* Node = _Arr;

    Max = *Node;
    Min = *Node;

    Node++;

    while(*Node != NULL) {
        if(Max < *Node)
            Max = *Node;
        else if (Min > *Node)
            Min = *Node;
        Node++;
    }
    return false;
}