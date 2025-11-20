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
float promedio = 0;
	float suma_total = 0;
	int mayor_al_promedio = 0;
	int ca[4];
	cout << "Este programa ve las alturas de las personas" << endl;
	cout << endl;
	for(int i = 0; i < 5; i++)
	{
		cout << "Ingrese la altura (en centimetros): ";
		cin >> ca[i];
		suma_total = suma_total + ca[i];
	}
	cout << endl;
	promedio = suma_total / 5;
	for(int l; l < 5; l++)
	{
		if(ca[l] > promedio)
		{
			mayor_al_promedio = mayor_al_promedio + 1;
		}
	}
	cout << "El promedio total de las alturas es de: " << promedio << " centimetros" << endl;
	cout << "Las personas con una altura mayor al promedio es de: " << mayor_al_promedio;
	return 0;

}