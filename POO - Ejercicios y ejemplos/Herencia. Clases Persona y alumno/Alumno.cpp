#include "Alumno.h"

Alumno::Alumno(string nomb, int _edad, float _nota, int _nummat):Persona (nomb,_edad){
	nummat = _nummat;
	notafinal = _nota;
}

Alumno::~Alumno() {

}

void Alumno::mostrarAlumno() {
	mostrarPersona();
	/*tengo acceso al metodo mostrarPersona, perteneciente a la clase
	Persona, porque la clase alumno es de tipo public Persona */

	cout << "El numero de matricula del alumno es: " << nummat << endl;
	cout << "Y su nota final es: " << notafinal << endl;


}