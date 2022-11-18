#ifndef STANDARDRONE_HPP
#define STANDARDRONE_HPP

#include "./Idrone.hpp"
#include <iostream>

class standarDrone : public Idrone
{
private:
     int  speed;
     int  height;
     bool isFlying;
public:
    standarDrone();
    ~standarDrone(){}
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
};




#endif // DEBUG