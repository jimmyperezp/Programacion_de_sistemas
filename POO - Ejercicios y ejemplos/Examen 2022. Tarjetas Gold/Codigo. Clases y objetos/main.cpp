// MAIN.CPP

#include "Tarjeta_Gold.h"
#include "Cliente.h"
#include "Cliente_VIP.h"

int main() {

	Cliente_VIP clientesVIP[3] = {
		Cliente_VIP( 'A' ,1, 11,111,1111 ),
		Cliente_VIP('B',2,22,222,2222),
		Cliente_VIP('C',3,33,333,3333),
	};

	for (int i = 0; i < 3; i++) {
		cout << "Cliente Numero " << i+1 << "\n" << endl;
		clientesVIP[i].getNombre();
		clientesVIP[i].getTarjeta().getNumeroGold();
		clientesVIP[i].getTarjeta().getCaducidad();
		cout << "\n";
	}
	system("pause");
	return 0;

}