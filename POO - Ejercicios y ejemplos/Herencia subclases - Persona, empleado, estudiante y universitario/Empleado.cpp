#include "Empleado.h"

Empleado::Empleado(string _inicial, int _edad, int _codigopuesto):Persona (_inicial, _edad) {
	codigopuestotrabajo = _codigopuesto;
}

Empleado::~Empleado () {}

void Empleado::mostrarEmpleado() {
	mostrarPersona();

	printf("El codigo del puesto de trabajo del empleado es %d\n", codigopuestotrabajo);

}