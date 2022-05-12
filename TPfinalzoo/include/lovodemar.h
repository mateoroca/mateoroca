#ifndef LOVODEMAR_H
#define LOVODEMAR_H

#include "mamifero.h"


class lovodemar : public mamifero
{
    public:
        lovodemar();
        virtual ~lovodemar();
        string amamantar();
        void comer();
        void getestadodemadre();
         string gettipodeanimal();
         void mostrarlistadeanimal();


    private:

        string tipodeanimal;
};

#endif // LOVODEMAR_H
