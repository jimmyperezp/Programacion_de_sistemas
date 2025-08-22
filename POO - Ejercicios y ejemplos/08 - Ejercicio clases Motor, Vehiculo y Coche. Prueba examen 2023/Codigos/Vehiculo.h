#pragma once
#include "Header.h"
#include "Motor.h"

class Vehiculo{

	private:
		int numserie;
		Motor elMotor;

	protected:
		string marca;
		string modelo;

	public:
		Vehiculo(int, string, string, int);
		~Vehiculo();

		void setNumSerie(int);
		int getNumSerie();
		
		Motor obtenerMotor();

};