#include "Persona.cpp"
#include <iostream>

using namespace std;
class Propietario : Persona{
					private: string nit;
					private: double cui; 
					
					
				public : 	
			Propietario(string nom, string ape, string dir, string f, int tel, string n, double c) : Persona(nom,ape,dir,f,tel){
				
				nit=n;
				cui=c;
			}

	// set (modificar)
	void setNit(string n){	nit = n;}
	void setCui(double c){ cui=c;}
	void setNombres(string nom){	nombres = nom;}
	void setApellidos(string ape){	apellidos = ape;}
	void setDireccion(string dir){	direccion = dir;}
	void setTelefono(int tel){	telefono = tel;}
	void setFN(string f){	fn = f;}
	// get (mostrar)
	string getNit(){return nit;}
	double getCui(){return cui;}
	string getNombres(){return nombres;}
	string getApellidos(){return apellidos;}
	string getDireccion(){return direccion;}
	string getFN(){return fn;}
	int getTelefono(){return telefono;}
				
		void mostrar(){
		cout<<"----------Metodo mostrar------------"<<endl;
		cout<<"Nit:  "<<nit<<endl;
		cout<<"Cui:  "<<cui<<endl;
		cout<<"Nombres: "<<nombres<<endl;
		cout<<"Apellidos:  "<<apellidos<<endl;
		cout<<"Direccion: "<<direccion<<endl;
		cout<<"Telefono: "<<telefono<<endl;
		cout<<"Fecha Nacimiento: "<<fn<<endl;
	}
};

