#ifndef GANZO_H
#define GANZO_H

#include "oviparo.h"


class ganzo : public oviparo
{
    public:
        ganzo();
        virtual ~ganzo();
        string ponerhuevos();
        void comer();
        void getestadodemadre();
        string gettipodeanimal();
        void mostrarlistadeanimal();

    private:

        string tipoanimal;

};

#endif // GANZO_H
