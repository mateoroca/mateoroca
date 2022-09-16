#ifndef CALCULATOR
#define CALCULATOR

#include <iostream>




class Calculator
{
public:
    Calculator();
    ~Calculator();
   int suma();
   int resta();
   int multiplicacion();
   float divicion();
   void setn1(int);
   void setn2(int);
   
   
   

private:

 int  n1,n2;
    
};

#endif