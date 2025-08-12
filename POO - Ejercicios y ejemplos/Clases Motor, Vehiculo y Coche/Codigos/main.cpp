//MAIN.CPP

#include "Vehiculo.h"
#include "Motor.h"
#include "Coche.h"

int main() {
	 
	/*	Coche ejemplo(20, "fiat", "freemont", "20359 HMZ", 500);

	ejemplo.getMatricula();
	ejemplo.getNumSerie();	*/ 


	Coche coches[4] = {
		Coche(1 , "Fiat" , "500" , "2017 DHL" , 250),
		Coche(2 , "ASTON MARTIN", "DEL NANO", "0033 FA" , 367),
		Coche(4, "SEAT" , "LEON" , "5687 FDK" , 100),
		Coche(5, "Audi" , "A1" , "2603 JPP" , 518)
	};

	for (int i = 0; i < 4; i++) {
		
		if (coches[i].obtenerMotor().getCilindrada() > 200) {
			
			coches[i].getMatricula();
			cout << "y su cilindrada es " << coches[i].obtenerMotor().getCilindrada() << endl;

		}
	}

	system("pause");
	return 0;

}