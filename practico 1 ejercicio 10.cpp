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
    int hi, hf, hd, mi, mf, md, si, sd, sf;
	string x, y, z;
	cout << "Ingrese la hora inicial en formato de 24 horas. " << endl;
	cout << "Ingrese la hora :";
	cin >> hi;
	cout << "Ingrese los minutos :";
	cin >> mi;
	cout << "Ingrese los segundos :";
	cin >> si;
	cout << "Ingrese la hora final en formato de 24 horas." << endl;
	cout << "Ingrese la hora :";
	cin >> hf;
	cout << "Ingrese los minutos :";
	cin >> mf;
	cout << "Ingrese los segundos :";
	cin >> sf;

	hd = hf - hi;
	md = mf - mi;
	sd = sf - si;
	if (hd > 1) { x = "horas"; }
	else { x = "hora"; }
	if (md > 1) { y = "minutos"; }
	else { y = "minuto"; }
	if (sd > 1) { z = "segundos"; }
	else { z = "segundo"; }
	cout << "La diferencia de tiempo es de :" << hd << " " << x << " , " << md << " " << y << " , " << sd << " " << " Segundos";

    return 0;
}
