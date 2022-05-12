#include "cuadrado.h"
#include <iostream>

using namespace std;

cuadrado::cuadrado(float lado)
{
  this->lado= lado;
}

cuadrado::~cuadrado()
{
    cout << "se elimino el cuadrado"<<endl;
}

float cuadrado::perimetro()
{
    return 4*lado;
}

float cuadrado::area()
{
    return lado*lado;
}
