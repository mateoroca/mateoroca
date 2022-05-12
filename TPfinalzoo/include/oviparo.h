#ifndef OVIPARO_H
#define OVIPARO_H
#include <iostream>
#include "animal.h"
using namespace std;


class oviparo : public animal
{
    public:

        oviparo();
        virtual ~oviparo();
       virtual string ponerhuevos()=0;

    private:





};

#endif // OVIPARO_H
