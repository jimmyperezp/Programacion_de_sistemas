#include "Alumno.h"

Alumno::Alumno (string _nombre, int _edad, int _numero_matricula, float _notaFinal) :Persona(_nombre, _edad) {

	numero_matricula = _numero_matricula;
	notaFinal = _notaFinal;

}

Alumno ::~Alumno() {}

void Alumno::mostrar() {
	Persona::mostrar();
	cout << "El numero de matricula del alumno es " << numero_matricula << endl;
	cout << "Y su nota final: " << notaFinal << endl;

}