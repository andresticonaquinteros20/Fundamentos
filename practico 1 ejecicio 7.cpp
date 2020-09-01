/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
#include "conio.h"
#include <math.h>
#include <string.h>

using namespace std;

int main()
{
    float m, c, r, n;
cout << "Calculador de interes compuesto" << endl;
cout << "Ingrese el capital inicial :";
cin >> c;
cout << "Ingrese la tasa de interes en porcentaje:";
cin >> r;
cout << "Ingrese el tiempo del prestamo :";
cin >> n;
m = (pow((1 + r), n)) * c;
cout << "El monto Obtenido despues de " << n << " anhos es :" << m;
    return 0;
}
