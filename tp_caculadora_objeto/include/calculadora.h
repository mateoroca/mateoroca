#pragma once 

#include <iostream>
using namespace std;


class Calculadora
{
public:
    Calculadora();
   int suma();
   int resta();
   int multiplicacion();
   float divicion();
   void setn1(int);
   void setn2(int);
   int getn1();
   int getn2();
   //void mostrarresultado();
    ~Calculadora();

private:

 int  n1,n2;
    
};
