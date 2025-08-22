#pragma once
#include "cabecera.h"	

class Persona{

	private:
		string nombre;
		int edad;

	public:
		Persona(string, int);
		~Persona();

		virtual void mostrar(); 
		//solo especifico el tipo virtual de la funcion void mostrar() en la clase padre
};

