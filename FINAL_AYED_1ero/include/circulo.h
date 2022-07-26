#ifndef CIRCULO_H
#define CIRCULO_H

#include <figura.h>


class circulo : public figura
{
    public:
        circulo(float);
        virtual ~circulo();
         float perimetro();
         float area();

    private:

    float radio;

};

#endif // CIRCULO_H
