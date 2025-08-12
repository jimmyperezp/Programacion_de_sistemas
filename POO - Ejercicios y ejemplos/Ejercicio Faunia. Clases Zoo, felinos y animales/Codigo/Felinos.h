#pragma once
#include "Animales.h"


class Felinos : public Animales {
private:
	int velMax;
public:
	Felinos(int, string, string);

	int getVelocidadMax();

};
