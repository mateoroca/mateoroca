#include <iostream>
using namespace std;
#include "./include/calculadora.h"
#include "./include/Tester.h"




int main()
{

    Calculadora* calcu = new Calculadora();

    calcu->setn1(2);
    calcu->setn2(2);
    
    cout <<"suma:";
    cout << calcu->suma();
    cout<<endl;
     cout <<"resta:";
    cout << calcu->resta();
    cout<<endl;
     cout <<"multiplicacion:";
    cout << calcu->multiplicacion();
    cout<<endl;
     cout <<"divicion:";
    cout << calcu->divicion();

    cout<<endl;

    Tester* tester = new Tester();

    cout << "resultado de la prueba suma:";
    tester->testSuma();
    cout<<endl;
    cout << "resultado de la prueba resta:";
    tester->testResta();
    cout<<endl;
    cout << "resultado de la prueba multiplicacion:";
    tester->testMultiplicacion();
    cout<<endl;
    cout << "resultado de la prueba divicion:";
    tester->testDivision();


    


    delete calcu;
    delete tester;

    return 0;
}