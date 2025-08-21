#include "Punto.h"

int main() {

	Punto punto1; //Creo un objeto de clase Punto, pero no le paso nada al constructor.

	punto1.setPunto(15, 10); //le doy valores usando el set.

	//Y puedo mostrar los valores usando los métodos get:
	printf(" El valor de la coordenada x es %d\n", punto1.getPuntoX());
	printf("El valor de la coordenada y es %d\n", punto1.getPuntoY());

	punto1.~Punto(); //Una vez he terminado, "destruyo" el objeto.

	system("pause");
	return 0;
}
