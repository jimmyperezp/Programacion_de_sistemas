//MOTOR.H 
#pragma once

class Motor{

	private:
		int cilindrada;

	public:
		Motor(int);
		~Motor();

		int getCilindrada();
		void setCilindrada(int);

};

