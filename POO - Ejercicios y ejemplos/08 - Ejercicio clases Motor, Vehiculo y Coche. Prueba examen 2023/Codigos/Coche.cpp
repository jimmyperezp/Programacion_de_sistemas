//COCHE.CPP 
#include "Coche.h"
#include "Vehiculo.h"

Coche::Coche(int _numserie ,  string marc, string modelo ,string _matricula, int _cil) : Vehiculo (_numserie
,  marc,  modelo, _cil) {

	matricula = _matricula;
}

Coche :: ~Coche() {}

void Coche::getMatricula() {

	cout << "La matricula del coche es: " << matricula << endl;
}