#include <iostream>
using namespace std;
int main (){
	int limite;

	cout << "Programa que hace un contador desde el 1 hasta otro numero ingresado \n";
	cout << "Ingresa el numero hasta el que va a contar \n";
	cin >> limite;

	for (int i = 1; i <= limite; i++){
		cout << i << endl;
	}

	return 0;
}