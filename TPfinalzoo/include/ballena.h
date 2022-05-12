#ifndef BALLENA_H
#define BALLENA_H
#include "mamifero.h"
#include <iostream>

using namespace std;

class ballena : public mamifero
{
    public:
        ballena();
        virtual ~ballena();
        void comer();
        void getestadodemadre();
        string gettipodeanimal();
        string amamantar();
        void mostrarlistadeanimal();


    private:

     string tipodeanimal;
};

#endif // BALLENA_H
