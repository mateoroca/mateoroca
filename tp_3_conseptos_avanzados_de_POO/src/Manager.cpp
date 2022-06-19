#include "../include/Manager.hpp"
#include "../include/Employee.hpp"
#include "../include/List.hpp"
#include <iostream>
using namespace std;


Employee public::newEmployee()A
{    
    string name,WorkArea;
    int dni;

    cout << "enter employee name:";
    cin  >> name;A
    
    cout << "enter employee dni:";
    cin  >> dni;

    cout << "enter employee work area:";
    cin  >> WorkArea;
    
    return this;   /* -> Employee* EMPLOYEE = new Employe(dni,name,WorkArea); */
   
}
