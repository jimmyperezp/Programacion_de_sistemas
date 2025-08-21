// MOTOR.CPP

#include "Motor.h"

Motor::Motor(int _cil) {
	cilindrada = _cil;
}

Motor :: ~Motor() {}

int Motor::getCilindrada() {
	return cilindrada;
}

void Motor::setCilindrada(int _cil) {
	cilindrada = _cil;
}