#include "..\include\ganzo.h"

ganzo::ganzo()
{
    tipoanimal="ganzo";
}

ganzo::~ganzo()
{
    //dtor
}

string ganzo::ponerhuevos()
{
    return "poniendo huevos en mi nido de plumas";
}

void ganzo::comer()
{
    cout <<"comiendo pasto"<<endl;
}

void ganzo::getestadodemadre()
{
    cout << ponerhuevos()<<endl;
}

string ganzo::gettipodeanimal()
{
    return tipoanimal;
}

void ganzo::mostrarlistadeanimal()
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







