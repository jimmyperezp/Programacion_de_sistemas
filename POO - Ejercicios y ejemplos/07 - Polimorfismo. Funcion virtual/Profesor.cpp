#include "Profesor.h"

Profesor::Profesor(string _nombre, int _edad, string _asignatura) : Persona(_nombre, _edad){

	asignatura = _asignatura;

}

Profesor::~Profesor(){}

void Profesor::mostrar() {

	Persona::mostrar();
	//Lo primero que hago es llamar al método mostrar de Persona.
	// Para hacerlo, indico la clase y después el método virtual
	
	cout << "El profesor imparte la asignatura: " << asignatura << endl;
}