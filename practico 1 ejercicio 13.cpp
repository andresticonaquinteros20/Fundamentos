/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
#include "conio.h"
#include <math.h>

using namespace std;

int main()
{
    float a, b, c, x1, x2, x3, x, xr, d, xi;
	cout << "Calculo de la ecuacion cuadratica" << endl;
	cout << "Ingresar a: ";
	cin >> a;
	cout << "Ingresar b: ";
	cin >>b;
	cout << "Ingresar c: ";
	cin >> c;
	if (a != 0)// Es diferente
	{
		d = pow(b, 2) - 4 * a * c;
		if (d == 0)
			cout << "Solucion unica: " << -b / 2 * a;
		else
			if (d > 0)
			{
				x1 = (-b + sqrt(d)) / (2 * a);
				x2 = (-b - sqrt(d)) / (2 * a);
				cout << "Soluciones reales : x1=" << x1 << " x2=" << x2;
			}
			else
			{
				xr = -b / (2 * a);
				xi = sqrt(-d) / (2 * a);
				cout << "Soluciones imaginarias: " << endl;
				cout << "x1= " << xr << " + " << xi << "i";
				cout << "x2= " << xr << " - " << xi << "i";
			}
	}
	else {
		cout << "No tiene Solución";

    return 0;
}
