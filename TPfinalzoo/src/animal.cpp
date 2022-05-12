#include "..\include\animal.h"

using namespace std;

animal::animal()
{
    reproduccion = false;
    come = false;
    dorm = false;
}


void animal::dormir()
{
    cout <<"estoy durmiendo"<<endl;
}

void animal::setnombre(string nombre)
{

    this ->nombre = nombre;
}

void animal::setcodigo(int codigo)
{

    this->codigo = codigo;
}
void animal::setreproduccion(bool reproduccion)
{
    this->reproduccion=reproduccion;
}

void animal::setcomer(bool comer)
{
    this->come= comer;
}

void animal::setdormir(bool dormir)
{
    this->dorm=dormir;
}

string animal::getnombre()
{
    return nombre;
}

int animal::getcodigo()
{
    return codigo;
}

bool animal::getreproduccion()
{
    return reproduccion;
}
bool animal::getcome()
{
    return come;
}

bool animal::getdorm()
{
    return dorm;
}







