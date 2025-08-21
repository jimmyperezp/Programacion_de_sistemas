#include "Persona.h"
#include "Estudiante.h"
#include "Empleado.h"
#include "Universitario.h"


int main() {
	Persona p1("jimmy", 21);
	Empleado e1("yo como empleado", 22, 6656);
	Estudiante yo("yo como estudiante", 21, 3);
	Universitario jim( "jim",21, 4, 20259);

	p1.mostrarPersona();
	cout <<" " << endl;
	e1.mostrarEmpleado();
	cout <<  " " << endl;
	yo.mostrarEstudiante();
	cout << " " << endl;
	jim.mostrarUniversitario();

	system("pause");
	return 0;

}