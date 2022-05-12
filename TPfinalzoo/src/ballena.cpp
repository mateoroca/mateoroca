#include "..\include\ballena.h"
#include <iostream>

using namespace std;

ballena::ballena()
{
    tipodeanimal = "ballena";
}

ballena::~ballena()
{

}
void ballena::comer()
{
    cout <<"comiendo plancton"<<endl;
}




void ballena::getestadodemadre()
{
    cout << amamantar() << endl;
}



string ballena::gettipodeanimal()
{
    return tipodeanimal;
}

string ballena::amamantar()
{
    return "amamantando mi ballenato";
}

void ballena::mostrarlistadeanimal()
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



