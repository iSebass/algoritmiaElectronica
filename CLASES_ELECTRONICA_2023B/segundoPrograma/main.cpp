/*
	Dise�e un programa que determine
	cual es el mayor de 3 numeros
*/

#include <iostream>

using namespace std;

int n1,n2,n3, mayor;

int main(void){
	
	cout<<"N1: "; cin>>n1;
	cout<<"N2: "; cin>>n2;
	cout<<"N3: "; cin>>n3;
	
	mayor = n1;
	if(n2>mayor){
		mayor = n2;
	}
	if(n3>mayor){
		mayor = n3;
	}
	cout<<"El numero mayor es: "<<mayor<<endl;
	
	return 0; 
}
