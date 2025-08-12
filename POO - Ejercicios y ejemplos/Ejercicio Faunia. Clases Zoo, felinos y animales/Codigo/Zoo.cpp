#include "Zoo.h"

Zoo::Zoo(string _nombre, int _precio, int _velmax, string _esp, string _comida) :losFelinos(_velmax, _esp, _comida) {
	nombre = _nombre;
	precio = _precio;
}

Felinos Zoo::getFelinos() {
	return losFelinos;
}