#include <iostream>
using namespace std;
float cuadrado(float a);

int main(){
	cout<<"hola mundo";
	
	int *p;
	int numero=5;
	p=&numero;
	
	/*cout<<"contenido del puntero: "<<*p<<"\n";
	cout<<"direccion de memoria almacenada por el puntero: "<<p<<"\n";
	cout<<"direccion de memoria almacenada por la variable: "<<&numero<<"\n";
	cout<<"la direccion de memoria del puntero: "<<&p<<"\n";
	cout<<"tamanio de memoria utilizado por la variable: "<<sizeof(numero)<<"\n";*/
	
	cout<<"cuadrado de 5:  "<<cuadrado( numero);
	
	
	return 0;
}

float cuadrado(float a){
	
	return a*a;
}
