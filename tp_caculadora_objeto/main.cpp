#include <iostream>
using namespace std;
#include "./include/calculadora.h"



int main()
{

    Calculadora* calcu = new Calculadora();

    calcu->setn1(8);
    calcu->setn2(2);
    

    cout << calcu->divicion();

    delete calcu;

    return 0;
}