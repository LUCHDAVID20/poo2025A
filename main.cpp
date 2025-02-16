#include <iostream>
#include "Cliente.cpp"
using namespace std;

main() {
	string nombres,apellidos, direccion, fechaNaciento , nit;
	int telefono=0;
	cout << "Ingrese un nombre: " << endl;
	cin >> nombres;
	cout << "Ingrese apellidos : " << endl;
	cin >> apellidos;
	cout << "Ingrese un nit: " << endl;
	cin >> nit;
	cout << "Ingrese un direccion: " << endl;
	cin >> direccion;
	cout << "Ingrese un fecha de Naciento: " << endl;
	cin >> fechaNaciento;
	cout << "Ingrese un telefono: " << endl;
	cin >> telefono;
	
	// instanciar 
	
	Cliente cliente = Cliente(nit,nombres,apellidos, direccion, fechaNaciento, telefono);
	cliente.leer();
}
