
/* #include <gtest/gtest.h> */
#include "../include/Prodrone.hpp"

#include <iostream>
#include <catch2/catch_test_macros.hpp>



TEST_CASE( "ProDrone Test", "[takeoff]" ) 
{
    // Arrange
    
    bool isFlying = true;
    Prodrone ProD;
    ProD.takeOff();
    // Act
    bool FlyState = ProD.getisFkying();

    // Assert
    REQUIRE( isFlying == FlyState );
}

TEST_CASE( "ProDrone Test", "[toLand]" )
{
    bool isFlying = false;
    Prodrone ProD;
    ProD.toLand();
    // Act
    bool FlyState = ProD.getisFkying();

    // Assert
    REQUIRE( isFlying == FlyState );
}

TEST_CASE( "ProDrone Test", "[ascend]" )
{
    // Arrange
    Prodrone proD;

    proD.takeOff();

    int height = proD.getHeight();

    proD.ascend();

    // Assert
    REQUIRE( height < proD.getHeight() );
}

TEST_CASE( "ProDrone Test", "[descend]" )
{
     // Arrange
    Prodrone proD;

    proD.takeOff();

    int height = proD.getHeight();
    
    proD.descend();
    
    // Assert
    REQUIRE( height > proD.getHeight() );

}

TEST_CASE( "ProDrone Test", "[speedUp]" )
{
     // Arrange
    Prodrone proD;

    int speed = proD.getSpeed();
    
    proD.speedUp();
    
    // Assert
    REQUIRE( speed < proD.getSpeed() );

}


TEST_CASE( "ProDrone Test", "[speedDown]" )
{
     // Arrange
    Prodrone proD;

    proD.speedUp();

    int speed = proD.getSpeed();
    
    proD.speedDown();
    
    // Assert
    REQUIRE( speed > proD.getSpeed() );

}


