#ifndef IDELIVERYDRONE_hpp
#define IDELIVERYDRONE_hpp

#include "../interface/IDelivery.h"
#include "../interface/Idrone.hpp"


class IdeliveryDrone :public Idrone , IDelivery
{
public:
    
    virtual void unloadPackage() =0;
    virtual void takeAPicture()  =0;
    virtual void notifyDelivery()=0;
    virtual void takeOff()       =0;
    virtual void toLand()        =0;
    virtual void ascend()        =0;
    virtual void descend()       =0;
    virtual void turnRight()     =0;
    virtual void turnLeft()      =0;
    virtual void speedUp()       =0;
    virtual void speedDown()     =0;

    ~IdeliveryDrone(){}
};


#endif