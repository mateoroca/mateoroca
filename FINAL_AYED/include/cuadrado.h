#ifndef CUADRADO_H
#define CUADRADO_H

#include <figura.h>


class cuadrado : public figura
{
    public:
        cuadrado(float);
        virtual ~cuadrado();
        float perimetro();
        float area();

    private:
        float lado;
};

#endif // CUADRADO_H
