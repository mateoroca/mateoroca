#include "..\include\murcielago.h"

murcielago::murcielago()
{
   tipodeanimal="murcielago";
}

murcielago::~murcielago()
{
    //dtor
}

string murcielago::amamantar()
{
    return "amamantando mis crias con leche y nectar regurgitado";
}

void murcielago::comer()
{
    cout << "tomando sangre"<<endl;
}

void murcielago::getestadodemadre()
{
    cout << amamantar()<<endl;
}

string murcielago::gettipodeanimal()
{
    return tipodeanimal;
}


void murcielago::mostrarlistadeanimal()
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
