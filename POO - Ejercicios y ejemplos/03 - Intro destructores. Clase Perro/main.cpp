#include "Perro.h"

int main() {
	
	Perro dune( "dune" , "caniche" );

	dune.jugar();
	dune.mostrarDatos(); //muestra el nombre y raza.

	dune.~Perro(); 	//Así elimino el objeto.
	
	system("pause");
	return 0;

}