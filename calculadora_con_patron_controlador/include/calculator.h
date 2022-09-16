#ifndef CALCULATOR
#define CALCULATOR

#include <iostream>




class Calculator
{
public:
    Calculator();
   int suma();
   int resta();
   int multiplicacion();
   float divicion();
   void setn1(int);
   void setn2(int);
   
   
    ~Calculator();

private:

 int  n1,n2;
    
};

#endif