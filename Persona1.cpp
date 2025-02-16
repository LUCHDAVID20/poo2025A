#include <iostream>

using namespace std;

//nombre de la clase

class Persona1{
	protected :
	string nombres,apellidos, direccion, fechaNaciento;
	int telefono;
	
	protected :
	Persona(){
	// constructor vacio
}
Persona1(string nom,string ape,string dire, string fn, int t ){
	nombres= nom;
	apellidos = ape;
	direccion= dire;
	fechaNaciento = fn; 
	telefono= t;
	
}

void crear();
void leer(){
	cout << "nombres: "<< nombres << endl;
	cout << "apellidos: "<< apellidos << endl;
	cout << "direccion: "<< direccion << endl;
	cout << "fechaNaciento: "<< fechaNaciento << endl;
	cout << "telefono: "<< telefono << endl;

}
void actualizar();
void eliminar();
};
