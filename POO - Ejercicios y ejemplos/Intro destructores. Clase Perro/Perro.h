#pragma once
#include "cabecera.h"

class Perro
{
private:
	string nombre;
	string raza;
public:
	Perro(string, string);
	~Perro();			//Este es el destructor
	void mostrarDatos();
	void jugar();
};
