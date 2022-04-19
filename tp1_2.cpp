#include <iostream>
using namespace std;

void invertir(int &a,int &b);
int main(){
	int a,b;
	cout<<"ingrese el valor de a: ";
	cin>>a;
	cout<<"ingrese el valor de b: ";
	cin>>b;
	invertir(a,b);
	cout<<"valores de a y b respectivamente: "<<a<<" y "<<b;


	
	return 0;
}


void invertir(int &a,int &b){
	int ab;
	ab=a;
	a=b;
	b=ab;
	cout<<"valores de a y b respectivamente: "<<a<<" y "<<b;
}
