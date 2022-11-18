#include "./Prodrone.hpp"



void Prodrone::takeOff()
{
    this->height = 10;
    this->isFlying = true;
}

void Prodrone::toLand()
{
    this->height = 0;
    this->isFlying = false;
}

void Prodrone::ascend()
{
    this-> height + 5;
}

void Prodrone::descend()
{
    this->height - 5;
}

void Prodrone::turnRight()
{
    std::cout << "turnig right";
}

void Prodrone::turnLeft()
{
    std::cout << "turnig left";
}

void Prodrone::speedUp()
{
    this->speed + 5 ;
}

void Prodrone::speedDown()
{
    this->speed - 5;
}

void Prodrone::automaticNavigation()
{
    std::cout << "automatic navigation is on";
    this->automode = true;
}

int Prodrone::getSpeed()
{
    return speed;
}

int Prodrone::getHeight()
{
    return height;
}

bool Prodrone::getisFlying()
{
    return isFlying;
}

bool Prodrone::getAutomode()
{
    return automode;
}



