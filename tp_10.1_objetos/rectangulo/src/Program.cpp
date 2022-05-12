#include "Program.h"
#include <iostream>
using namespace std;

Program::Program()
{
    //ctor
}

Program::~Program()
{
    delete rectangulo;
    cout << "objeto eliminado";
}

////////////////////////////////////////
void Program::cargardatos()
{
    float altura,base;

    cout << "ingrese la altura del rectangulo:";
    cin  >> altura;
    rectangulo->setaltura(altura);
    /////////////////////////////////////////////
    cout << "ingrese la base del rectangulo:";
    cin  >> base;
    rectangulo->setbase(base);

}

void Program::mostrardatos()
{
    cout << "su area es de :"     <<rectangulo->area()<<endl
         << "su perimetro es de: "<<rectangulo->perimetro()<<endl;
}
