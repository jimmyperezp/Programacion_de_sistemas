#include "rectangulo.h"

// 1. CONSTRUCTOR: 
// Tiene el mismo nombre de la clase.
// La sintaxis es: Clase::Constructor(parámetros del constructor)
Rectangulo::Rectangulo(float l, float a) {

	// Le pongo un nombre distinto a los parámetros recibidos para evitar líos.
	largo = l;  //Asigno los parámetros recibidos a las propiedades de la clase.
	ancho = a;

}

void Rectangulo::perimetro(){
	float perim; //Me creo una variable que usaré para el cálculo.
	perim = 2 * largo + 2 * ancho;
	printf("El perimetro del rectangulo es %.2f metros.\n",perim);


}

void Rectangulo::area() {

	float are; // Igual que antes, llamo a la variable de manera distinta que el método, para evitar conflictos.
	are = largo * ancho;

	printf("El area del rectangulo es %.2f metros cuadrados\n", are);

}
