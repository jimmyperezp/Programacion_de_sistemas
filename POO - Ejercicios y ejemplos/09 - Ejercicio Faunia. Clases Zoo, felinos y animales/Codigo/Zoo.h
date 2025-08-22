#include "Felinos.h"

class Zoo {
	private:
		string nombre;
		int precio;
		Felinos losFelinos;
	public:
		Zoo(string, int, int, string, string);
	
		Felinos getFelinos();
};
