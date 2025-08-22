#include "Alumno.h"

Alumno::Alumno (string _nombre, int _edad, int _numero_matricula, float _notaFinal) :Persona(_nombre, _edad) {

	numero_matricula = _numero_matricula;
	notaFinal = _notaFinal;

}

Alumno ::~Alumno() {}

void Alumno::mostrar() {

	Persona::mostrar();
	/*Igual que en "Profesor", dentro de mostrar, llamo al método
	mostrar de la clase Persona, indicándolo con esa sintaxis.*/
	
	cout << "El numero de matricula del alumno es " << numero_matricula << endl;
	cout << "Y su nota final: " << notaFinal << endl;

}