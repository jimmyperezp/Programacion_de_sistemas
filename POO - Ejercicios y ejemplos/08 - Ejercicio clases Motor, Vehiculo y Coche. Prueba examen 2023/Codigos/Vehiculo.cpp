// VEHICULO.CPP

#include "Vehiculo.h"

Vehiculo::Vehiculo(int _nums , string marc, string mod, int _cil) : elMotor (_cil) {

	numserie = _nums;
	marca = marc;
	modelo = mod;
}

Vehiculo::~Vehiculo() {}

void Vehiculo::setNumSerie(int _num) {
	numserie = _num;
}

int Vehiculo:: getNumSerie() {
	return numserie;
}

Motor Vehiculo::obtenerMotor() {
	return elMotor;
}
