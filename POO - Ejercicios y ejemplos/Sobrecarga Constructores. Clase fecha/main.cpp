#include "cabecera.h" // Aquí están las librerías
#include "Fecha.h" // Aquí está la clase con sus métodos. 
using namespace std;

int main() {

	Fecha hoy(4, 7, 2023); //Opción 1 --> Le mando los parámetros separados.
	Fecha ayer(20230703); // Opción 2 --> Mando un único número: AAAA/MM/DD
	
	/*Además, he usado la sintaxis del cosntructor directamente. También hubiera
 	sido válido declararlo como: 
  	Fecha hoy = Fecha(4,7,2023)*/

	hoy.mostrarFecha();
	ayer.mostrarFecha();

	system("pause");
	return 0;
}
