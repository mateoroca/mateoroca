#ifndef ALUMNO_H
#define ALUMNO_H
#include <string>
using namespace std;


class alumno
{
    public:
        alumno();
        virtual ~alumno();
        void setcedula(string);
        string getcedula();
        void setnombre(string);
        string getnombre();
        void setnota1(float);
        float getnota1();
        void setnota2(float);
        float getnota2();
        void setnota3(float);
        float getnota3();
        float notafinal();
        void aproRepro();


    private:
        string cedula;
        string nombre;
        float nota1;
        float nota2;
        float nota3;


};

#endif // ALUMNO_H
