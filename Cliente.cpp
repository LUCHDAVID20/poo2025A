#include <Persona1.cpp>
#include <iostream>

using namespace std;

class Cliente : Persona1 {
	private :
		string nit;
		
		public :
			Cliente (string nom,string ape,string dire, string fn,string n, int t ) : Persona1( nom, ape, dire,  fn, t){
			nit = n
			
			}
			
	void leer(){
	cout << "nit: "<< nit << endl;
	cout << "nombres: "<< nombres << endl;
	cout << "apellidos: "<< apellidos << endl;
	cout << "direccion: "<< direccion << endl;
	cout << "fechaNaciento: "<< fechaNaciento << endl;
	cout << "telefono: "<< telefono << endl;

}
};
