#include "alumno.h"
#include <iostream>
#include <string>

using namespace std;

alumno::alumno()
{
    //ctor
}

alumno::~alumno()
{
    //dtor
}

  void alumno::setcedula(string cedula)
  {
      this->cedula = cedula;
  }
  ///////////////////////////////////////
  string alumno::getcedula()
  {
      return cedula;
  }
  /////////////////////////////////////////
  void alumno::setnombre(string nombre)
  {
      this ->nombre = nombre;
  }
  /////////////////////////////////////////
  string alumno::getnombre()
  {
      return nombre;
  }
  ////////////////////////////////////////
  void alumno::setnota1(float nota1)
  {
      this->nota1 = nota1;
  }
  ////////////////////////////////////////
  float alumno::getnota1()
  {
      return nota1;
  }
  ///////////////////////////////////////
  void alumno::setnota2(float nota2)
  {
      this->nota2 = nota2;
  }
  ////////////////////////////////////////
  float alumno::getnota2()
  {
      return nota2;
  }
  ////////////////////////////////////////
  void alumno::setnota3(float nota3)
  {
      this->nota3 = nota3;
  }
  /////////////////////////////////////////
  float alumno::getnota3()
  {
      return nota3;
  }
  /////////////////////////////////////////
  float alumno::notafinal()
  {
      return nota1+nota2+nota3;
  }
  /////////////////////////////////////////
  void alumno::aproRepro()
  {
      if(notafinal()>=48)
        cout << "aprobado"    <<endl;
      else
        cout << "desaprobado" <<endl;

  }
  ////////////////////////////////////////









