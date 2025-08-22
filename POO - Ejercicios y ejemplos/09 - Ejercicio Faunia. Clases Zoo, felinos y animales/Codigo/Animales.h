#include "cabecera.h"
#pragma once

class Animales {
	private:
		string especie;
	protected:
		string quecome;
	public:
		Animales(string, string);
		void mostrarQueCome();
};
