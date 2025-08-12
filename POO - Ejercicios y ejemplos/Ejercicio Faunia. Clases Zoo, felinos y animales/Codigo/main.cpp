#include "Animales.h"
#include "Zoo.h"
#include "Felinos.h"


int main() {

	Zoo felinos[3] = {
		/*Como ya vi en el constructor de Zoo, los parametros
		que debo enviar son, en este orden:
		nombre , precio, velocidad Maxima, especie, comida */

		Zoo("faunia",30,90,"tigre","Cebras"),
		Zoo("faunia",30,80,"leon","antilopes"),
		Zoo("faunia",30,110,"jaguar","gacelas"),

	};

	for (int i = 0; i < 3; i++) {
		if (felinos[i].getFelinos().getVelocidadMax() > 85) {

			felinos[i].getFelinos().mostrarQueCome();
			cout << " y corre a una velocidad de: " << felinos[i].getFelinos().getVelocidadMax() << " Km/h.\n" << endl;
		}
	}
	system("pause");
	return 0;

}