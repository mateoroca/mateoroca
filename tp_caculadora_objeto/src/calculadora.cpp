#include <iostream>
#include "../include/calculadora.h"

using namespace std;



Calculadora::Calculadora()
{
   
}

Calculadora::~Calculadora()
{
}

int Calculadora::suma()
{
    return this->n1+this->n2;
}

int Calculadora::resta()
{
    return this->n1-this->n2;
}

int Calculadora::multiplicacion()
{
    return this->n1*this->n2;
}
float Calculadora::divicion()
{
    return this->n1/this->n2;
}
void Calculadora::setn1(int n1)
{
   this->n1 = n1;
}

void Calculadora::setn2(int n2)
{
   this->n2 = n2;
}

int Calculadora::getn1()
{
    return this->n1;
}

int Calculadora::getn2()
{
    return this->n2;
}
