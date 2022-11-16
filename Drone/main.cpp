

#include "./interface/IdeliveryDrone.hpp"
#include "./interface/Idrone.hpp"
#include "./include/Deliverydrone.hpp"
#include "./include/Prodrone.hpp"
#include "./include/standarDrone.hpp"



int main()
{
    Idrone* drone1 = new Prodrone();
    IdeliveryDrone* drone2 = new Deliverydrone();


    drone1->takeOff();
    drone2->unloadPackage();
    

   
    
    
   

    delete drone1;
    delete drone2;
    return 0;
}


