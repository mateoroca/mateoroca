#ifndef IDRONE_HPP
#define IDRONE_HPP

class Idrone
{

public:

    virtual void takeOff()    =0;
    virtual void toLand()     =0;
    virtual void ascend()     =0;
    virtual void descend()    =0;
    virtual void turnRight()  =0;
    virtual void turnLeft()   =0;
    virtual void speedUp()    =0;
    virtual void speedDown()  =0;
    virtual int  getSpeed()   =0;
    virtual int  getHeight()  =0;
    virtual bool getisFlying()=0;

    ~Idrone(){}
};





#endif // !