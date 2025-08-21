#pragma once
#include "Persona.h"

class Empleado: public Persona
{
private:
	int codigopuestotrabajo;

public:
	Empleado(string, int, int); 
	~Empleado();

	void mostrarEmpleado();

};

