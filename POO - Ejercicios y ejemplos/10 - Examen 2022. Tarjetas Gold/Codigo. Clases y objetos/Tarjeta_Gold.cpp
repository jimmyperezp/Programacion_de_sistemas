// TARJETA_GOLD.CPP

#include "Tarjeta_Gold.h"

Tarjeta_Gold::Tarjeta_Gold(int _numg, int _cad) {
	numerogold = _numg;
	caducidad = _cad;

}

void Tarjeta_Gold::setNumeroGold(int _numg) {
	numerogold = _numg;

}

void Tarjeta_Gold::setCad(int _cad) {
	caducidad = _cad;

}
void Tarjeta_Gold::getNumeroGold() {
	cout << "El numero de la tarjeta gold es: " << numerogold << endl;
}
void Tarjeta_Gold::getCaducidad() {

	cout << "La fecha de caducidad de la tarjeta Gold es: " << caducidad << endl;

}