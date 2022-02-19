#include <iostream>
using namespace std;

class Persona{
	//atributos 
	protected : string nombres, apellidos, direccion, fn;
				int telefono;
				
				//constructor
	
	Persona(string nom, string ape, string dir, string f, int tel){
		nombres = nom;
		apellidos = ape;
		direccion=dir;
		fn=f;
		telefono=tel;
	}
	
	protected:
	
	//Metodos
	
	void mostrar();
	void agregar ();
};
