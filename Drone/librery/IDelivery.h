#ifndef IDELIVERY_H
#define IDELIVERY_H

#pragma once

class IDelivery
{
public:
    
    ~IDelivery(){}
    virtual void unloadPackage() =0;
    virtual void takeAPicture()  =0;
    virtual void notifyDelivery()=0;

private:

};

#endif