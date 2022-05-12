#include "program.h"
#include <iostream>

using namespace std;

program::program()
{
    //ctor
}

program::~program()
{
    delete Alumno;
    cout << "objeto eliminado";

}

void program::cargardatos()
{
    string cedula,nombre;
    float nota1,nota2,nota3;

    cout << "ingrese la cedula del alumno: ";
    cin  >> cedula;
    Alumno->setcedula(cedula);
    //////////////////////////////////////////
    cout << "ingrese el nombre del alumno: ";
    cin  >>nombre;
    Alumno->setnombre(nombre);
    /////////////////////////////////////////
    cout << "ingrese la nota 1 del 1 al 100 :";
    cin  >> nota1;
    Alumno->setnota1(nota1);
    /////////////////////////////////////////
    cout <<"ingrese la nota 2 del 1 al 100 : ";
    cin  >>nota2;
    Alumno->setnota2(nota2);
    ////////////////////////////////////////
    cout << "ingrese la nota 3 del 1 al 100 :";
    cin  >> nota3;
    Alumno->setnota3(nota3);
}

////////////////////////////////////////////////////////

void program::mostraralumno()
{
    cout << "nombre: "<<Alumno->getnombre()<<endl
         << "cedula: "<<Alumno->getcedula()<<endl;
         Alumno->aproRepro();


}





