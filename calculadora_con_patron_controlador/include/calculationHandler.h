#ifndef CALCULATIONHANDLER
#define CALCULATIONHANDLER
 #include "calculator.h"
 #include "displayHandler.h"


class calculationHandler 
{
   Calculator CALCU;
   displayHandler SHOW;

public:
   calculationHandler();
   
   void operateCalculator();

};

#endif // !calculationhandler