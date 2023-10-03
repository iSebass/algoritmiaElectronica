#include <iostream>

using namespace std;

int n1, n2, n3,n4, mayor;

int main(void){
	
	cout<<"N1: "; cin>>n1;
	cout<<"N2: "; cin>>n2;
	cout<<"N3: "; cin>>n3;
	cout<<"N4: "; cin>>n4;
	
	mayor = max( max(n3,n4), max(n1,n2) );
	
	cout<<"El mayor es: "<<mayor<<endl;
	
	return 0;
}
