#include <iostream>
#include <locale.h>

using namespace std;

int valorInicial, valorFinal;

int main(void){
	
	do{
		system("cls");
		cout<<"Ingrese su numero 1: ";
		cin>> valorInicial;
		
		cout<<"Ingrese su numero 2: ";
		cin>> valorFinal;
		
		if( valorInicial >= valorFinal ){
			cout<<"Reviar la entrada de datos"<<endl;
			cout<<"El valor Inicial debe ser menor que el valor Final"<<endl;
			system("pause");
			
		}
		
	}while( valorInicial >= valorFinal);
	
	for( int i = valorInicial; i<=valorFinal; i += 1){
		cout<<i<<" ";
	}
	
	
	return 0;
}
