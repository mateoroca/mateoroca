#ifndef PRODRONE_HPP
#define PRODRONE_HPP

#include <iostream>
#include "./Idrone.hpp"

class Prodrone :public Idrone
{
private:

     int speed;
     int height;
     bool isFlying;
     bool automode;

public:

     Prodrone(){}
     ~Prodrone(){}
     void takeOff();
     void toLand();
     void ascend();
     void descend();
     void turnRight();
     void turnLeft();
     void speedUp();
     void speedDown();
     void automaticNavigation();
     int  getSpeed();
     int  getHeight();
     bool getisFlying();
     bool getAutomode();


};



#endif // !1