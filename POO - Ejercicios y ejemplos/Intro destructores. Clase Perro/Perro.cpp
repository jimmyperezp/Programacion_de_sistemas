#include "Perro.h"

//CREACI�N DEL DESTRUCTOR
Perro::~Perro() {

}

//Ahora creo el constructor como siempre

Perro::Perro(string nom, string raz) {
	nombre = nom;
	raza = raz;
}


void Perro::mostrarDatos() {
	printf("la raza de %s es %c\n", nombre , raza);
}

void Perro::jugar() {
	printf("El perro de nombre %s esta jugando\n", nombre);
}

