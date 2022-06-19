#ifdef LIST_H
#define LIST_H


#include <iostream>
#include "Employee.hpp"
using namespace std;


class List 
{
private:
   
   const int max =100;
   Employee* List[max];
   int cont = 0;
   
};




#endif // LIST_H