#pragma once
#include "cabecera.h"
class Punto
{
private:
	int x, y;

public:
	
	Punto();
	~Punto();


	void setPunto(int, int);
	int getPuntoX();
	int getPuntoY();

};

