#ifndef ANIMAL_H
#define ANIMAL_H
#include <string>
#include <iostream>

using namespace std;

class animal
{
    private:
        string nombre;
        int codigo;
        bool reproduccion;
        bool come;
        bool dorm;

    public:

        animal();
        virtual void mostrarlistadeanimal()=0;
        virtual void comer()=0;
        virtual void getestadodemadre()=0;
        virtual string gettipodeanimal()=0;
        void dormir();
        void setnombre(string);
        void setcodigo(int codigo);
        void setreproduccion(bool);
        void setcomer(bool);
        void setdormir(bool);
        string getnombre();
        int getcodigo();
        bool getreproduccion();
        bool getcome();
        bool getdorm();
};

#endif // ANIMAL_H
