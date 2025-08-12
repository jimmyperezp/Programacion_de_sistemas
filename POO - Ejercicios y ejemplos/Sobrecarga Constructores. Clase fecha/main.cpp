
#include "Fecha.h"

using namespace std;

int main() {

	Fecha hoy(4, 7, 2023);
	Fecha ayer(20230703);
	/*Creo dos objetos tipo fecha distintos, uno usando el constructor con los
	parámetros por separado (hoy) y otro pasando un unico entero largo, ayer,
	con la fecha escrita entera y con el formato añomesdia*/ 

	hoy.mostrarFecha();
	ayer.mostrarFecha();

	system("pause");
	return 0;

}