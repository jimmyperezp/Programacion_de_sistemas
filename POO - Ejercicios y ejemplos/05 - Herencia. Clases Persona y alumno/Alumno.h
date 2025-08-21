#pragma once
#include "Persona.h"

class Alumno : public Persona {
/*La clase alumno es una clase "hija" de persona. El "public" significa
que puedo acceder a todos los atributos y métodos que sean públicos de la 
clase Padre (Persona)*/ 

	private:
		float notafinal;
		int numero_matricula;
	
	public:
	
		Alumno(string, int, float, int);  
		/* No solo tiene los métodos propios, sino que tiene también los pertenecientes 
		a la clase Padre*/
		/*Pero, ¿En qué orden?: 
  		Hay que respetar los rangos. Primero van los de la clase padre. Estos eran 
		el nombre (string) y la edad (int). Después vienen los propios al alumno,
  		notafinal(float) y el número de matrícula (int)*/
		
		~Alumno();
		void mostrarAlumno();
	
};
