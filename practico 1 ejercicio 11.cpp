/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;

int main()
{
    float p,c;
	cout << "Ingrese el peso en gramos de su carta :";
	cin >> p;
	if (p > 0 & p <= 50) {
		c = 1.5;
		cout << "El precio de envio por esta carta es de 1.5Bs";
	}
	if (p > 50 & p <= 100) { 
		c = 4; 
	    cout << "El precio de envio por esta carta es de 4Bs";}
	if (p > 100 & p <= 200){c = 6;	
	cout << "El precio de envio por esta carta es de 6Bs";}
	if (p > 200 & p <= 350){
		c = 10.5;
		cout << "El precio de envio por esta carta es de 10.5Bs";}
	if (p > 350 & p <= 500) {
		c = 15;
		cout << "El precio de envio por esta carta es de 15Bs";}
	if (p > 500) { cout << "No se puede enviar como carta"; }

    return 0;
}
