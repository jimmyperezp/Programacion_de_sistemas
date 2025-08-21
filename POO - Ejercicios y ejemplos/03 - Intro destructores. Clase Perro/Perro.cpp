#include "Perro.h"

//CREACIÓN DEL DESTRUCTOR
Perro::~Perro() {
}
// El destructor va vacío. Simplemente hay que incluirlo. 

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
