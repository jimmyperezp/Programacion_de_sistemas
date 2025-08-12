// CLIENTE_VIP.H

#pragma once
#include "Tarjeta_Gold.h"
#include "Cliente.h"

class Cliente_VIP: public Cliente
{

private:
	int Numero_VIP;
	Tarjeta_Gold *miTarjeta;

public:
	Cliente_VIP(char, int, int,int, int);

	~Cliente_VIP();

	int getNumTarjeta();
	int getFechaTarjeta();

	Tarjeta_Gold getTarjeta();


};

