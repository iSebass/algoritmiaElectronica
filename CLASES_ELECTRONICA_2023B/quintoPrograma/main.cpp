/*
	Concepto acumuladores
*/

#include <iostream>

using namespace std;

int presupuesto = 500;
int vA1, vA2, vA3;
int saldo;

int main(){
	
	cout<<"Digite el valor Articulo 1: ";
	cin>>vA1;
	
	cout<<"Digite el valor Articulo 2: ";
	cin>>vA2;

	cout<<"Digite el valor Articulo 3: ";
	cin>>vA3;
	
	if( vA1>presupuesto){
		cout<<"No te alcanza para comprar este articulo 1"<<endl;
	}
	else{
		presupuesto = presupuesto - vA1;
	}
	
	if( vA2>presupuesto){
		cout<<"No te alcanza para comprar este articulo 2"<<endl;
	}
	else{
		presupuesto = presupuesto - vA2;
	}
	
	if( vA3>presupuesto){
		cout<<"No te alcanza para comprar este articulo 3"<<endl;
	}
	else{
		presupuesto = presupuesto - vA3;
	}
	
	cout<<"Tu presupuesto actual es: "<<presupuesto<<endl;
	
	
	return 0;
}
