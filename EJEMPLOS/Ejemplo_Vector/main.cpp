// test.cpp : Defines the entry point for the application.
//

#include "vector_.h"
#include <cstring>

using namespace std;

template<typename T> struct _Vector {
	/*
	* Variables
	* ---------
	*/
	int _size;
	T* _Array;
	/*
	* Inicialización por Defecto
	* -------------------------
	* Inicializa con tamaño 0.
	*/
	void _init() {
		_Array = nullptr;
		_resize(0);
	}
	/*
	* Inicialización con tamaño
	* -------------------------
	* Inicializa con el tamaño recibido por parametro.
	*/
	void _init(int size) {
		_Array = nullptr;
		_resize(size);
	}
	void add(T _value) {
		// ...
	}
	void add(int pos, T _value) {
		// ...
	}
	void remove(T _value) {
		// ...
	}
	void remove(int pos) {
		// ...
	}
	/*
	* Lectura de Valor
	* ----------------
	* Busca y devuelve el valor en la posición indicada.
	* Exception: Posición fuera del limite se cierra el programa.
	*/
	T& operator[](int pos) {
		if (pos < 0 || (pos + 1) > this->_size) {
			std::cout << "Array index out of bound, exiting";
			exit(0);
		}
		return _Array[pos];
	}
	/*
	* Devuelve Array
	* --------------
	*/
	T* _getArray() {
		return _Array;
	}
	/*
	* Redimension Array
	* -----------------
	* Recibe el nuevo tamaño del array y lo redimensiona
	*/
	void _resize(int size) {
		T* newVector = nullptr;

		newVector = new T[size];
		if (newVector == nullptr) {
			std::cout << "Available Memory" << std::endl;
			return;
		}

		if (_Array != nullptr) {
			memcpy(newVector, _Array, sizeof(T) * (this->_size));
			delete[] _Array;
		}

		_Array = newVector;
		this->_size = size;
	}
	/*
	* Redimension Automática
	* ----------------------
	* Autoredimensiona el array al recibir o quitar un elemento.
	*/
	void resize() {
		// ...
	}
	/*
	* Destructor
	* ----------
	* Elimina el array y libera la memoria.
	*/
	void _clear() {
		if (_Array != nullptr) {
			delete[] _Array;
			_Array = nullptr;
			this->_size = 0;
		}
	}
};

int main() {
	_Vector<int> miVector;
	miVector._init(3);

	miVector[0] = 2;
	miVector[1] = 0;
	miVector[2] = -2;

	for (int i = 0; i < miVector._size; i++) {
		std::cout << miVector[i] << std::endl;
	}

	miVector._clear();

	return 0;
}
