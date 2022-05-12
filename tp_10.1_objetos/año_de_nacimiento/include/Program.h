#ifndef PROGRAM_H
#define PROGRAM_H

#include <Persona.h>


class Program : public Persona
{
    public:
        Program();
        virtual ~Program();
        void cargarDatos();
        void mostrarPersona();

     private:

        Persona* persona = new Persona;

};

#endif // PROGRAM_H
