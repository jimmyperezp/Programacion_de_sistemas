#pragma once
//MOTOR.H 

class Motor
{
private:
	int cilindrada;

public:
	Motor(int);
	~Motor();

	int getCilindrada();
	void setCilindrada(int);

};

