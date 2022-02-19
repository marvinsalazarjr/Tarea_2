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

