#include "Profesor.h"

Profesor::Profesor(string _nombre, int _edad, string _asignatura) : Persona(_nombre, _edad) {

	asignatura = _asignatura;

}

Profesor::~Profesor(){}


void Profesor::mostrar() {
	Persona::mostrar();
	cout << "El profesor imparte la asignatura: " << asignatura << endl;

}

