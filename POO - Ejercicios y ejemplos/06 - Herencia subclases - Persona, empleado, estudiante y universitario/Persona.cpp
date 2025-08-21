#include "Persona.h"

Persona::Persona (string _nombre, int _edad) {

	nombre = _nombre;
	edad = _edad;

}

Persona::~Persona() {}

void Persona::mostrarPersona() {

	cout << "Nombre: " << nombre << endl;
	cout << "Edad: " << edad << endl;

}