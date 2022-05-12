#ifndef COCODRILO_H
#define COCODRILO_H
#include <iostream>
#include "oviparo.h"

using namespace std;


class cocodrilo : public oviparo
{
    public:
        cocodrilo();
        virtual ~cocodrilo();
        void comer();
        void getestadodemadre();
        string gettipodeanimal();
        string ponerhuevos();
        void mostrarlistadeanimal();
    private:

    string tipoanimal;
};

#endif // COCODRILO_H
