#include <iostream>

using namespace std;


template <typename T> //identificador de tipo: T
class Coordenada
{
private:
  T x; //atributos de tipo T
  T y;
  
public:
  Coordenada(T x, T y); //parámetros de tipo T
 
  void mostrarCordenadas();

};

template <typename T>
Coordenada<T>::Coordenada(T x, T y){
  this -> x = x;
  this -> y = y;
}

template <typename T>
void Coordenada<T>::mostrarCordenadas()
{
  cout <<"coordenada x:" << x <<endl;
  cout <<"coordenada y:" << y <<endl;
}

int main()
{
    
   Coordenada<double> lugar(14.3,76.5);

   lugar.mostrarCordenadas();

   Coordenada<string> destino("castelli","san juan");

   destino.mostrarCordenadas();

    
   
   


    return 0;
}
