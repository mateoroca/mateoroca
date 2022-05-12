#ifndef PELICANO_H
#define PELICANO_H

#include "oviparo.h"
#include <iostream>

using namespace std;


class pelicano : public oviparo
{
    public:
        pelicano();
        virtual ~pelicano();
        string ponerhuevos();
        void comer();
        void getestadodemadre();
        string gettipodeanimal();
        void mostrarlistadeanimal();

    private:

        string tipodeanimal;


};

#endif // PELICANO_H
