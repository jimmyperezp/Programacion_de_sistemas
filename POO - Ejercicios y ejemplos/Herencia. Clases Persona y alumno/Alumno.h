#pragma once
#include "Persona.h"
class Alumno : public Persona    
	/*la clase alumno es una clase "hija" de persona
	el public significa que puedo acceder a toods los atributos y
	metodos publicos de la clase padre (Persona) */ 
{
private:
	float notafinal;
	int nummat;

public:

	Alumno(string, int, float, int);  
	//tiene los dos atributos de alumno y los dos de persona
	//Primero los atributos de Persona, luego los de alumno
	
	~Alumno();
	void mostrarAlumno();


};

