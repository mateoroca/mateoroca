#ifndef RECTANGULO_H
#define RECTANGULO_H


class Rectangulo
{
    public:
        Rectangulo();
        virtual ~Rectangulo();
        void setaltura(float);
        float getaltura();
        void setbase(float);
        float getbase();
        float area();
        float perimetro();

    private:
        float altura;
        float base;
};

#endif // RECTANGULO_H
