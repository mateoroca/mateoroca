
#include "./standarDrone.hpp"





void standarDrone::takeOff()
{
    this->height   = 10;
    this->isFlying = true;
}

void standarDrone::toLand()
{
    this->height = 0;
    this->isFlying = false;
}

void standarDrone::ascend()
{
    this->height + 5;

}

void standarDrone::descend()
{
    this->height - 5;
}

void standarDrone::turnRight()
{
    std::cout << "turning right";

}

void standarDrone::turnLeft()
{
    std::cout << "turning left";
}

void standarDrone::speedUp()
{
    this->speed + 5;
}

void standarDrone::speedDown()
{
    this->speed - 5;
}

int standarDrone::getSpeed()
{
    return speed;
}

int standarDrone::getHeight()
{
    return height;
}

bool standarDrone::getIsFlying()
{
    return isFlying;
}



