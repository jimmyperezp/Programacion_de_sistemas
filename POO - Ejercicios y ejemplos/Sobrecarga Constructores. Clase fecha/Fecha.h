#pragma once
#include "cabecera.h"

class Fecha
{
private:
	int dia;
	int mes;
	int ano;

public:
	Fecha(int, int, int); 
	//Este es el primer constructor. Recibiendo dia mes y año por separado 

	Fecha(long); 
	/* este es el segundo constructor. Recibe un unico entero largo, de la forma
	20230704 (año dia mes) todo seguido,el cual tendre que "desglosar" */

	void mostrarFecha();
};

