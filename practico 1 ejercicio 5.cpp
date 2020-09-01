/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;

int main()
{
    float interes, tiempo, capital, ganancia;
	cout<< "Ingrese el capital inicial :";
	cin >> capital;
	cout << "Ingrese el interes anual :";
	cin >> interes;
	cout << "Ingrese el tiempo :";
	cin >> tiempo;
	ganancia=(capital*interes)*tiempo;
	cout << "La ganancia total es :"<<ganancia;

    return 0;
}
