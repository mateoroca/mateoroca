#ifndef MURCIELAGO_H
#define MURCIELAGO_H

#include "mamifero.h"


class murcielago : public mamifero
{
    public:
        murcielago();
        virtual ~murcielago();
        string amamantar();
        void comer();
        void getestadodemadre();
        string gettipodeanimal();
        void mostrarlistadeanimal();

    private:

        string tipodeanimal;
};

#endif // MURCIELAGO_H
