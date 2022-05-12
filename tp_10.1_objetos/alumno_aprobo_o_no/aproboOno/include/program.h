#ifndef PROGRAM_H
#define PROGRAM_H

#include <alumno.h>


class program : public alumno
{
    public:
        program();
        virtual ~program();
        void cargardatos();
        void mostraralumno();

    private:

        alumno* Alumno = new alumno;

};

#endif // PROGRAM_H
