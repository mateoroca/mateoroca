#include "./Deliverydrone.hpp"


void Deliverydrone::unloadPackage()
{
    this->haspackage = false;
}

void Deliverydrone::takeAPicture()
{
    std::cout << "Picture taken";
}

void Deliverydrone::notifyDelivery()
{
    std::cout << "the pedido was delivered";
}

void Deliverydrone::takeOff()
{
    this->height = 10;
    this->isFlying = true;
}

void Deliverydrone::toLand()
{
    this->height = 0;
    this->isFlying = false;
}

void Deliverydrone::ascend()
{
    this->height + 5;
}

void Deliverydrone::descend()
{
    this->height - 5;
}

void Deliverydrone::turnRight()
{
    std::cout << "turning right";
}

void Deliverydrone::turnLeft()
{
    std::cout << "turnig left";
}

void Deliverydrone::speedUp()
{
    this->speed + 5;
}

void Deliverydrone::speedDown()
{
    this-> speed - 5; 
}

int Deliverydrone::getSpeed()
{
    return this->speed;
}

int Deliverydrone::getHeight()
{
    return this->height;
}

bool Deliverydrone::getIsFlying()
{
    return this->isFlying;
}

bool Deliverydrone::hasPackage()
{
    return this->haspackage;
}


