#include "rectangulo.h"

Rectangulo::Rectangulo(float l, float a) {
	largo = l;
	ancho = a;

}

void Rectangulo::perimetro(){
	float perim;
	perim = 2 * largo + 2 * ancho;
	printf("El perimetro del rectangulo es %.2f metros.\n",perim);


}

void Rectangulo::area() {

	float are;
	are = largo * ancho;

	printf("El area del rectangulo es %.2f metros cuadrados\n", are);

}