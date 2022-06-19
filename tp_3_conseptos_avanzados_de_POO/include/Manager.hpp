
#ifdef MANAGER_HPP
#define MANAGER_HPP
#include "Employees.hpp"
#include "List.hpp"


#include <iostream>
using namespace std;

class Manager;
public:
{
    Manager();
    ~Manager();
    void newEmployees(Employess*);
  /*   void saveEmployees(Employess*); */
    void showListSales(List*);
    void showListProduction(List*);
    void showListMarketing(List*);
    void showEmployees( List*);
    void start();
};








#endif // MANAGER_HPP