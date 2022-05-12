#include "..\include\pelicano.h"
#include <iostream>

using namespace std;

pelicano::pelicano()
{
    tipodeanimal="pelicano";
}

pelicano::~pelicano()
{
    //dtor
}

string pelicano::ponerhuevos()
{
    return "poniendo huevos en mi nido del arbol";
}

void pelicano::comer()
{
    cout << "comiendo peces,ranas y crustaceos"<<endl;
}
void pelicano::getestadodemadre()
{
    cout << ponerhuevos()<<endl;
}

string pelicano::gettipodeanimal()
{
    return tipodeanimal;
}


void pelicano::mostrarlistadeanimal()
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
