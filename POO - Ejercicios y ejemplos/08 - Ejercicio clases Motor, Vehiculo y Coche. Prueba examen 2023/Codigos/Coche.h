#pragma once

//COCHE.H 

#include "Vehiculo.h"

class Coche : public Vehiculo 
{
private:
	string matricula;

public:
	Coche(int, string, string,  string, int);
	~Coche();

	void getMatricula();

};

