#include "Felinos.h"

Felinos::Felinos(int _velmax, string _esp, string _comida) :Animales(_esp, _comida) {
	velMax = _velmax;
}

int	Felinos::getVelocidadMax() {
	return velMax;
}
