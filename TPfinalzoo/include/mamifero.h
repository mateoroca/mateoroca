#ifndef MAMIFERO_H
#define MAMIFERO_H
#include "animal.h"
#include <string>

using namespace std;

class mamifero : public animal
{
     public:

       virtual ~mamifero();
       virtual  string amamantar()=0;

    private:



};

#endif // MAMIFERO_H
