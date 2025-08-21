#include "Punto.h"

Punto::~Punto() { //Destructor.
} 
Punto::Punto() {  //Constructor. Ahora lo dejo en blanco. 
}

void Punto::setPunto(int _x, int _y) {   
// Ahora cambio los atributos privados usando la función set
// Recibirá los valores que quiero cambiar (con el mismo tipo que los atributos)
	x = _x;
	y = _y;
}

int Punto::getPuntoX() {
// Y, para consultar los valores, empleo los métodos "get"
// Me devuelven el atributo correspondiente.
	return x;
}

int Punto::getPuntoY() {
	return y;
}

/*¿POR QUÉ NO USO EL CONSTRUCTOR "CONVENCIONAL"?
De esta manera, usando setters, puedo ir dando valores a los atributos 
de mi clase poco a poco, segun me convenga. Por eso, no usaré el constructor
"convencional".*/
