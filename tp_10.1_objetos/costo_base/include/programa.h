#ifndef PROGRAMA_H
#define PROGRAMA_H

#include <articulo.h>


class programa : public articulo
{
    public:
        programa();
        virtual ~programa();
        void crearArticuloYcargarcostobase();
        void menu();
        void mostrarpvpmayor();
        void mostrarpvpdetal();


    private:

         articulo* Articulo = new articulo;
};

#endif // PROGRAMA_H
