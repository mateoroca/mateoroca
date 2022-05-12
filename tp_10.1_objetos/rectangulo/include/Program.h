#ifndef PROGRAM_H
#define PROGRAM_H

#include <Rectangulo.h>


class Program : public Rectangulo
{
    public:
        Program();
        virtual ~Program();
        void cargardatos();
        void mostrardatos();



    private:

        Rectangulo* rectangulo = new Rectangulo;


};

#endif // PROGRAM_H
