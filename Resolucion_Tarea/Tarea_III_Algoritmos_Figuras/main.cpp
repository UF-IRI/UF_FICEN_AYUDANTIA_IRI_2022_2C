#include "pseudo_libreria/PseudoCodeWrapper/PseudoCodeWrapper.hpp"

int main() {

    /*
    * Figura comisión 1

	Matriz 7 x 7

    Output Esperado:
      0 1 2 3 4 5 6
    0     X X X X  
    1   X          
    2 X            
    3   X X X X X X
    4     X        
    5       X      
    6         X    
    */
	para(entero i) = 0 hasta(i) 7 paso(i) 1 hacer
		para(entero j) = 0 hasta(j) 7 paso(j) 1 hacer
			si( ( i == 0 y_  j > 1 y_ j < 6) o_ ( i == 3 y_ j >0 ) o_ ( j == -i + 2 )  ) entonces
				imprimir << "X";
			sino
				imprimir << " ";
			fin_si
		fin_para
		imprimir << salto_linea;
	fin_para
    /*
    * Figura comisión 2

	Matriz 7 x 9

    Output Esperado:
	  0 1 2 3 4 5 6 7 8
    0 X X X X X X X X X
    1 X X X X X X X X X
    2 X X X X X X X X X
    3       X     
    4         X    
    5           X   
    6             X  
    */
	para(entero i) = 0 hasta(i) 7 paso(i) 1 hacer
		para(entero j) = 0 hasta(j) 9 paso(j) 1 hacer
			si( ( i == j ) o_ ( i < 3 ) ) entonces
				imprimir << "X";
			sino
				imprimir << " ";
			fin_si
		fin_para
		imprimir << salto_linea;
	fin_para

    /*
    * Figura comisión 3

	Matriz 9 x 9

    Output Esperado:
	  0 1 2 3 4 5 6 7 8
    0 X X X X X X X X X
    1 X X           X X
    2 X   X       X   X
    3 X     X   X     X
	4 X       X       X
    5 X     X   X     X
    6 X   X       X   X
    7 X X           X X
    8 X X X X X X X X X
    */
	para(entero i) = 0 hasta(i) 9 paso(i) 1 hacer
		para(entero j) = 0 hasta(j) 9 paso(j) 1 hacer
			si( ( i == j ) o_ ( i == -j ) o_ ( i == 0 o_ i == 8 ) o_ ( j == 0 o_ j == 8 ) ) entonces
				imprimir << "X";
			sino
				imprimir << " ";
			fin_si
		fin_para
		imprimir << salto_linea;
	fin_para

    return 0;
}