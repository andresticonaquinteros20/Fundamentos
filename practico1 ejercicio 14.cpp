/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
#include "conio.h"

using namespace std;

int main()
{
    int h, hq, p, opcion;
	float s, t;
	cout << "------------Menu---------------" << endl;
	cout << "1.- Hamburguesa simple (3Bs)" << endl;
	cout << "2.- Hamburguesa con queso (5Bs)" << endl;
	cout << "3.- Papas fritas (2Bs)" << endl;
	cout << "4.- Soda (2.5Bs)" << endl;
	cout << "5.- Salir"<<endl;
	cout << "Ingrese una opcion :";

	cin >> opcion;
	switch (opcion) {
	case 1 : cout<<"Ingrese la cantidad :";
		cin >> h;
		t = h * 3;
		cout << "La cuenta es :" << t << " Bs ";
		break;
	case 2: cout << "Ingrese la cantidad :";
		cin >> hq;
		t = hq * 5;
		cout << "La cuenta es :" << t << " Bs ";
		break;
	case 3: cout << "Ingrese la cantidad :";
		cin >> p;
		t = p * 2;
		cout << "La cuenta es :" << t << " Bs ";
		break;
	case 4: cout << "Ingrese la cantidad :";
		cin >> s;
		t = s * 2.5;
		cout << "La cuenta es :" << t << " Bs ";
		break;
	case 5: cout <<"Gracias por su visita!";
		break;


    return 0;
}
