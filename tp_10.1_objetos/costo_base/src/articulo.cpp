#include "articulo.h"
#include <iostream>
#include <cmath>
 using namespace std;

articulo::articulo()
{
    //ctor
}

articulo::~articulo()
{

}

 void articulo::setcostobase(float costobase)
 {
     this->costobase = costobase;
 }

  float articulo:: getcostobase()
  {
      return costobase;
  }

  float articulo::pvpmayor()
  {
      return costobase +(costobase*0.15);
  }

  float articulo::pvpdetal()
  {
      return costobase+(costobase*0.30);
  }







