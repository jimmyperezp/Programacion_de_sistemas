#pragma once
#include <stdio.h>

class Rectangulo{

	private: //Atributos -> Privados. Solo los puedo modificar desde los métodos.
		float largo;
		float ancho;

	public: // Métodos de la clase.
		Rectangulo(float,float); //Es el constructor. Recibe dos floats para inicializar la clase (largo y ancho)
		void perimetro ();
		void area ();

};