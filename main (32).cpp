#include <iostream>

using namespace std;

int main()
{
	float minimo;
	float maximo;
	float numero = 0;
	cout << "Este programa indica el numero mayor y minimo de 10 caracteres" << endl;
	cout << "Ingrese el numero: ";
	cin >> numero;
	minimo = numero;
	maximo = numero;
	for(int i = 0; i < 9; i++)
	{
		int vector[i];
		cout << "Ingrese el numero: ";
		cin >> vector[i];
		if(maximo < vector[i])
		{
			maximo = vector[i];
		}
		if(minimo > vector[i])
		{
			minimo = vector[i];
		}
	}
	cout << endl;
	cout << "El numero maximo es de: " << maximo << endl;
	cout << "El numero minimo es de: " << minimo;
	return 0;
}