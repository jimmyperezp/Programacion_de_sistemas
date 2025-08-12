

#include "Estudiante.h"

Estudiante::Estudiante(string __nombre, int __edad, int _curso): Persona (__nombre, __edad) {

	curso = _curso;
}

Estudiante::~Estudiante() {}

void Estudiante::mostrarEstudiante() {

	mostrarPersona();

	cout << "El curso en que se encunetra el estudiante es " << curso << endl;

}