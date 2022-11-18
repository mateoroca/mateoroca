

#include "../librery/IdeliveryDrone.hpp"
#include "../librery/Idrone.hpp"
#include "../librery/Deliverydrone.hpp"
#include "../librery/Prodrone.cpp"
#include "../librery/IDelivery.h"



int main()
{
    Idrone* drone1 = new Prodrone();
    /* IdeliveryDrone* drone2 = new Deliverydrone(); */


    drone1->takeOff();
    /* drone2->unloadPackage(); */
    

    delete drone1;
    /* delete drone2; */
    return 0;
}


