#pragma once
#include "cabecera.h"

class Perro{

	private:
		string nombre;
		string raza;
	public:
		Perro(string, string); //Recibe el nombre y la raza. Ambos strings.
		~Perro();	//Este es el destructor. No recibe parámetros.

		void mostrarDatos();
		void jugar();
};