#ifndef DELIVERYDRONE_HPP
#define DELIVERYDRONE_HPP
#include<iostream>

#include "../interface/IdeliveryDrone.hpp"



class Deliverydrone : public IdeliveryDrone
{
private:
     int  speed      = 0;
     int  height     = 0;
     bool isFlying   = false;
     bool haspackage = true;

public:
    Deliverydrone();
    ~Deliverydrone();
    void unloadPackage();
    void takeAPicture();
    void notifyDelivery();
    void takeOff();
    void toLand();
    void ascend();
    void descend();
    void turnRight();
    void turnLeft();
    void speedUp();
    void speedDown();
    int getSpeed();
    int getHeight();
    bool getIsFlying();
    bool hasPackage();

};



#endif // !