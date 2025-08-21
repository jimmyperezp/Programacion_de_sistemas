// TARJETA_GOLD.H

#pragma once
#include "cabecera.h"

class Tarjeta_Gold{

private:
	int numerogold;
	int caducidad;

public:
	Tarjeta_Gold(int, int);

	void setNumeroGold(int);
	void setCad(int);

	void getCaducidad();
	void getNumeroGold();
};

