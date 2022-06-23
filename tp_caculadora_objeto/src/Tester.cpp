#include "../include/Tester.h"

 
void Tester::testSuma()
{    
    calcu.setn1(2);
    calcu.setn2(2);
    if (calcu.suma()==4)
    {
        cout<< "approved test";
    }

}

void Tester::testResta()
{
    calcu.setn1(2);
    calcu.setn2(2);

    if (calcu.resta()==0)
    {
        cout <<"approved test";
    }
}

void Tester::testMultiplicacion()
{
    calcu.setn1(2);
    calcu.setn2(2);

    if (calcu.multiplicacion()==4)
    {
        cout <<"approved test";
    }

}

void Tester::testDivision()
{
      calcu.setn1(2);
    calcu.setn2(2);

    if (calcu.divicion()==1)
    {
        cout <<"approved test";
    }
}
