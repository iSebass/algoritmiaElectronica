/*
	diseñe un programa 
	que calcule la suma de dos numeros
*/

#include <iostream>

using namespace std;

int num1, num2;
float result;

int main(){
	cout<<"Digite el valor de N1: ";
	cin>>num1;
	cout<<"Digite el valor de N2: ";
	cin>>num2;
	result = num1+num2;
	cout<<"El resultado de la suma es: "<<result<<endl;
	
	result = num1-num2;
	cout<<"El resultado de la resta es: "<<result<<endl;
	
	result = num1*num2;
	cout<<"El resultado de la multiplicacion es: "<<result<<endl;
	
	result = (float)(num1)/num2;
	cout<<"El resultado de la division es: "<<result<<endl;
	
	return 0;
}
