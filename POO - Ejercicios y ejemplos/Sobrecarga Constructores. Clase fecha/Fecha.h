#pragma once
#include "cabecera.h"

class Fecha
{
private:
	int dia,mes,ano;

public:
/*Imaginemos que se puede indicar la fecha de dos maneras. Si la forma utilizada no coincide con los parámetros
o los tipos que espera el constructor, entonces habrá un problema. Esto lo soluciono con múltiples constructores*/

	Fecha(int, int, int); 
	//Este es el primer constructor. Recibiendo dia mes y año por separado 

	Fecha(long); 
	/* este es el segundo constructor. Recibe un unico entero largo, de la forma
	20230704 (año dia mes) todo seguido,el cual tendre que "desglosar" */

	void mostrarFecha();
};

