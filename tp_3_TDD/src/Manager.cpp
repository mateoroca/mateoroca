
#include "../include/Manager.h"



bool Manager::getTotalAmountOfEmployeesPerArea(string area, string especify){
    return ( area == especify );
}


int Manager::numberOfEmployeesOnMarketing()
{
   
int Marketing = 0;

    for(int i = 0; i < employees.getCount() ; i++)
    {   
        
        Marketing += getTotalAmountOfEmployeesPerArea(employees.obtainWorkArea(i),"marketing");
    }
    return Marketing;

}

int Manager ::numberOfEmployeesOnProduction()
{

 int Production = 0;

    for(int i = 0; i < employees.getCount() ; i++)
    {   
        
        Production += getTotalAmountOfEmployeesPerArea(employees.obtainWorkArea(i),"production");
    }
    return Production;
}

int Manager::numberOfEmployeesOnSales()
{
   int Sales = 0;

    for(int i = 0; i < employees.getCount() ; i++)
    {   
        
        Sales += getTotalAmountOfEmployeesPerArea(employees.obtainWorkArea(i),"sales");
    }
    return Sales;
}

void Manager::SaveEmployee(Employee* EMPLOYEE)
{   
    employees.addEmployee(EMPLOYEE);
}
void Manager::showEmployees()
{
  employees.showList();
}