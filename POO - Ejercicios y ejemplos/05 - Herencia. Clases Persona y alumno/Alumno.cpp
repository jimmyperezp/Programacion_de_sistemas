#include "Alumno.h"

Alumno::Alumno(string nomb, int _edad, float _nota, int _nummat):Persona (nomb,_edad){
	nummat = _nummat;
	notafinal = _nota;
}
/*Declaro todos los atributos que necesita el constructor, pero el nombre son 
pertenecientes a la clase persona. Lo indico al final.*/

Alumno::~Alumno() {
} //El destructor sigue estando vacío. 

void Alumno::mostrarAlumno() {
	mostrarPersona();
	/*Tengo acceso al metodo mostrarPersona, perteneciente a la clase
	Persona, porque la clase alumno es de tipo public Persona (tiene 
 	acceso a los métodos Puúblicos de la clase Persona.*/
	
	/* La función mostrarPersona() muestra el nombre y edad. Aún me falta
	mostrar los atributos "nota final" y "numero de matrícula" */
	cout << "El numero de matricula del alumno es: " << nummat << endl;
	cout << "Y su nota final es: " << notafinal << endl;


}
