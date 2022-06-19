#include "../include/Employee.hpp"


Employee::Employee(int DNI,string NAME,string WORKAREA)
{
   this->dni = DNI;
   this->name = NAME;
   this->WorkArea = WORKAREA;
}

Employee::~Employee()
{
    
}

int Employee::getDni()
{
    return dni;
}

string Employee::getName()
{
    return name;
}

string Employee::getWorkArea()
{
    return WorkArea;
}




