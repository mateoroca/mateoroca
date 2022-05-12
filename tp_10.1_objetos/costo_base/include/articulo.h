#ifndef ARTICULO_H
#define ARTICULO_H


class articulo
{
    public:

        articulo();
        virtual ~articulo();
        void setcostobase(float);
        float getcostobase();
        float pvpmayor();
        float pvpdetal();

   private:

       float costobase;


};

#endif // ARTICULO_H
