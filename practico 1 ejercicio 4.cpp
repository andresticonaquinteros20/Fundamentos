/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;

int main()
{
    float Horas, Precio, Salario, Sueldo;  
string Nombre;
cout<<"Introduzca el nombre :"<<endl;;
cin>>Nombre;
if (Nombre=="Mauricio")
{Precio=500;
cout<<"Introduzca Horas trabajadas:";
cin>>Horas;
if (Precio*Horas>=8272){Salario=Precio*Horas-(Precio*Horas*0.13);
cout<<"El Salario es :"<<Salario;
}
else {Salario=Precio*Horas;
cout<<"El Salario es :"<<Salario;}}
else {if (Nombre=="Marta"){Precio=600;
cout<<"Introduzca Horas trabajadas:";
cin>>Horas;
if (Precio*Horas>=8272){Salario=Precio*Horas-(Precio*Horas*0.13);
cout<<"El Salario es :"<<Salario;}
else {Salario=Precio*Horas;
cout<<"El Salario es :"<<Salario;}}
else{
cout<<"Introduzca nombre Valido";}}

    return 0;
}
