
#include "../googletest/googletest/include/gtest/gtest.h"

#include "../librery/IdeliveryDrone.hpp"
#include "../librery/Idrone.hpp"
#include "../librery/Deliverydrone.hpp"
#include "../librery/Prodrone.cpp"
#include "../librery/IDelivery.h"

#include <iostream>



TEST( ProDrone,takeoff ) 
{
    
    Idrone* proD = new Prodrone();

    proD->takeOff();

    EXPECT_TRUE(proD->getisFlying());
   
}

TEST( ProDrone,toLand )
{

    Idrone* proD = new Prodrone();
    proD->toLand();

    EXPECT_FALSE(proD->getisFlying());
}

TEST( ProDrone,ascend )
{
    
    Idrone* proD = new Prodrone();

    
    proD->ascend();
   
    EXPECT_EQ(proD->getHeight(),5);
}

TEST( ProDrone,descend )
{
     
    Idrone* proD = new Prodrone();

    proD->takeOff();
    proD->descend();
   
    EXPECT_EQ(proD->getHeight(),5);

}

TEST( ProDrone,speedUp )
{
     
    Idrone* proD = new Prodrone();

    
    proD->speedUp();
   
    EXPECT_EQ(proD->getSpeed(),5);

}


TEST( ProDrone ,speedDown )
{
     
   Idrone* proD = new Prodrone();

    proD->speedUp();
    proD->speedDown();

   EXPECT_EQ(proD->getSpeed(),0);

}


