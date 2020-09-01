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
    float h, t, m, s;
	cout << "Ingresar Horas :";
	cin >> h;
	cout << "Ingresar minutos :";
	cin >> m;
	cout << "Ingresar segundos :";
	cin >> s;
	if (h < 1 ) {
		t = h + 12;
		cout << "El tiempo en formato de 12 horas es :" << t << ":" << m << ":" << s << "am";
	}
	if (h > 1 & h < 12) {
		t = h;
		cout << "El tiempo en formato de 12 horas es :" << t << ":"<<m<<":"<<s<<"am";
	}
	if(h>=12&h<13){
		t = h;
		cout << "El tiempo en formato de 12 horas es :" << t << ":" << m << ":" << s << "pm";
	}
	if (h >= 13 & h < 24) {
		t = h - 12;
		cout << "El tiempo en formato de 12 horas es :" << t << ":" << m << ":" << s << "pm";
		

    return 0;
}
