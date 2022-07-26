#ifndef MANAGER_
#define MANAGER_

#include "../include/List.h"
#include "../include/Employee.h"

class Manager 
{
  private:
     List employees ;
  public:
     
    void SaveEmployee(Employee*);
    void showEmployees();
    int numberOfEmployeesOnProduction();
    int numberOfEmployeesOnSales();
    int numberOfEmployeesOnMarketing();  
    bool getTotalAmountOfEmployeesPerArea(string , string);
};

#endif