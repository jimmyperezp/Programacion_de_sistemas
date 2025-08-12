/* Ejercicio 1: construya una clase llamada rectangulo que tenga los siguientes atributos :

largo y ancho, y los siguientes metodos: perimetro () y area()*/

#include <iostream>
#include "rectangulo.h"
using namespace std;

int main() {
	
	Rectangulo r1 = Rectangulo(2, 3);
	r1.perimetro();
	r1.area();

	
	system("pause");
	return 0;



}