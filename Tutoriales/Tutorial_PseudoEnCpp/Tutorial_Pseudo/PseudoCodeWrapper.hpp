/*
* Pseudo Codigo en Español
* Introducción a las redes e informática
* Docente: Stanganelli, Ezequiel Agusto
* Github: github.com/eastanganelli
*/
#ifndef pseucodewrapper_Lib
#define pseucodewrapper_Lib 1 // some sensible default

#include <iostream>
#include <string>

using namespace std;

/*
* Generic redefinitions
*/

	#define COMENTARIO // Just a Dummy comment 😊
	#define inicio {
	#define fin }
	#define hacer ){  /* Para, Mientras y Según */

/*
* Logical Operators (LOP) (Operadores Lógicos)
*/

	#define y_ &&
	#define o_ ||
	#define no !
	#define mayor >
	#define mayor_igual >=
	#define menor <
	#define menor_igual <=
	#define iguales ==

/*
* If Statements (Condicional)
*/

	#define si(condition)    if(##condition       /* Si (condicion) */
	#define sino			 }else{				  /* Sino */
	#define fin_si fin						      /* Fin Si */
	#define entonces		 ){				      /* Entonces */

/*
* Loops (Ciclos)
*/
	/*
	* while() {}
	*/

		#define mientras(condicion) while(##condicion
		#define fin_mientras        fin
		#define siguiente           += 

	/*
	* do {} while ();
	*/

		#define repetir              do{
		#define hasta_que(condicion) }while(##condicion); /* Hasta que (condicion); */

	/*
	* for(;;) {}
	*/

		#define para(var_name)	for(##var_name
		#define hasta(var_name) ; ##var_name < /* i < N */
		#define paso(var_name)  ; ##var_name +=     /* i = i + X */
		#define fin_para fin

/*
* Switch (Condición Multiple)
* Warning: requiere el uso de break;
*/

	#define segun(var_name) switch(##var_name /* Segun (variable) hacer */
	#define alto break;
	#define fin_segun fin
	
	/*
	* Cases (Casos)
	*/

		#define caso(case_value) case ##case_value:
		#define de_otro_modo default:

/*
* Input/Output (Entrada/Salida)
*/

	#define imprimir    std::cout /* imprimir << ..... << ..... ; */
	#define leer        std::cin  /* leer >> ..... >> ..... ; */
	#define salto_linea std::endl /* endl = `\n` */

/*
* Funciones
*/

	// #define programa(fn_name) void ##fn_name()

	/*#define programa(ret_value, program_name, params) \ ##rev_value ##program_name (##params) {
	#define devuelve(ret_param) return ##ret_param;*/

/*
* Refinición de variables
*/

	#define entero   int			/* -inf <= 0 <= +inf */
	#define reales   unsigned int  /* 0,1,....N, N >= 0 */
	#define decimal  double		/* 3.1416 */
	#define caracter char			/* a, b, c, .... */
	#define booleano bool			/* true or false (verdadero o falso) */
	#define texto    std::string   /* "abcde..." */

/*
* Macros
*/
	#define suma(x, y) (x + y)        /* SUMA  X + Y */
	#define resta(x, y) (x - y)       /* RESTA X - Y */
	#define multiplicar(x, y) (x * y) /* MULTIPLICAR X * Y */
	#define dividir(x, y) (x / y)     /* DIVIDIR X / Y */

#endif // pseucodewrapper_Lib