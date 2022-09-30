/*
Crear un programa que cree un array con 1000 letras mayúsculas aleatorias y que cuenta
cuántas veces aparece cada letra en el array
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define M 27
//#define N 50

int main() {
	char abcedario[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
	int N = 50;
	int abc_cont[M] = { 0 }; //Cada posición contiene la cantidad de veces que aparece
	char* letras = new char[N]; //(char*)malloc(sizeof(char)*N);

	srand(50);

	int i = 0;
	for (i = 0; i < N; i++) {
		int pos_char = rand() % (M - 1);
		letras[i] = abcedario[pos_char];
	}

	for(i = 0; i < N; i++)
		printf("%c -", letras[i]);

	int j = 0;
	for (i = 0; i < M - 1; i++) {
		char letra = abcedario[i];
		for (j = 0; j < N; j++) {
			if (letra == letras[j])
				abc_cont[i]++;
		}
	}
	printf("\n");
	for(i = 0; i < M; i++)
		printf("%c [%d] -", abcedario[i], abc_cont[i]);

	system("pause");
	//delete letras;
	delete[] letras;
	return 0;
}