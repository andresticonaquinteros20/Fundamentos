/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;

int main()
{
    float diametro;
    double pi, volumen, radio, area;
    cout<<"Ingrese el diametro de la esfera :"<<endl;
    cin>>diametro;
    radio=diametro/2;
    area=4*3.1416*radio*radio;
    cout<<"El área es :"<<area<<endl;
    volumen=3.1416*radio*radio*radio*(4/3.0);
    cout<<"el volumen es :"<<volumen<<endl;
    
    

    return 0;
}
