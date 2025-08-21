
#include "Persona.h"
#include "Alumno.h"
#include "Profesor.h"

int main() {
	Persona *vector[3];

	vector[0] = new Alumno("Jimmy", 21, 20259, 9.75);
	vector[1] = new Alumno("Elia", 22, 19055, 9.8);
	vector[2] = new Profesor("Alonso", 16, "matematicas");

	cout << "-----ALUMNO 1-----\n";
	vector[0]->mostrar();
	cout << "\n" ;


	cout << "-----ALUMNO 2-----\n";
	vector[1]->mostrar();
	cout << "\n";


	cout << "-----PROFESOR-----\n";
	vector[2]->mostrar();
	cout << "\n";

	system("pause");
	return 0;
}