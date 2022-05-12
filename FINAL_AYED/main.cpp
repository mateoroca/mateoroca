#include <iostream>
#include "./include/figura.h"
#include "./include/circulo.h"
#include "./include/cuadrado.h"

using namespace std;

int main()
{
     figura* figuras[3];

    int rad,lad;

    cout << " dijite el radio del circulo: ";
    cin  >> rad;

    cout << "digite la dimencion del lado del cuadrado:";
    cin  >>lad;


    figura* Circulo = new circulo(rad);

    figura* Cuadrado = new cuadrado(lad);

   figuras[0]= Circulo;
   figuras[1]= Cuadrado;

    system("cls");

    cout <<"el perimetro del circulo es:" <<figuras[0]->perimetro()<<endl;
    cout <<"el area del circulo es:" <<figuras[0]->area()          <<endl;


    cout <<"el perimetro del cuadrado es:" <<figuras[1]->perimetro()<<endl;
    cout <<"el area del cuadrado es:" <<figuras[1]->area()          <<endl;



     delete Circulo;
     delete Cuadrado;






    return 0;
}
