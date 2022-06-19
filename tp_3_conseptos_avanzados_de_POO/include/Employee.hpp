#ifdef EMPLOYEE_HPP
#define EMPLOYEE_HPP

#include <iostream>
using namespace std;

class Employee 
{
private:
    int dni;
    string name;
    string WorkArea;
public:
    Employee(int,string,string);
    ~Employee();
    int getDni();
    string getName();
    string getWorkArea();
    
};



#endif 