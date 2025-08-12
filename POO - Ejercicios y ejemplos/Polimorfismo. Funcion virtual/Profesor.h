#pragma once
#include "Persona.h"

class Profesor:public Persona 
{
private:
	string asignatura;
public:
	Profesor(string, int, string); //nombre, edad, asignatura
	~Profesor();

	void mostrar();

};

