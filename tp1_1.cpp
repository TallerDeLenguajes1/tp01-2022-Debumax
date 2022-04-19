#include <iostream>
using namespace std;

int main(){
	cout<<"hola mundo";
	
	int *p;
	int numero=5;
	p=&numero;
	
	cout<<"contenido del puntero: "<<*p<<"\n";
	cout<<"direccion de memoria almacenada por el puntero: "<<p<<"\n";
	cout<<"direccion de memoria almacenada por la variable: "<<&numero<<"\n";
	cout<<"la direccion de memoria del puntero: "<<&p<<"\n";
	cout<<"tamanio de memoria utilizado por la variable: "<<sizeof(numero)<<"\n";
	
	
	return 0;
}
