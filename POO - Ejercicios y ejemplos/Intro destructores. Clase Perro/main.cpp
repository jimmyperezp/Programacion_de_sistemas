#include "Perro.h"

int main() {
	
	Perro dune( "dune" , "caniche" );

	dune.jugar();
	dune.mostrarDatos(); //Perro de nombre 1 y raza 2

	dune.~Perro(); 	//Así elimino el objeto.
	
	system("pause");
	return 0;

}
