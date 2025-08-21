#include "Universitario.h"
#include "Estudiante.h"

Universitario::Universitario(string _nombre, int _edad, int _curso, int _numero_matricula) :  Estudiante(_nombre , _edad, _curso) {

	numero_matricula = _numero_matricula;


}

Universitario :: ~Universitario() {}

void Universitario::mostrarUniversitario() {
	mostrarEstudiante();
	cout << "Numero de matricula  es " << numero_matricula << endl;

}

