#include "circulo.h"
#include <iostream>
#include <cmath>
using namespace std;


circulo::circulo(float radio)
{
   this->radio = radio;
}

circulo::~circulo()
{
    cout <<"se elimino el circulo"<<endl;
}


float circulo::perimetro()
{
    return 2*3.14*radio;
}

float circulo::area()
{
    return 3.14*pow(radio,2);
}
