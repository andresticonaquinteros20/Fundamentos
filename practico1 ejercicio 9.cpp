/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
#include <string.h>

using namespace std;

int main()
{
    string x, y, z;
	int h, m, s;
	float t;
	cout << "Ingrese los segundos que desea convertir :";
	cin >> t;
	h = t / 3600;
	m = (t - (h * 3600)) / 60;
	s = t - (h * 3600) - (m * 60);
	if (h > 1) { x = "horas"; }
	else { x = "hora"; }
	if (m > 1) { y = "minutos"; }
	else { y = "minuto"; }
	if (s > 1) { z = "segundos"; }
	else { z = "segundo"; }

	cout << "El tiempo convertido en horas, minutos y segundos es :" << h << " " << x <<" , " << m <<" "<<y <<" , "<< s << " "<< " Segundos";

    return 0;
}
