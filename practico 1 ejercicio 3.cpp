/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;

int main()
{
    
    float primerparcial, segundoparcial, tercerparcial, ponderacionparciales, examenfinal, proyectofinal, notafinal;
 cout<<"ingrese la nota del primer parcial :"<<endl;
 cin>>primerparcial;
 cout<<"ingrese la nota del segundo parcial :"<<endl;
 cin>>segundoparcial;
 cout<<"ingrese la nota del 3er parcial :"<<endl;
 cin>>tercerparcial;
 ponderacionparciales=((primerparcial+segundoparcial+tercerparcial)/3)*0.4;
 cout<<"ingrese la nota del examen final :"<<endl;
 cin>>examenfinal;
 cout<<"ingrese la nota del proyecto final :"<<endl;
 cin>>proyectofinal;
 notafinal=ponderacionparciales+(examenfinal*0.4)+(proyectofinal*0.2);
 cout<<"La nota final es :"<<notafinal;
 
 

    return 0;
}
