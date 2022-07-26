#ifndef  LIST.H_
#define LIST.H_ 


#include "../include/Employee.h"

class List
{
    Employee* employees[100];
    int cont = 0;
public: 
    void showList();
    void addEmployee(Employee* employee);
    string obtainWorkArea(int);
    int getCount();
   
    
   

};

#endif 