
#ifdef MANAGER_HPP
#define MANAGER_HPP

#include "Employee.hpp"
#include "List.hpp"
#include <iostream>
using namespace std;

class Manager 
{
  private:
     List* ListEmployees;
  public:
   
    void SaveEmployee(Emloyee*);
    void showEmployeesSales();
    void showEmployeesMarketing();
    void showEmployeesProduction();
    void showAllEmployees();
    
}


#endif // MANAGER_HPP