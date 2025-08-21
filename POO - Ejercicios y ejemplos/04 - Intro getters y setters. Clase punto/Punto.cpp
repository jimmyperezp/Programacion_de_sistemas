#include "Punto.h"

Punto::~Punto() { //Destructor.
} 
Punto::Punto() {  //Constructor.
}


//Ahora, este metodo setpunto actúa como el constructor "convencional"
void Punto::setPunto(int _x, int _y) {   
	x = _x;
	y = _y;

}

int Punto::getPuntoX() {
	return x;
}

int Punto::getPuntoY() {
	return y;
}


//¿POR QUÉ NO USO EL CONSTRUCTOR "CONVENCIONAL"?
//Porque de esta manera, usando setters, puedo ir dando valores a los atributos 
//de mi clase poco a poco, segun me convenga. Por eso, no usaré el constructor
//"convencional". Si en algun caso, le quiero dar valor a todas las variables 
//directamente, puedo usar el constricutor de igual manera que habia visto antes.