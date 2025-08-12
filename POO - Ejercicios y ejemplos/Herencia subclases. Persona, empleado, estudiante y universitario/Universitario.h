#pragma once
#include "Estudiante.h"

class Universitario: public Estudiante	
	//solo pongo la clase padre inmediatemente superior
{
private: 
	int numero_matricula;
public:
	Universitario(string, int, int, int);  
	//pero en el constructor, tengo que incluir todas las variables de las
	//clases superiores.
	~Universitario();

	void mostrarUniversitario();

};

