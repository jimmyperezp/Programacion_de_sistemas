#include "Persona.h"

Persona::Persona(string n, int e) {
	nombre = n;
	edad = e;
}

Persona::~Persona() {
}

void Persona::mostrarPersona() {
	cout << "la persona se llama: " << nombre << endl;
	cout << "y tiene " << edad << "anos\n" << endl;
}
