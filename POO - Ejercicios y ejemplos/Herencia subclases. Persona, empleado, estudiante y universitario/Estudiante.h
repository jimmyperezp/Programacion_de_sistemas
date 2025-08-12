
#pragma once
#include "Persona.h"

class Estudiante:public Persona

{
private:
	int curso;
	
public:
	Estudiante(string, int, int);  
	~Estudiante();
	void mostrarEstudiante();

};

