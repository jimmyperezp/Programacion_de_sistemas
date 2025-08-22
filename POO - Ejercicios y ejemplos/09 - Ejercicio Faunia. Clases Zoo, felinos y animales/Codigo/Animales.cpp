// ANIMALES.CPP
#include "Animales.h"

Animales::Animales(string _esp, string _comida) {
	especie = _esp;
	quecome = _comida;
}

void Animales::mostrarQueCome() {
	cout << "El animal es un " << especie;
	cout << " , come " << quecome;
}
