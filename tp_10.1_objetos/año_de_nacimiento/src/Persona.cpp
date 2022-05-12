#include "Persona.h"

Persona::Persona()
{
    //ctor
}

Persona::~Persona()
{
    //dtor
}
////////////////////////////////////////
void Persona::setnombre(string nombre)
{
    this->nombre= nombre;
}
////////////////////////////////////////
string Persona::getnombre()
{
    return nombre;
}
////////////////////////////////////////
 void Persona::setdiadn(int dia)
 {
     this->diaDN = dia;
 }
////////////////////////////////////////
int Persona::getdiadn()
{
    return diaDN;
}
////////////////////////////////////////7
void Persona::setmesdn(int mes)
{
    this-> mesDN= mes;
}
////////////////////////////////////////
int Persona::getmesdn()
{
    return mesDN;
}
////////////////////////////////////////
void Persona::setannodn(int ano)
{
    this->annoDN= ano;
}
////////////////////////////////////////
int Persona::getannodn()
{
    return annoDN;
}
///////////////////////////////////////
void Persona::setdiaact(int dia)
{
    this->diaACT= dia;
}
///////////////////////////////////////
int Persona::getdiaact()
{
    return diaACT;
}
///////////////////////////////////////
void Persona::setmesact(int mes)
{
    this->mesACT= mes;
}
///////////////////////////////////////
int Persona::getmesact()
{
    return mesACT;
}
///////////////////////////////////////
void Persona::setannoact(int anno)
{
    this->annoACT=anno;
}
////////////////////////////////////////
int Persona::getannoact()
{
    return annoACT;
}
///////////////////////////////////////
int Persona::obtenerEdad()
{
    return getannoact()- getannodn();
}
///////////////////////////////////////







