#include "..\include\lovodemar.h"

lovodemar::lovodemar()
{
    tipodeanimal="lovo de mar";
}

lovodemar::~lovodemar()
{
    //dtor
}

string lovodemar::amamantar()
{
    return "amamantando a sus lovitos";
}

void lovodemar::comer()
{
    cout << "comiendo peces del mar"<<endl;
}

void lovodemar::getestadodemadre()
{
    cout << amamantar()<<endl;
}

string lovodemar::gettipodeanimal()
{
    return tipodeanimal;
}



void lovodemar::mostrarlistadeanimal()
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



