#ifndef PERSONA_H
#define PERSONA_H
#include <iostream>
using namespace std;


class Persona
{
    public:
        Persona();
        virtual ~Persona();
        void setnombre(string);
        string getnombre();
        void setdiadn(int);
        int getdiadn();
        void setmesdn(int);
        int getmesdn();
        void setannodn(int);
        int getannodn();
        void setdiaact(int);
        int getdiaact();
        void setmesact(int);
        int getmesact();
        void setannoact(int);
        int getannoact();
        int obtenerEdad();


    private:
        string nombre;
        int diaDN;
        int mesDN;
        int annoDN;
        int diaACT;
        int mesACT;
        int annoACT;

};

#endif // PERSONA_H
