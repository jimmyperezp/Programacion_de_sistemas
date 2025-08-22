#include "Fecha.h" // Dentro de este archivo, ya está incluida la "cabecera.h".
// Ahí (en cabecera.h) es donde estan las librerías necesarias.
using namespace std;

int main() {

	Fecha hoy(4, 7, 2023); //Opción 1 --> Le mando los parámetros separados.
	Fecha ayer(20230703); // Opción 2 --> Mando un único número: AAAA/MM/DD
	
	/*Además, he usado la sintaxis del cosntructor directamente. También hubiera sido válido declararlo como: 
  	Fecha hoy = Fecha(4,7,2023)*/

	hoy.mostrarFecha();
	ayer.mostrarFecha();

	system("pause");
	return 0;
}
