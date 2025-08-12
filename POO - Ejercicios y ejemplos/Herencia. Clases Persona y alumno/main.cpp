
#include "Alumno.h"

int main() {


	Alumno alumno1("Jimmy", 21, 8.75, 20259);

	/*Como ya vi en el constructor de alumno, tengo que pasarle :
	 nombre,edad, codigo del alumno, nota final. 
	 El nombre y la edad son los atributos de la clase persona. */

	alumno1.mostrarAlumno();

	system("pause");
	return 0;

}


