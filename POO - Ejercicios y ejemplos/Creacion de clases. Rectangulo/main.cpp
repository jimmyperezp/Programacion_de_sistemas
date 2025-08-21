/* Ejercicio 1: 
----------------
construya una clase llamada rectangulo que tenga los siguientes atributos :
largo y ancho, y los siguientes metodos: perimetro () y area()*/

#include <iostream>
#include "rectangulo.h"  //-> Ya he visto que aquí he declarado atributos y métodos.
using namespace std;

int main() {
	
	Rectangulo r1 = Rectangulo(2, 3); //Le paso al constructor el largo y el ancho
	// r1 es un objeto de la clase rectángulo. 
	
	r1.perimetro();  // Accedo al método perímetro
	r1.area();		 // Accedo al método área.

		system("pause");
	return 0;



}
