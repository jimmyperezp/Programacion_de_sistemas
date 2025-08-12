// CLIENTE.CPP

#include "Cliente.h"

Cliente::Cliente(char _nombrecl, int _numcl) {
	nombre = _nombrecl;
	numero = _numcl;
}

void Cliente::getNombre() {
	cout << "El nombre del cliente es: " << nombre << endl;
}