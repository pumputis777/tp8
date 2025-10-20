#include <iostream>

using namespace std;

int main()
{
	int cantidad;
	int suma_total = 0;
	float promedio = 0;
	cout << "Este programa suma numeros enteros" << endl;
	cout << "Ingrese la cantidad de numeros que quiere ingresar: ";
	cin >> cantidad;
	cout << endl;
	for(int i = 0; i < cantidad; i++)
	{
		int vector[i];
		cout << "Ingrese el numero: ";
		cin >> vector[i];
		suma_total = suma_total + vector[i];
	}
	cout << endl;
	promedio = suma_total / cantidad;
	cout << "La suma total de los numeros es de: " << suma_total << endl;
	cout << "El promedio total de los numeros es de: " << promedio;
	return 0;
}