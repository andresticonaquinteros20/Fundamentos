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
    float a, b, c, d, e, f, x, y;
	cout << "Calculo de sistema de ecuaciones de 1.{ax+by=c} y {dx+ey=f}" << endl;
	cout << "Ingresar valor del coeficiente a :";
	cin >> a;
	cout << "Ingresar valor del coeficiente b :";
	cin >> b;
	cout << "Ingresar valor del coeficiente c :";
	cin >> c;
	cout << "Ingresar valor del coeficiente d :";
	cin >> d;
	cout << "Ingresar valor del coeficiente e :";
	cin >> e;
	cout << "Ingresar valor del coeficiente f :";
	cin >> f;
	y = (f - d * c) / (f + (d * b) / a);
	x = (c - (b * y)) / a;
	cout << "el valor de x es :" << x << endl;
	cout << "El valor de y es :" << y << endl;

    return 0;
}
