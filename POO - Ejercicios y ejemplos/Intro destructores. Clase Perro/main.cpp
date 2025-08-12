#include "Perro.h"

int main() {
	
	Perro dune( "dune" , "caniche" );
	dune.jugar();
	dune.~Perro(); //Así elimino el objeto.
	dune.mostrarDatos();//Perro de nombre 1 y raza 2
	system("pause");
	return 0;

}