#pragma once
#include "cabecera.h"

class Persona{
	
	private:
		string nombre;
		int edad;
	
	public:
		Persona(string, int); // Constructor.
		~Persona(); // Destructor.
		void mostrarPersona(); //Método para mostrar nombre y edad.
};
