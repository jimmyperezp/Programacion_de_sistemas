#include "Fecha.h"

Fecha::Fecha(int d, int m, int a) {

	dia  = d;
	mes = m;
	ano = a;

}

Fecha::Fecha(long formalarga) {
	ano = formalarga / 10000;
	mes = ((formalarga - ano * 10000) / 100);
	dia = formalarga - ano*10000-mes*100;

}

void Fecha::mostrarFecha() {
	printf("La fecha es %d / %d / %d \n", dia, mes, ano);
}