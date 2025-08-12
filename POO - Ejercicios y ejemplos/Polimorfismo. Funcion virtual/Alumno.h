#pragma once
#include "Persona.h"

class Alumno : public Persona
{
private: 
	int numero_matricula;
	float notaFinal;
public:
	Alumno(string, int, int, float); 
	//Nombre, edad (de clase persona) ,nº matr, notaFinal
	
	~Alumno();

	void mostrar();



};

