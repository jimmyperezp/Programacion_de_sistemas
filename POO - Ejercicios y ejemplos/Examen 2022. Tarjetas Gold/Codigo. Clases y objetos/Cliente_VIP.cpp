//CLIENTE_VIP.CPP

#include "Cliente_VIP.h"

Cliente_VIP::Cliente_VIP (char _nombre, int _numero,int _numvip , int _numg, int _cad) :Cliente(_nombre, _numero){
	
	miTarjeta = (Tarjeta_Gold*)malloc(sizeof(Tarjeta_Gold));

	miTarjeta->setNumeroGold(_numg);
	miTarjeta->setCad(_cad);

	//Tarjeta_Gold miTarjeta (_numg, _cad);
	//miTarjeta.setCad(_cad);
	//miTarjeta.setNumeroGold(_numg);

	Numero_VIP = _numvip;
}


Cliente_VIP::~Cliente_VIP() {
	delete miTarjeta;
}

Tarjeta_Gold Cliente_VIP::getTarjeta() {
	return *miTarjeta;
}
