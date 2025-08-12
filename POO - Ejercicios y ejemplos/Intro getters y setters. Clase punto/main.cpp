#include "Punto.h"

int main() {

	Punto punto1;

	punto1.setPunto(15, 10); //acabo de darle valores a x e y desde el main
	printf(" El valor de la coordenada x es %d\n", punto1.getPuntoX());
	printf("El valor de la coordenada y es %d\n", punto1.getPuntoY());

	punto1.~Punto();

	system("pause");
	return 0;
}