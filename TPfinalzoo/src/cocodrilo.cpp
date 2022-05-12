#include "..\include\cocodrilo.h"
#include <iostream>

using namespace std;

cocodrilo::cocodrilo()
{
    tipoanimal = "cocodrilo";
}

cocodrilo::~cocodrilo()
{
    //dtor
}

void cocodrilo::comer()
{
    cout << "comiendo carne"<<endl;
}

void cocodrilo::getestadodemadre()
{
    cout << ponerhuevos() <<endl;
}

string cocodrilo::gettipodeanimal()
{
    return tipoanimal;
}
string cocodrilo::ponerhuevos()
{
     return "desovando en el nido";
}



void cocodrilo::mostrarlistadeanimal()
{
    cout << "nombre:"<<getnombre()<<endl;
    cout << "codigo:"<<getcodigo()<<endl;
    cout << "animal:"<<gettipodeanimal()<<endl;

    if (getcome()==true)
    {
       comer();
    }
    if (getdorm()==true)
    {
        dormir();
    }
    if(getreproduccion()==true)
    {
        getestadodemadre();
    }
   cout <<"---------------------------"<<endl;
}



