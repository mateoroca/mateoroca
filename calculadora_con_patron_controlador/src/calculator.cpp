#include <iostream>
#include "../include/calculator.h"





Calculator::Calculator()
{
   
}

Calculator::~Calculator()
{
}

int Calculator::suma()
{
    return this->n1+this->n2;
}

int Calculator::resta()
{
    return this->n1-this->n2;
}

int Calculator::multiplicacion()
{
    return this->n1*this->n2;
}
float Calculator::divicion()
{
    return this->n1/this->n2;
}
void Calculator::setn1(int n1)
{
   this->n1 = n1;
}

void Calculator::setn2(int n2)
{
   this->n2 = n2;
}

