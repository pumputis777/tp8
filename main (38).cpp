/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
#include <string>
using namespace std;

int main()
{
int cantidad;
	int val[cantidad];
	int cantidad2;
	int hola =  0;
	cout << "Este programa hace cosas" << endl;
	cout << endl;
	cout << "Ingrese la cantidad de numeros a poner: ";
	cin >> cantidad;
	for(int i = 0; i < cantidad; i++)
	{
		cout << "Ingrese el numero: ";
		cin >> val[i];
	}
	for(int j = 0; j < cantidad; j++)
	{
		val[j] = val[j] * 2;
	}
	cout << "Ingrese una posicion del vector para reemplazar un valor (del 0 al " << cantidad - 1 << "): ";
	cin >> cantidad2;
	cout << "Y ahora ingrese el nuevo valor a reemplazar: ";
	cin >> val[cantidad2];
	val[cantidad2] = val[cantidad2] * 2;
	cout << "Y estos son los valores del vector en orden: ";
	for(int k = 0; k < cantidad; k++)
	{
		cout << val[k] << " ";
		if(val[k] == 0)
		{
			k++;
			hola = hola + 1;
		}
	}
	cout << endl << "Se detectaron: " << hola << " datos con un valor de cero" << endl;
	return 0;
}