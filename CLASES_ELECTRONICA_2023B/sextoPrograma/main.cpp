/*
	Diseñe un programa que lea 
	N cantidada de numeros hasta queue
	el usuario digite un cero.
	Al final determine cuantos de los numeros
    fueron pares.
*/
#include <iostream>
using namespace std;

int counter=0, n;

int main(){
	cout<<"N: ";
	cin>>n;
	while( n != 0){
		if( n%2 ==0){
			counter = counter+1;
		}
		cout<<"N: ";
		cin>>n;
	}
	cout<<"Cnatidad de pares es: "<<counter;
	return  0;
}
